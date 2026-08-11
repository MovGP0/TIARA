/* Ghidra address: 01a5b1c0 */
/* Ghidra symbol: FUN_01a5b1c0 */


void FUN_01a5b1c0(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_res10[0] = param_2;
  FUN_00460d30(&local_30,param_1 + 0x29a8,&LAB_01a5b252,local_res10);
  FUN_00460d30(0,param_1 + 0x2990,&DAT_01a5b248,&local_30);
  FUN_00460ba0(&local_30);
  return;
}

