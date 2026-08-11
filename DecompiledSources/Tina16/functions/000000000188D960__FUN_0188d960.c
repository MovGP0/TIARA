/* Ghidra address: 0188d960 */
/* Ghidra symbol: FUN_0188d960 */


void FUN_0188d960(void)

{
  DAT_0211063c = DAT_0211063c + 1;
  if (DAT_0211063c == 0) {
    if (DAT_01fb2198 != 0) {
      FUN_00410f20(DAT_01fb2198);
    }
    DAT_01fb2198 = 0;
    FUN_00417840(&DAT_01fb1b68,&DAT_0188b460,0x42);
  }
  return;
}

