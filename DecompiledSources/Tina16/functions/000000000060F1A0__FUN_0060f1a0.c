/* Ghidra address: 0060f1a0 */
/* Ghidra symbol: FUN_0060f1a0 */


undefined8 * FUN_0060f1a0(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  FUN_0060f160(param_1);
  for (local_10 = *(undefined8 **)(param_1 + 8);
      (local_10 != (undefined8 *)0x0 &&
      ((*(int *)(local_10 + 2) != param_2 || (*(int *)((longlong)local_10 + 0x14) != param_3))));
      local_10 = (undefined8 *)*local_10) {
  }
  if (local_10 == (undefined8 *)0x0) {
    local_18 = (undefined8 *)FUN_004095c0(0x18);
    *local_18 = *(undefined8 *)(param_1 + 8);
    local_10 = local_18;
    uVar1 = FUN_0060f2a0(param_1,param_2,param_3);
    local_18[1] = uVar1;
    *(int *)(local_18 + 2) = param_2;
    *(int *)((longlong)local_18 + 0x14) = param_3;
    *(undefined8 **)(param_1 + 8) = local_10;
  }
  FUN_0060f180(param_1);
  return local_10;
}

