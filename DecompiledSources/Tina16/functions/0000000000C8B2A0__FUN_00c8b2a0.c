/* Ghidra address: 00c8b2a0 */
/* Ghidra symbol: FUN_00c8b2a0 */


void FUN_00c8b2a0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int local_res18 [4];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18[0] = param_3;
  if (param_3 < 0) {
    local_res18[0] = *(int *)(param_1 + 0x30);
  }
  uVar1 = FUN_008764c0(param_4,0);
  if (param_4 < 0) {
    FUN_00c8b450(param_1,1);
    FUN_00c8ab20(param_1,local_res18,uVar1);
    FUN_0086e8c0(&LAB_0086e608,param_2,*(undefined8 *)(param_1 + 8),local_res18[0],0);
    FUN_00c8b3f0(param_1,local_res18[0]);
  }
  else {
    FUN_00c8ab20(param_1,local_res18,uVar1);
    FUN_00419260(local_20,&DAT_0086e978,1,(longlong)local_res18[0]);
    FUN_00874e50(*(undefined8 *)(param_1 + 8),param_4,local_20,0,local_res18[0]);
    FUN_0086e8c0(&LAB_0086e608,param_2,local_20[0],local_res18[0],0);
  }
  FUN_00419430(local_20,&DAT_0086e978);
  return;
}

