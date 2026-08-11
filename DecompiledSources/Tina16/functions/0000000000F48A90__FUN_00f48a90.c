/* Ghidra address: 00f48a90 */
/* Ghidra symbol: FUN_00f48a90 */


undefined4 FUN_00f48a90(longlong param_1,undefined8 *param_2)

{
  undefined4 unaff_EDI;
  byte bVar1;
  byte bVar2;
  short local_3a [5];
  
  FUN_01d30f00(*param_2,param_1 + 8,2);
  bVar1 = 0;
  do {
    bVar2 = 0;
    do {
      FUN_01d30f00(*param_2,local_3a,2);
      *(int *)(param_1 + 0xc + (ulonglong)bVar1 * 8 + (ulonglong)bVar2 * 4) = (int)local_3a[0];
      bVar2 = bVar2 + 1;
    } while (bVar2 != 2);
    bVar1 = bVar1 + 1;
  } while (bVar1 != 5);
  return unaff_EDI;
}

