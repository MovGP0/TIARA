/* Ghidra address: 01b1d2f0 */
/* Ghidra symbol: FUN_01b1d2f0 */


int FUN_01b1d2f0(void)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ushort local_10;
  ushort local_e;
  ushort local_c;
  ushort local_a [5];
  
  uVar3 = FUN_00448ea0();
  FUN_00448ad0(uVar3,local_a,&local_c,&local_e,&local_10);
  uVar2 = (ulonglong)local_10;
  local_10 = local_10 / 10;
  iVar1 = FUN_0040c840((double)local_10 / 10.0,uVar2 % 10);
  return (uint)local_a[0] * 36000 + (uint)local_c * 600 + (uint)local_e * 10 + iVar1;
}

