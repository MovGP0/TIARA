/* Ghidra address: 008081b0 */
/* Ghidra symbol: FUN_008081b0 */


void FUN_008081b0(longlong param_1,undefined8 param_2)

{
  FUN_004aee50(*(undefined8 *)(param_1 + 0xb0),param_2,0);
  FUN_004aee50(*(undefined8 *)(param_1 + 0xa8),param_2,0);
  FUN_0080e3f0(DAT_02012668);
  if ((*(int *)(*(longlong *)(param_1 + 0xb0) + 0x10) == 0) &&
     (*(longlong *)(DAT_02012668 + 0x100) != 0)) {
    FUN_0065f800(*(undefined8 *)(DAT_02012668 + 0x100));
  }
  return;
}

