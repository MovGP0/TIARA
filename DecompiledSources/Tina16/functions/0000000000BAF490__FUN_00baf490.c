/* Ghidra address: 00baf490 */
/* Ghidra symbol: FUN_00baf490 */


undefined8 FUN_00baf490(longlong param_1,undefined8 param_2,undefined8 param_3)

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
                      (*(longlong **)(param_1 + 0x30),param_3);
  }
  if (iVar2 < 0) {
    local_38 = L"Child not found.";
    local_30 = 0x11;
    uVar3 = FUN_00bad230(&PTR_FUN_00b9ee48,1,8,0,&local_38,0);
    FUN_004134c0(uVar3);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x20))
              (*(longlong **)(param_1 + 0x30),param_2,iVar2);
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x48))(*(longlong **)(param_1 + 0x30),param_3);
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))(*(longlong **)(param_1 + 0x30));
    if (iVar2 == 0) {
      FUN_0041b800(param_1 + 0x30);
    }
  }
  return param_2;
}

