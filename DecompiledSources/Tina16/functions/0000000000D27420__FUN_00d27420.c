/* Ghidra address: 00d27420 */
/* Ghidra symbol: FUN_00d27420 */


void FUN_00d27420(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int local_res18 [4];
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  
  local_res18[0] = param_3;
  FUN_00d21150(param_1,local_res18);
  local_30 = param_1[0xd];
  local_38 = local_30 + 0xa0;
  FUN_00d26b10(auStack_58);
  if (local_res18[0] == 0x10) {
    FUN_00d26d00(auStack_58);
  }
  else if (local_res18[0] == 0x18) {
    FUN_00d26eb0(auStack_58);
  }
  else {
    FUN_00d270c0(auStack_58);
  }
  (**(code **)(*param_1 + 0x40))(param_1,param_4);
  return;
}

