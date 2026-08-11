/* Ghidra address: 00c31d40 */
/* Ghidra symbol: FUN_00c31d40 */


void FUN_00c31d40(longlong *param_1)

{
  longlong lVar1;
  
  (**(code **)(*param_1 + 0x88))(param_1);
  lVar1 = param_1[0xb];
  param_1[0xb] = 0;
  FUN_00410f20(lVar1);
  lVar1 = param_1[0xe];
  param_1[0xe] = 0;
  FUN_00410f20(lVar1);
  return;
}

