/* Ghidra address: 01c9bed0 */
/* Ghidra symbol: FUN_01c9bed0 */


void FUN_01c9bed0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = PTR_DAT_02004010[0x817];
  uVar2 = (ulonglong)PTR_DAT_02004010 >> 8;
  PTR_DAT_02004010[0x817] = cVar1 == '\0';
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x1290),CONCAT71((int7)uVar2,cVar1 == '\0') & 0xffffffff);
  return;
}

