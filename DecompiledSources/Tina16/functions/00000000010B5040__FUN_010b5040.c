/* Ghidra address: 010b5040 */
/* Ghidra symbol: FUN_010b5040 */


void FUN_010b5040(longlong *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
  }
  else {
    local_30 = auStack_58;
    local_20 = (longlong *)FUN_00a39860(&PTR_FUN_00a2f148,1);
    (**(code **)(*local_20 + 0x10))(local_20,param_1);
    if ((param_4 & 1) != 0) {
      FUN_010b4ae0(local_20,0x7f);
    }
    if ((param_4 & 2) != 0) {
      FUN_010b4e90(local_20,0xff);
    }
    (**(code **)(*local_20 + 0x28))(local_20,param_2,param_3);
    FUN_00410f20(local_20);
  }
  return;
}

