/* Ghidra address: 0083d560 */
/* Ghidra symbol: FUN_0083d560 */


void FUN_0083d560(int *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_18;
  int iStack_14;
  int local_10;
  int iStack_c;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  local_18 = (int)uVar2;
  *param_1 = local_18;
  local_10 = (int)uVar1;
  if (local_10 < local_18) {
    *param_1 = local_10;
  }
  param_1[2] = local_10;
  if (local_10 < local_18) {
    param_1[2] = local_18;
  }
  iStack_14 = (int)((ulonglong)uVar2 >> 0x20);
  param_1[1] = iStack_14;
  iStack_c = (int)((ulonglong)uVar1 >> 0x20);
  if (iStack_c < iStack_14) {
    param_1[1] = iStack_c;
  }
  param_1[3] = iStack_c;
  if (iStack_c < iStack_14) {
    param_1[3] = iStack_14;
  }
  return;
}

