/* Ghidra address: 00cc20c0 */
/* Ghidra symbol: FUN_00cc20c0 */


void FUN_00cc20c0(void)

{
  DAT_02019f48 = DAT_02019f48 + -1;
  if (DAT_02019f48 == -1) {
    DAT_01ead3e8 = FUN_00cbf320(&LAB_00cbe980,1);
    FUN_00879810(DAT_01ead3e8);
    FUN_00879810(*(undefined8 *)(DAT_01ead3e8 + 8));
  }
  return;
}

