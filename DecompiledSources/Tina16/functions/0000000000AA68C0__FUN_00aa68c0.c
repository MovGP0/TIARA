/* Ghidra address: 00aa68c0 */
/* Ghidra symbol: FUN_00aa68c0 */


undefined4 FUN_00aa68c0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong *local_40;
  int local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_50 = auStack_78;
  *(undefined8 *)(param_1 + 0x88) = param_2;
  iVar2 = *(int *)(param_1 + 0x10);
  local_30 = 0;
  puVar1 = auStack_78;
  if (-1 < iVar2 + -1) {
    do {
      local_50 = puVar1;
      local_40 = (longlong *)FUN_00ac3910(param_1,local_30);
      if (*(int *)(param_1 + 0x9c) < (int)local_40[0xd] + *(int *)((longlong)local_40 + 0x6c)) {
        if (*(int *)(param_1 + 0xa0) <= (int)local_40[0xd]) break;
        (**(code **)(*local_40 + 0xb0))(local_40);
      }
      local_30 = local_30 + 1;
      iVar2 = iVar2 + -1;
      puVar1 = local_50;
    } while (iVar2 != 0);
  }
  local_2c = (**(code **)(**(longlong **)(param_1 + 0x88) + 8))(*(longlong **)(param_1 + 0x88));
  local_20 = (undefined8 *)(param_1 + 0x88);
  local_28 = *local_20;
  *local_20 = 0;
  FUN_00410f20(local_28);
  return local_2c;
}

