// by DiA/RRLF

getInfo = function(html, info) {
	var tag = "";
	
	if(info == 'category')   	{ tag = 'p'; }
	else if(info == 'title') 	{ tag = 'i'; }
	else if(info == 'author') 	{ tag = 'b'; }
	else if(info == 'text') 	{ tag = 'u'; }

	return html.substr(html.indexOf('<'+tag+'>') + 3, html.indexOf('</'+tag+'>') - (html.indexOf('<'+tag+'>') + 3));
}

insertResult = function(el) {
	$('#results').append('<li><a href="#readit" id="' + $(el).attr('id') + '"><strong>' + getInfo($(el).html(), 'category') + ':</strong> ' + getInfo($(el).html(), 'title') + ' <i>by ' + getInfo($(el).html(), 'author') + '</i></a></li>');
	}
	
insertCategory = function(category) {
	$('#stuff div').each(function() {
		if(getInfo($(this).html(), 'category') == category) {
			insertResult(this);
		}
	});
}

$(document).ready(function() {
	$('#stuff div').each(function(i) {
		$(this).attr('id', i);
	});
	
	$('#searchbtn').click(function() {
		var term = "";
		
		$('#results').html('');

		if($('.search input').attr('value') != '') {
			term = $('.search input').attr('value');
		} else {
			$('.search input').attr('value', 'all');
			term = 'all';
		}
		
		if(term == 'all') {
			$('#stuff div').each(function() {
				insertResult(this);
			});
		} else if(term == 'articles') {
			insertCategory('articles');
		} else if(term == 'sources') {
			insertCategory('sources');
		} else if(term == 'arts') {
			insertCategory('arts');
		} else {
			$('#stuff div').each(function() {
				if($(this).html().toUpperCase().indexOf(term.toUpperCase()) != -1) {
					insertResult(this);
				}
			});
		}
		
		$('#results a').each(function() {
			$(this).css({'opacity':'0.9'});

			$(this).click(function() {
				var el = this;
				
				$('#readit').fadeOut(1000, function() {
					$('#readit').html('<pre>' + getInfo($('#stuff #' + $(el).attr('id')).html(), 'text') + '</pre>');
					$('#readit').fadeIn(1000);
				});
			});
		});
	});
});