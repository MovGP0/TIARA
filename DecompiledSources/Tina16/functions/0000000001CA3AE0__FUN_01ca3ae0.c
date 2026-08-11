/* Ghidra address: 01ca3ae0 */
/* Ghidra symbol: FUN_01ca3ae0 */


void FUN_01ca3ae0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = PTR_DAT_020030c0[5];
  uVar2 = (ulonglong)PTR_DAT_020030c0 >> 8;
  PTR_DAT_020030c0[5] = cVar1 == '\0';
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x15f8),CONCAT71((int7)uVar2,cVar1 == '\0') & 0xffffffff);
  return;
}

