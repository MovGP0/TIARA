/* Ghidra address: 005fb810 */
/* Ghidra symbol: FUN_005fb810 */


undefined8 * FUN_005fb810(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  undefined8 *local_28;
  int local_20;
  short local_1a;
  undefined8 *local_18;
  longlong local_10;
  
  local_40 = auStack_68;
  local_1a = FUN_005fb690(param_2,*(undefined2 *)(param_1 + 0x38));
  local_30 = param_1;
  FUN_00427930(param_1 + 0x10);
  lVar2 = FUN_004d11f0();
  local_20 = *(int *)(lVar2 + 8);
  for (local_18 = *(undefined8 **)(param_1 + 8); local_18 != (undefined8 *)0x0;
      local_18 = (undefined8 *)*local_18) {
    if ((*(int *)((longlong)local_18 + 0x1c) == local_20) && (*(short *)(local_18 + 3) == local_1a))
    {
      cVar1 = FUN_0043e2c0(local_18 + 4,param_2,*(undefined2 *)(param_1 + 0x38));
      if (cVar1 != '\0') break;
    }
  }
  if (local_18 == (undefined8 *)0x0) {
    local_28 = (undefined8 *)FUN_004095c0(*(ushort *)(param_1 + 0x38) + 0x20);
    *local_28 = *(undefined8 *)(param_1 + 8);
    *(undefined4 *)(local_28 + 1) = 0;
    local_28[2] = *param_2;
    *(short *)(local_28 + 3) = local_1a;
    *(int *)((longlong)local_28 + 0x1c) = local_20;
    local_18 = local_28;
    FUN_00409a70(param_2,local_28 + 4,*(undefined2 *)(param_1 + 0x38));
    *(undefined8 **)(param_1 + 8) = local_18;
  }
  *(int *)(local_18 + 1) = *(int *)(local_18 + 1) + 1;
  local_10 = param_1;
  FUN_00427ff0(param_1 + 0x10);
  return local_18;
}

