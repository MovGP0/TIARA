/* Ghidra address: 01b3b630 */
/* Ghidra symbol: FUN_01b3b630 */


void FUN_01b3b630(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
                 longlong param_5,undefined8 *param_6,undefined8 param_7)

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
  FUN_01b3b450(&local_10,param_7);
  FUN_00414ad0(param_5,local_10);
  *(undefined4 *)(param_5 + 0x34) = 1;
  FUN_00419260(param_6,&DAT_004066f0,1,1);
  FUN_00414ad0(param_5 + 8,param_7);
  *(uint *)(param_5 + 0x38) = (uint)param_4;
  FUN_01b388b0(param_5 + 8);
  FUN_01d04330(param_2,&local_18);
  FUN_00414ad0(param_5 + 0x18,local_18);
  uVar1 = FUN_01b3b5a0(param_1,param_2,local_res18[0],0);
  *(undefined4 *)*param_6 = uVar1;
  FUN_00414560(&local_18,2);
  FUN_00419430(local_res18,&DAT_004066f0);
  FUN_00414480(&param_7);
  return;
}

