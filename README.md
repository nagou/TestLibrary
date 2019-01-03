# TestLibrary
Testing static lib
This code fails to link. Following are the linker errors:
1. Error	LNK2019	unresolved external symbol "public: int __thiscall TestClass::GetInt(void)" (?GetInt@TestClass@@QAEHXZ) referenced in function "public: void __thiscall Hey::Hello(void)" (?Hello@Hey@@QAEXXZ)	TestStaticLib	C:\Users\nagou\source\repos\TestLibrary\TestStaticLib\TestStaticLib.obj	1	
2. Error	LNK2019	unresolved external symbol "public: void __thiscall TestClass::SetInt(int)" (?SetInt@TestClass@@QAEXH@Z) referenced in function "public: void __thiscall Hey::Hello(void)" (?Hello@Hey@@QAEXXZ)	TestStaticLib	C:\Users\nagou\source\repos\TestLibrary\TestStaticLib\TestStaticLib.obj	1	
3. Error	LNK2019	unresolved external symbol _main referenced in function "int __cdecl invoke_main(void)" (?invoke_main@@YAHXZ)	TestStaticLib	C:\Users\nagou\source\repos\TestLibrary\TestStaticLib\MSVCRTD.lib(exe_main.obj)	1	
