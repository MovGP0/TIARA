/* Ghidra address: 01b3cf10 */
/* Ghidra symbol: FUN_01b3cf10 */


void FUN_01b3cf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 longlong *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 local_res18 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  FUN_01b3b450(&local_10,param_6);
  FUN_00414ad0(param_4,local_10);
  *(undefined4 *)(param_4 + 0x34) = 2;
  FUN_00419260(param_5,&DAT_004066f0,1,2);
  FUN_01b3c850(&local_18,param_2,param_7);
  FUN_00414ad0(param_4 + 8,local_18);
  FUN_01b388b0(param_4 + 8);
  *(undefined4 *)(param_4 + 0x38) = 0xe;
  FUN_01d04330(param_2,&local_20);
  FUN_00414ad0(param_4 + 0x18,local_20);
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],0);
  *(undefined4 *)*param_5 = uVar1;
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],1);
  *(undefined4 *)(*param_5 + 4) = uVar1;
  FUN_00414560(&local_20,3);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414560(&param_6,2);
  return;
}

