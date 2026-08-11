/* Ghidra address: 00a7b080 */
/* Ghidra symbol: FUN_00a7b080 */


void FUN_00a7b080(longlong *param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x15) = 1;
  FUN_00a7af90(param_1);
  uVar1 = FUN_0069e8a0();
  FUN_00a79a60(param_1,uVar1);
  (**(code **)(*param_1 + 0xa0))(param_1);
  return;
}

