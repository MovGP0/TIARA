/* Ghidra address: 00661150 */
/* Ghidra symbol: FUN_00661150 */


void FUN_00661150(longlong param_1,undefined8 param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + 0xad);
  if (bVar1 < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x28) >> 8),1) <<
             (bVar1 & 0x1f) & 6U) != 0;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    *param_3 = *param_3 + 0xc;
  }
  else {
    param_3[1] = param_3[1] + 0xc;
  }
  return;
}

