/* Ghidra address: 00555350 */
/* Ghidra symbol: FUN_00555350 */


undefined4 FUN_00555350(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00555330();
  return *(undefined4 *)(&DAT_01dda944 + (uVar1 & 0xff) * 4);
}

