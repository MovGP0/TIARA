/* Ghidra address: 004ba010 */
/* Ghidra symbol: FUN_004ba010 */


void FUN_004ba010(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  (**(code **)(*param_1 + 0x60))(param_1,param_2);
  param_1[2] = param_2;
  if (param_2 < lVar1) {
    (**(code **)(*param_1 + 0x50))(param_1,0,2);
  }
  return;
}

