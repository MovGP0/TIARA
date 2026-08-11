/* Ghidra address: 014954d0 */
/* Ghidra symbol: FUN_014954d0 */


void FUN_014954d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(int *)(param_1 + 0x904) == 1) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02004490);
    FUN_00b8e650(uVar2,local_20,L"d.DesignToolObject_Msg_FirstRowCannotDelete",local_28);
    FUN_01493b70(param_1,local_20[0]);
  }
  else if (1 < *(int *)(param_1 + 0x904)) {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_38,PTR_PTR_02002d78);
    FUN_00b8e650(uVar2,&local_30,L"d.DesignToolObject_Msg_DeleteRow",local_38);
    cVar1 = FUN_01493b00(param_1,local_30);
    if (cVar1 != '\0') {
      FUN_014952d0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x700) + 0x4ac));
      *(int *)(param_1 + 0x904) = *(int *)(param_1 + 0x904) + -1;
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  FUN_00414560(&local_38,4);
  return;
}

