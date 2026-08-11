/* Ghidra address: 006603e0 */
/* Ghidra symbol: FUN_006603e0 */


void FUN_006603e0(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_005fdf10(param_1[0x92]);
  FUN_005ffb10(param_1[0x92],param_2);
  FUN_0064b230(param_1[0x92]);
  (**(code **)(*param_1 + 0x260))(param_1);
  FUN_005ffb10(param_1[0x92],0);
  FUN_005fe090(param_1[0x92]);
  return;
}

