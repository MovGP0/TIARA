/* Ghidra address: 00882430 */
/* Ghidra symbol: FUN_00882430 */


undefined2 FUN_00882430(void)

{
  ulonglong uVar1;
  
  uVar1 = FUN_008823e0();
  return *(undefined2 *)(&DAT_01e20dd8 + (uVar1 & 0xffff) * 2);
}

