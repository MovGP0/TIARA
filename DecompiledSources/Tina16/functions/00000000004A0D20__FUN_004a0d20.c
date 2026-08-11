/* Ghidra address: 004a0d20 */
/* Ghidra symbol: FUN_004a0d20 */


undefined8 FUN_004a0d20(undefined8 param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_00411e10(DAT_02011618,0xffffffff);
  local_10 = *(undefined8 *)(DAT_02011618 + 0x10);
  FUN_0049fa00(DAT_02011618,param_1);
  FUN_00412130(DAT_02011618);
  return local_10;
}

