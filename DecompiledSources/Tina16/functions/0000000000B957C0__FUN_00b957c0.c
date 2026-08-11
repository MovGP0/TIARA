/* Ghidra address: 00b957c0 */
/* Ghidra symbol: FUN_00b957c0 */


void FUN_00b957c0(int *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_28 = (int)uVar1;
  if (local_28 < *param_1) {
    *param_1 = local_28;
  }
  local_24 = (int)((ulonglong)uVar1 >> 0x20);
  if (local_24 < param_1[1]) {
    param_1[1] = local_24;
  }
  local_20 = (int)uVar2;
  if (param_1[2] < local_20) {
    param_1[2] = local_20;
  }
  local_1c = (int)((ulonglong)uVar2 >> 0x20);
  if (param_1[3] < local_1c) {
    param_1[3] = local_1c;
  }
  return;
}

