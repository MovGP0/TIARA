/* Ghidra address: 00cac180 */
/* Ghidra symbol: FUN_00cac180 */


void FUN_00cac180(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)param_1[0x22];
  puVar1 = auStack_58;
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x98))(local_20);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined1 *)((longlong)param_1 + 0x124) = 0;
  (**(code **)(*param_1 + 0x1b0))(param_1);
  return;
}

