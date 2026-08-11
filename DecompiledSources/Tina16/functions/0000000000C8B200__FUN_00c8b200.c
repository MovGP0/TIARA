/* Ghidra address: 00c8b200 */
/* Ghidra symbol: FUN_00c8b200 */


void FUN_00c8b200(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  int local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = param_3;
  if (param_3 < 0) {
    local_20 = *(int *)(param_1 + 0x30);
  }
  FUN_00c8b100(param_1,&local_10,local_20,1,param_4);
  FUN_00c8b4d0(param_2,local_10,0xffffffff);
  FUN_00419430(&local_10,&DAT_0086e978);
  return;
}

