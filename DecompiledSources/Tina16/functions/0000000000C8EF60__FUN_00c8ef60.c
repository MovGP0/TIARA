/* Ghidra address: 00c8ef60 */
/* Ghidra symbol: FUN_00c8ef60 */


undefined4 FUN_00c8ef60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_00877e10(&local_10,param_2,local_res18[0]);
  uVar1 = FUN_00c8f010(param_1,local_10,0,0xffffffff);
  FUN_00419430(&local_10,&DAT_0086e978);
  FUN_0041b800(local_res18);
  return uVar1;
}

