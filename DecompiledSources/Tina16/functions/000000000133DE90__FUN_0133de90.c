/* Ghidra address: 0133de90 */
/* Ghidra symbol: FUN_0133de90 */


undefined8 FUN_0133de90(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1410);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x78) != param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

