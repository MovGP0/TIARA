/* Ghidra address: 0045d9b0 */
/* Ghidra symbol: FUN_0045d9b0 */


undefined4 FUN_0045d9b0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  *param_4 = 0;
  if (param_2 == 0x400) {
    FUN_00414480(&local_10);
    FUN_004484b0(&local_10,param_1,PTR_DAT_02004830);
    FUN_004168e0(param_4,local_10);
    FUN_00414480(&local_10);
    local_14 = 0;
  }
  else {
    local_14 = 0x80004001;
    local_20 = auStack_48;
  }
  FUN_00414480(&local_10);
  return local_14;
}

