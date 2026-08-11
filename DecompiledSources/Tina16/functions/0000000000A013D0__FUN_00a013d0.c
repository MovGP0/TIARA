/* Ghidra address: 00a013d0 */
/* Ghidra symbol: FUN_00a013d0 */


void FUN_00a013d0(longlong *param_1,byte param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_c;
  
  local_20 = auStack_48;
  FUN_00411a80(param_1,param_2);
  FUN_004b3260(param_1);
  local_c = (**(code **)(*param_1 + 0x28))(param_1);
  local_c = local_c + -1;
  if (-1 < local_c) {
    do {
      uVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_c);
      FUN_00410f20(uVar1);
      local_c = local_c + -1;
    } while (local_c != -1);
  }
  FUN_004b3390(param_1);
  FUN_004b56a0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

