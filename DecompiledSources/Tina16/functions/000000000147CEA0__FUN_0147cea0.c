/* Ghidra address: 0147cea0 */
/* Ghidra symbol: FUN_0147cea0 */


bool FUN_0147cea0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = FUN_004113d0(param_1,&LAB_00f23b78);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"JSON value is not object.");
    FUN_004134c0(uVar2);
  }
  lVar3 = FUN_00f30bd0(param_1,param_2);
  if (lVar3 != 0) {
    (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x18))(*(longlong **)(lVar3 + 0x18),local_20);
    FUN_00414ad0(param_3,local_20[0]);
  }
  FUN_00414480(local_20);
  return lVar3 != 0;
}

