/* Ghidra address: 00536f60 */
/* Ghidra symbol: FUN_00536f60 */


undefined8 FUN_00536f60(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  longlong local_78;
  undefined1 local_70 [40];
  longlong local_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_80 = auStack_a8;
  FUN_00417580(local_70,&DAT_00527bf8);
  local_28 = 0;
  local_30 = (longlong)(*(int *)(param_1 + 0xa8) + 1);
  piVar1 = (int *)FUN_00589390(*(undefined8 *)(param_1 + 0x98));
  local_38 = *piVar1;
  local_48 = FUN_00536f30(*(undefined8 *)(param_1 + 0x98));
  if (local_48 == 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00527688,1,PTR_PTR_02001650);
    FUN_004134c0(uVar2);
  }
  FUN_00418e30(&local_28,*(undefined8 *)(param_1 + 0x98),1,&local_30);
  local_40 = local_28;
  local_34 = 0;
  if (-1 < *(int *)(param_1 + 0xa8)) {
    iVar3 = *(int *)(param_1 + 0xa8) + 1;
    local_78 = *(longlong *)(param_1 + 0xa0);
    do {
      FUN_005376c0(local_78,local_70,local_48,1);
      FUN_005382b0(local_70,local_40);
      local_40 = local_40 + local_38;
      local_78 = local_78 + 0x20;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar2 = FUN_00417740(param_2,&DAT_00527bf8);
  FUN_00538080(&local_28,*(undefined8 *)(param_1 + 0x98),uVar2);
  local_20 = *(undefined8 *)(param_1 + 0x98);
  FUN_00419430(&local_28,local_20);
  FUN_00417740(local_70,&DAT_00527bf8);
  return param_2;
}

