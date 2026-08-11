/* Ghidra address: 00d7ec30 */
/* Ghidra symbol: FUN_00d7ec30 */


void FUN_00d7ec30(longlong param_1,uint param_2)

{
  byte bVar1;
  
  FUN_00411a80(param_1,param_2);
  bVar1 = 0;
  do {
    FUN_00410f20(*(undefined8 *)(param_1 + 8 + (ulonglong)bVar1 * 8));
    bVar1 = bVar1 + 1;
  } while (bVar1 != 0x5d);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x2f8));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

