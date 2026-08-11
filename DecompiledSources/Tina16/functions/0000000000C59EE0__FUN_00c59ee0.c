/* Ghidra address: 00c59ee0 */
/* Ghidra symbol: FUN_00c59ee0 */


void FUN_00c59ee0(longlong *param_1,short *param_2,undefined2 param_3)

{
  if (*param_2 == 0x26) {
    (**(code **)(*param_1 + 0x2b0))(param_1,param_1);
  }
  else if (*param_2 == 0x28) {
    (**(code **)(*param_1 + 0x2b8))(param_1,param_1);
  }
  FUN_00680ce0(param_1,param_2,param_3);
  return;
}

