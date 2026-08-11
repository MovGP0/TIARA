/* Ghidra address: 01d31c60 */
/* Ghidra symbol: FUN_01d31c60 */


void FUN_01d31c60(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  uint local_14;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01d312f0(param_1,&local_10);
  FUN_005fcd80(param_2,local_10);
  FUN_01d31720(param_1,&local_14);
  FUN_005fc860(param_2,local_14);
  FUN_01d31720(param_1,&local_14);
  FUN_005fce30(param_2,local_14);
  FUN_01d31720(param_1,&local_14);
  bVar1 = (local_14 & 1) != 0;
  if ((local_14 & 2) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((local_14 & 4) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((local_14 & 8) != 0) {
    bVar1 = bVar1 | 8;
  }
  FUN_005fce70(param_2,bVar1);
  FUN_00414480(&local_10);
  return;
}

