/* Ghidra address: 00caf8d0 */
/* Ghidra symbol: FUN_00caf8d0 */


undefined8 FUN_00caf8d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res18 [2];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_00414480(param_2);
  (**(code **)(*param_1 + 0x90))(param_1,0,0);
  cVar1 = (**(code **)(*param_1 + 0x108))(param_1);
  if (cVar1 != '\0') {
    do {
      local_1c = FUN_00cae370(param_1,0,0xfa,0);
    } while (local_1c != 0);
    cVar1 = FUN_00cb0720(param_1);
    if (cVar1 == '\0') {
      FUN_00caf810(param_1,param_2,local_res18[0]);
    }
  }
  (**(code **)(*param_1 + 0xa0))(param_1,0);
  FUN_0041b800(local_res18);
  return param_2;
}

