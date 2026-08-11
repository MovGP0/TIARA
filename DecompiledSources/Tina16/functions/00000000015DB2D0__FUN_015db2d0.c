/* Ghidra address: 015db2d0 */
/* Ghidra symbol: FUN_015db2d0 */


undefined8 FUN_015db2d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  short local_7c [26];
  short asStack_48 [26];
  int local_14;
  int local_10;
  undefined4 uStack_c;
  
  local_14 = 0;
  do {
    local_7c[local_14] = (short)local_14 + 0x41;
    local_14 = local_14 + 1;
  } while (local_14 != 0x1a);
  local_14 = 0;
  do {
    local_7c[local_14 + 0x1a] = (short)local_14 + 0x61;
    local_14 = local_14 + 1;
  } while (local_14 != 0x1a);
  uVar1 = FUN_005ffa40(param_2);
  thunk_FUN_040d447e(uVar1,local_7c,0x34,&local_10);
  return CONCAT44(uStack_c,local_10 / 0x34);
}

