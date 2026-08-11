/* Ghidra address: 01c02120 */
/* Ghidra symbol: FUN_01c02120 */


void FUN_01c02120(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x94];
  if (lVar1 != param_2) {
    if (lVar1 != 0) {
      FUN_004d2d90(lVar1,param_1);
      (**(code **)(*param_1 + 0x270))(param_1);
    }
    param_1[0x94] = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
    }
  }
  return;
}

