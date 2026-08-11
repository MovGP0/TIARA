/* Ghidra address: 01a8dcd0 */
/* Ghidra symbol: FUN_01a8dcd0 */


void FUN_01a8dcd0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  int local_30;
  int iStack_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_30 = (int)*param_3;
  local_28 = (int)*param_2;
  local_24 = (int)((ulonglong)*param_2 >> 0x20);
  local_20 = (int)param_2[1];
  local_1c = (int)((ulonglong)param_2[1] >> 0x20);
  iStack_2c = (int)((ulonglong)*param_3 >> 0x20);
  _local_28 = CONCAT44(local_24 + iStack_2c + -5,local_28 + local_30 + -5);
  _local_20 = CONCAT44(local_1c + iStack_2c + 5,local_20 + local_30 + 5);
  uVar1 = FUN_0065b870();
  thunk_FUN_03a2fc9d(uVar1,&local_28,0xffffffff);
  return;
}

