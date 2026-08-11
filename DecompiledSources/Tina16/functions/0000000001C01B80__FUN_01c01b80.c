/* Ghidra address: 01c01b80 */
/* Ghidra symbol: FUN_01c01b80 */


void FUN_01c01b80(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  FUN_005fdf10(param_1[0x96]);
  FUN_005ffb10(param_1[0x96],param_2);
  FUN_0064b230(param_1[0x96]);
  (**(code **)(*param_1 + 0x2f8))(param_1);
  FUN_005ffb10(param_1[0x96],0);
  FUN_005fe090(param_1[0x96]);
  return;
}

