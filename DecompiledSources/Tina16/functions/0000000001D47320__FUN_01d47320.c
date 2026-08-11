/* Ghidra address: 01d47320 */
/* Ghidra symbol: FUN_01d47320 */


void FUN_01d47320(void)

{
  DAT_03567bb8 = DAT_03567bb8 + 1;
  if (DAT_03567bb8 == 0) {
    if (*(longlong *)(DAT_03567bc0 + 0x68) != 0) {
      FUN_01d472e0(DAT_03567bc0);
    }
    FUN_0041b800(&DAT_03567bc8);
    FUN_0041b800(&DAT_03567ba8);
    FUN_0041b800(&DAT_03567ba8);
    FUN_00414480(&DAT_03567bb0);
    FUN_0041b800(&DAT_03567bc8);
  }
  return;
}

