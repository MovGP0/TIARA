/* Ghidra address: 00cdc3e0 */
/* Ghidra symbol: FUN_00cdc3e0 */


void FUN_00cdc3e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  iVar1 = FUN_00876b30(param_2,(longlong)param_4);
  if (0 < iVar1) {
    FUN_00419260(local_20,&DAT_0086e978,1,(longlong)iVar1);
    FUN_0086e810(&LAB_0086e608,param_2,local_20,iVar1,0);
    FUN_00cdc510(param_1,local_30,local_20[0]);
    FUN_004194b0(local_20,local_30[0],&DAT_0086e978);
    FUN_0086e8c0(&LAB_0086e608,param_3,local_20[0],0xffffffff,0);
  }
  FUN_00419430(local_30,&DAT_0086e978);
  FUN_00419430(local_20,&DAT_0086e978);
  return;
}

