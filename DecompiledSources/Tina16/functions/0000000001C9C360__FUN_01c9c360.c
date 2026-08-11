/* Ghidra address: 01c9c360 */
/* Ghidra symbol: FUN_01c9c360 */


void FUN_01c9c360(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = *PTR_DAT_020030c0;
  uVar2 = (ulonglong)PTR_DAT_020030c0 >> 8;
  *PTR_DAT_020030c0 = cVar1 == '\0';
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x12f8),CONCAT71((int7)uVar2,cVar1 == '\0') & 0xffffffff);
  return;
}

