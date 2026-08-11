/* Ghidra address: 00994b00 */
/* Ghidra symbol: FUN_00994b00 */


char FUN_00994b00(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  char local_9;
  
  local_20 = auStack_48;
  FUN_00410f20(param_1[0x15]);
  param_1[0x15] = 0;
  local_9 = (**(code **)(*param_1 + 0xa8))(param_1);
  if (local_9 != '\0') {
    lVar1 = (**(code **)(*(longlong *)param_1[0x14] + 0x48))((longlong *)param_1[0x14]);
    param_1[0x15] = lVar1;
  }
  return local_9;
}

