/* Ghidra address: 01b3b5a0 */
/* Ghidra symbol: FUN_01b3b5a0 */


undefined4 FUN_01b3b5a0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  uVar1 = (**(code **)(*param_2 + 0x210))(param_2,param_4);
  uVar1 = FUN_01b3b510(param_1,local_res18[0],uVar1);
  FUN_00419430(local_res18,&DAT_004066f0);
  return uVar1;
}

