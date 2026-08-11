/* Ghidra address: 01962920 */
/* Ghidra symbol: FUN_01962920 */


void FUN_01962920(longlong *param_1)

{
  *(ushort *)((longlong)param_1 + 0x38c) = *(ushort *)((longlong)param_1 + 0x38c) & 0xefff;
  FUN_0195cd40(param_1,param_1[0x6c]);
  FUN_00410f20(param_1[0x6c]);
  param_1[0x6c] = 0;
  (**(code **)(*(longlong *)param_1[0xf] + 0x10))((longlong *)param_1[0xf],param_1[0x6d]);
  FUN_00410f20(param_1[0x6d]);
  param_1[0x6d] = 0;
  (**(code **)(*(longlong *)param_1[0x38] + 0x10))((longlong *)param_1[0x38],param_1[0x6e]);
  FUN_00410f20(param_1[0x6e]);
  param_1[0x6e] = 0;
  (**(code **)(*param_1 + 0xf8))(param_1,(char)param_1[0x6f]);
  return;
}

