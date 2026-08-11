/* Ghidra address: 00cbde10 */
/* Ghidra symbol: FUN_00cbde10 */


void FUN_00cbde10(longlong *param_1)

{
  longlong lVar1;
  
  FUN_00c8d5d0(param_1);
  lVar1 = (**(code **)(*param_1 + 0xb8))(param_1);
  param_1[0x26] = lVar1;
  lVar1 = (**(code **)(lVar1 + 0x70))(lVar1,1,0,0);
  param_1[0x1e] = lVar1;
  lVar1 = (**(code **)(param_1[0x26] + 0x70))(param_1[0x26],1,0,0);
  param_1[0x21] = lVar1;
  return;
}

