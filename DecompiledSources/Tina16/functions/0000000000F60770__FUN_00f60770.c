/* Ghidra address: 00f60770 */
/* Ghidra symbol: FUN_00f60770 */


undefined8 FUN_00f60770(undefined8 *param_1)

{
  int local_20;
  int iStack_1c;
  int local_10;
  int iStack_c;
  
  iStack_1c = *(int *)(PTR_DAT_02002068 + 0x40);
  local_10 = (int)*param_1;
  local_10 = local_10 % iStack_1c;
  if (local_10 < iStack_1c / 2) {
    local_20 = -local_10;
  }
  else {
    local_20 = iStack_1c - local_10;
  }
  iStack_c = (int)((ulonglong)*param_1 >> 0x20);
  iStack_c = iStack_c % iStack_1c;
  if (iStack_c < iStack_1c / 2) {
    iStack_1c = -iStack_c;
  }
  else {
    iStack_1c = iStack_1c - iStack_c;
  }
  return CONCAT44(iStack_1c,local_20);
}

