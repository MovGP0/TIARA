/* Ghidra address: 01b3c3f0 */
/* Ghidra symbol: FUN_01b3c3f0 */


void FUN_01b3c3f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                 undefined8 *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined8 local_res18 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_7);
  FUN_00414610(param_8);
  FUN_01b3b450(&local_10,param_7);
  FUN_00414ad0(param_5,local_10);
  *(undefined4 *)((longlong)param_5 + 0x34) = 4;
  FUN_00419260(param_6,&DAT_004066f0,1,4);
  FUN_00414ad0(param_5 + 1,*param_5);
  FUN_00414ad0(param_5 + 2,param_8);
  *(uint *)(param_5 + 7) = (uint)param_4;
  FUN_01d04330(param_2,&local_18);
  FUN_00414ad0(param_5 + 3,local_18);
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],0);
  *(undefined4 *)*param_6 = uVar1;
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],1);
  *(undefined4 *)(*param_6 + 4) = uVar1;
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],2);
  *(undefined4 *)(*param_6 + 8) = uVar1;
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],3);
  *(undefined4 *)(*param_6 + 0xc) = uVar1;
  FUN_00414560(&local_18,2);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414560(&param_7,2);
  return;
}

