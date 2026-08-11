/* Ghidra address: 00725920 */
/* Ghidra symbol: FUN_00725920 */


void FUN_00725920(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00416830(&local_10,param_2 + 7,0x20);
  FUN_005fcd80(*(undefined8 *)(param_1 + 0xd0),local_10);
  FUN_005fcc80(*(undefined8 *)(param_1 + 0xd0),*param_2);
  if (*(char *)(param_1 + 0xf8) != '\0') {
    FUN_005fcfa0(*(undefined8 *)(param_1 + 0xd0),*(undefined1 *)((longlong)param_2 + 0x17));
  }
  bVar1 = 400 < (int)param_2[4];
  if (*(char *)(param_2 + 5) != '\0') {
    bVar1 = bVar1 | 2;
  }
  if (*(char *)((longlong)param_2 + 0x15) != '\0') {
    bVar1 = bVar1 | 4;
  }
  if (*(char *)((longlong)param_2 + 0x16) != '\0') {
    bVar1 = bVar1 | 8;
  }
  FUN_005fce70(*(undefined8 *)(param_1 + 0xd0),bVar1);
  FUN_00414480(&local_10);
  return;
}

