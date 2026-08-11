/* Ghidra address: 0147cd40 */
/* Ghidra symbol: FUN_0147cd40 */


void FUN_0147cd40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20;
  
  local_30 = 0;
  cVar1 = FUN_004113d0(param_1,&LAB_00f23b78);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"JSON value is not object.");
    FUN_004134c0(uVar2);
  }
  lVar3 = FUN_00f30bd0(param_1,param_2);
  if (lVar3 == 0) {
    local_20 = 0x11;
    local_28 = param_2;
    uVar2 = FUN_0044d530(&PTR_FUN_004334c0,1,L"Key \"%s\" not found.",&local_28,0);
    lVar3 = FUN_004134c0(uVar2);
  }
  (**(code **)(**(longlong **)(lVar3 + 0x18) + 0x18))(*(longlong **)(lVar3 + 0x18),&local_30);
  FUN_00414ad0(param_3,local_30);
  FUN_00414480(&local_30);
  return;
}

