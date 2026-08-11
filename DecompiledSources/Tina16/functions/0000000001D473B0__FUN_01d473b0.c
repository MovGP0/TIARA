/* Ghidra address: 01d473b0 */
/* Ghidra symbol: FUN_01d473b0 */


void FUN_01d473b0(void)

{
  undefined8 uVar1;
  
  DAT_03567bb8 = DAT_03567bb8 + -1;
  if (DAT_03567bb8 == -1) {
    DAT_03567bc0 = FUN_01d47070(&DAT_01d45198,1);
    uVar1 = FUN_0041b800(DAT_03567bc0 + 0x68);
    FUN_00714bb0(DAT_03567bc8,uVar1);
  }
  return;
}

