/* Ghidra address: 006fd250 */
/* Ghidra symbol: FUN_006fd250 */


void FUN_006fd250(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FUN_007d7c60(*(longlong *)(param_1 + 0x4f8),*(undefined8 *)(param_1 + 0x500));
  }
  *(longlong *)(param_1 + 0x4f8) = param_2;
  if (param_2 == 0) {
    FUN_006fd210(param_1,0);
  }
  else {
    FUN_007d7c70(param_2,*(undefined8 *)(param_1 + 0x500));
    FUN_004d26c0(*(undefined8 *)(param_1 + 0x4f8),param_1);
  }
  FUN_006fd640(param_1);
  return;
}

