/* Ghidra address: 017c2b50 */
/* Ghidra symbol: FUN_017c2b50 */


undefined4 FUN_017c2b50(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_2 < 2) && (uVar1 = 0xffffffff, -1 < param_2)) {
    uVar1 = *(undefined4 *)(param_1 + 0xa0 + (longlong)param_2 * 0x10c);
  }
  return uVar1;
}

