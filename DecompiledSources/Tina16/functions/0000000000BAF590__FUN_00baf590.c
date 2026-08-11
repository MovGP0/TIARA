/* Ghidra address: 00baf590 */
/* Ghidra symbol: FUN_00baf590 */


undefined8 FUN_00baf590(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  wchar_t *local_38;
  undefined1 local_30;
  
  cVar1 = FUN_00baeff0(param_1);
  if (cVar1 == '\0') {
    iVar2 = -1;
  }
  else {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x38))
                      (*(longlong **)(param_1 + 0x30),param_4);
  }
  if (iVar2 < 0) {
    local_38 = L"Child not found.";
    local_30 = 0x11;
    uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,8,0,&local_38,0);
    FUN_004134c0(uVar3);
  }
  else {
    FUN_0041b840(param_2,param_4);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x40))
              (*(longlong **)(param_1 + 0x30),iVar2,param_3);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))(*(longlong **)(param_1 + 0x30),param_4);
  }
  return param_2;
}

