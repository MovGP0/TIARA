/* Ghidra address: 00699270 */
/* Ghidra symbol: FUN_00699270 */


void FUN_00699270(longlong *param_1,undefined8 param_2)

{
  FUN_00786040(param_1,0);
  FUN_00785c20(param_1,param_2);
  FUN_00786040(param_1,1);
  (**(code **)(*param_1 + 0x58))(param_1);
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}

