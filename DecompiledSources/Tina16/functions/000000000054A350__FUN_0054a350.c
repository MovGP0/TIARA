/* Ghidra address: 0054a350 */
/* Ghidra symbol: FUN_0054a350 */


undefined8 FUN_0054a350(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_60 = auStack_88;
  local_20 = FUN_005665d0(&PTR_FUN_0054d448,1);
  local_30 = param_4;
  if (param_4 != 0) {
    local_30 = *(longlong *)(param_4 + -8);
  }
  FUN_00566960(local_20,param_4,local_30 + -1);
  local_38 = param_3;
  if (param_3 != 0) {
    local_38 = *(longlong *)(param_3 + -8);
  }
  local_24 = 0;
  iVar5 = (int)local_38;
  if (-1 < (int)local_38 + -1) {
    do {
      lVar4 = (longlong)local_24;
      plVar1 = *(longlong **)(param_3 + lVar4 * 8);
      uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
      cVar2 = FUN_0054a2c0(auStack_88,uVar3);
      if (cVar2 == '\0') {
        local_40 = *(undefined8 *)(param_3 + lVar4 * 8);
        local_44 = FUN_00597e50(local_20 + 8,&local_40);
      }
      local_24 = local_24 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00567490(&DAT_00534c70,param_2,local_20);
  FUN_00410f20(local_20);
  return param_2;
}

