/* Ghidra address: 006e7e50 */
/* Ghidra symbol: FUN_006e7e50 */


undefined4 FUN_006e7e50(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00419500(param_3);
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2,local_res18[0],param_4);
  FUN_00419430(local_res18,&DAT_00406578);
  return uVar1;
}

