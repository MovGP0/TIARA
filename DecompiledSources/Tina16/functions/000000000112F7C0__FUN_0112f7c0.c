/* Ghidra address: 0112f7c0 */
/* Ghidra symbol: FUN_0112f7c0 */


undefined1 FUN_0112f7c0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_10 = 0;
  FUN_00414480(&local_10);
  FUN_004484b0(&local_10,param_1,PTR_DAT_02004830);
  FUN_0112e140(local_48,local_10);
  FUN_0112ebb0(local_48,param_2,param_3,param_4);
  FUN_00414480(&local_10);
  local_11 = 1;
  FUN_00414480(&local_10);
  return local_11;
}

