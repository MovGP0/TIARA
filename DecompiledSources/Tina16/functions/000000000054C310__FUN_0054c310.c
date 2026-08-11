/* Ghidra address: 0054c310 */
/* Ghidra symbol: FUN_0054c310 */


undefined4 FUN_0054c310(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0054c2f0();
  return *(undefined4 *)(&DAT_01dda054 + (uVar1 & 0xff) * 4);
}

