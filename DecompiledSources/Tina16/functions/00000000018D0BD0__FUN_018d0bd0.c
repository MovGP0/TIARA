/* Ghidra address: 018d0bd0 */
/* Ghidra symbol: FUN_018d0bd0 */


void FUN_018d0bd0(longlong param_1,short *param_2)

{
  FUN_018cf8d0(param_1,param_2);
  if ((*param_2 == -0x2fff) && (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_018cfb90(*(undefined8 *)(param_1 + 0x40),param_1);
  }
  return;
}

