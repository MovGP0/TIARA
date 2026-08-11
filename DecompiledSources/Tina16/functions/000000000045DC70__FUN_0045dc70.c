/* Ghidra address: 0045dc70 */
/* Ghidra symbol: FUN_0045dc70 */


undefined4 FUN_0045dc70(short param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  *param_4 = 0;
  if (param_2 == 0x400) {
    FUN_00440030(&local_10,param_1 != 0,1);
    FUN_004168e0(param_4,local_10);
    local_14 = 0;
  }
  else {
    local_14 = 0x80004001;
  }
  FUN_00414480(&local_10);
  return local_14;
}

