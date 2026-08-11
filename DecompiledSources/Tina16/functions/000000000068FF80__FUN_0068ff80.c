/* Ghidra address: 0068ff80 */
/* Ghidra symbol: FUN_0068ff80 */


bool FUN_0068ff80(void)

{
  undefined8 uVar1;
  byte bVar2;
  
  uVar1 = FUN_00786090();
  bVar2 = thunk_FUN_04118143(uVar1,0xfffffff0);
  return (bVar2 & 1) == 0;
}

