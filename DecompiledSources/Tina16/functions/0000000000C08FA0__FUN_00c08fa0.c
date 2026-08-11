/* Ghidra address: 00c08fa0 */
/* Ghidra symbol: FUN_00c08fa0 */


void FUN_00c08fa0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((*(short *)(param_2 + 0x10) == 1) &&
      (lVar1 = FUN_0065b870(param_1), *(longlong *)(param_2 + 8) == lVar1)) &&
     ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
    (**(code **)(*param_1 + 0x2c8))(param_1);
    return;
  }
  FUN_006587d0(param_1,param_2);
  return;
}

