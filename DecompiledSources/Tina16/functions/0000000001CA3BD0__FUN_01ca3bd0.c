/* Ghidra address: 01ca3bd0 */
/* Ghidra symbol: FUN_01ca3bd0 */


void FUN_01ca3bd0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  cVar1 = PTR_DAT_020030c0[1];
  uVar2 = (ulonglong)PTR_DAT_020030c0 >> 8;
  PTR_DAT_020030c0[1] = cVar1 == '\0';
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x1610),CONCAT71((int7)uVar2,cVar1 == '\0') & 0xffffffff);
  return;
}

