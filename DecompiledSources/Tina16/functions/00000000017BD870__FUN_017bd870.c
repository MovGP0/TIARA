/* Ghidra address: 017bd870 */
/* Ghidra symbol: FUN_017bd870 */


undefined4 FUN_017bd870(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_2 < 2) && (uVar1 = 0xffffffff, -1 < param_2)) {
    uVar1 = *(undefined4 *)(param_1 + 0xc4 + (longlong)param_2 * 0x10c);
  }
  return uVar1;
}

