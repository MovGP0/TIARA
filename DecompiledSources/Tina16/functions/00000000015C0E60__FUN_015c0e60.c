/* Ghidra address: 015c0e60 */
/* Ghidra symbol: FUN_015c0e60 */


undefined1 FUN_015c0e60(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10) | 2;
  return (char)(uVar1 * (uVar1 ^ 1) >> 8);
}

