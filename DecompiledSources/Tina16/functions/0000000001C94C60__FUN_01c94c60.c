/* Ghidra address: 01c94c60 */
/* Ghidra symbol: FUN_01c94c60 */


void FUN_01c94c60(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = PTR_DAT_02004010[0x818];
  uVar2 = (ulonglong)PTR_DAT_02004010 >> 8;
  PTR_DAT_02004010[0x818] = cVar1 == '\0';
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x1688),CONCAT71((int7)uVar2,cVar1 == '\0') & 0xffffffff);
  return;
}

