/* Ghidra address: 004c2900 */
/* Ghidra symbol: FUN_004c2900 */


void FUN_004c2900(longlong param_1,int param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00419260(local_20,&DAT_00406578,1,0x2000);
  for (; 0x2000 < param_2; param_2 = param_2 + -0x2000) {
    FUN_004bec10(*(undefined8 *)(param_1 + 0x40),local_20[0],0x2000);
    FUN_004c3c80(*(undefined8 *)(param_1 + 0x48),local_20[0],0x2000);
  }
  if (0 < param_2) {
    FUN_004bec10(*(undefined8 *)(param_1 + 0x40),local_20[0],(longlong)param_2);
    FUN_004c3c80(*(undefined8 *)(param_1 + 0x48),local_20[0],(longlong)param_2);
  }
  FUN_00419430(local_20,&DAT_00406578);
  return;
}

