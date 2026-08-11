/* Ghidra address: 015eb7c0 */
/* Ghidra symbol: FUN_015eb7c0 */


bool FUN_015eb7c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_015ea8a0(L":\\Attila\\Devel Files\\Projects\\SystemC\\systemc_model_test\\systemc_model",
               *(undefined8 *)(param_1 + 0x20));
  cVar1 = FUN_015ea4c0(param_1 + 0x28);
  if (cVar1 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,
                         L"MSBuild not installed. SystemC simulation requires Microsoft .NET Framework 4 and Visual C++ Express 2010"
                        );
    FUN_004134c0(uVar3);
  }
  FUN_015ebb90(param_1);
  uVar4 = 0;
  FUN_00416cd0(param_1 + 0x18,6,*(undefined8 *)(param_1 + 0x28),L"MSBuild.exe ",&DAT_015ebaf8,
               *(undefined8 *)(param_1 + 0x20),L"\\systemc_model.vcxproj",&DAT_015ebaf8);
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x90))(*(longlong **)(param_1 + 0x40));
  FUN_01054cd0(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),1,CONCAT44(uVar4,120000),0,0);
  FUN_00416ba0(local_20,*(undefined8 *)(param_1 + 0x20),L"\\compile_log.txt");
  (**(code **)(**(longlong **)(param_1 + 0x40) + 0x100))(*(longlong **)(param_1 + 0x40),local_20[0])
  ;
  iVar2 = FUN_01b216c0(*(undefined8 *)(param_1 + 0x40),L"Build FAILED");
  FUN_00414480(local_20);
  return iVar2 == -1;
}

