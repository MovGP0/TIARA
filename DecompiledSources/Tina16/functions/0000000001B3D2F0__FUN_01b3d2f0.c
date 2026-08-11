/* Ghidra address: 01b3d2f0 */
/* Ghidra symbol: FUN_01b3d2f0 */


void FUN_01b3d2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 longlong *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_6);
  FUN_01b3b450(&local_20,param_6);
  FUN_00414ad0(param_4,local_20);
  *(undefined4 *)((longlong)param_4 + 0x34) = 3;
  FUN_00419260(param_5,&DAT_004066f0,1,3);
  FUN_00414ad0(param_4 + 1,*param_4);
  uVar2 = FUN_01b3b3e0(param_2,1,0);
  FUN_00b8fd60(&local_18,uVar2,*PTR_DAT_02005310,0,1);
  FUN_00416ba0(param_4 + 2,&LAB_01b3d51c,local_18);
  FUN_01d04330(param_2,&local_28);
  FUN_00414ad0(param_4 + 3,local_28);
  *(undefined4 *)(param_4 + 7) = 0xb;
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],0);
  *(undefined4 *)*param_5 = uVar1;
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],1);
  *(undefined4 *)(*param_5 + 4) = uVar1;
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],2);
  *(undefined4 *)(*param_5 + 8) = uVar1;
  FUN_00414560(&local_28,4);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414480(&param_6);
  return;
}

