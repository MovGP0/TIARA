/* Ghidra address: 007110c0 */
/* Ghidra symbol: FUN_007110c0 */


void FUN_007110c0(longlong *param_1,int *param_2)

{
  FUN_00813880(param_1,param_2);
  if (*param_2 == 0x47) {
    if ((*(uint *)(*(longlong *)(param_2 + 4) + 0x20) & 1) == 0) {
      (**(code **)(*param_1 + 0xa0))(param_1);
    }
  }
  else if ((*param_2 == 0xbc4e) && (*(int *)(*(longlong *)(param_2 + 4) + 0x10) == 0x702)) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  return;
}

