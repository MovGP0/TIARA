/* Ghidra address: 018713e0 */
/* Ghidra symbol: FUN_018713e0 */


void FUN_018713e0(longlong *param_1)

{
  longlong local_38;
  longlong lStack_30;
  
  *(undefined1 *)(param_1 + 10) = 0;
  if (param_1[1] != 0) {
    (**(code **)(*param_1 + 0x40))(param_1,param_1[1],1,*(undefined1 *)((longlong)param_1 + 0x73));
  }
  *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_00498350(&local_38,0,0,0,0);
  param_1[0x12] = local_38;
  param_1[0x13] = lStack_30;
  return;
}

