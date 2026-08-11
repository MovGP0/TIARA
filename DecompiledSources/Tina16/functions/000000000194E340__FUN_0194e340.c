/* Ghidra address: 0194e340 */
/* Ghidra symbol: FUN_0194e340 */


void FUN_0194e340(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  FUN_01951440(param_1,param_2);
  if (param_2 != 0) {
    if ((param_1[0x39] != 0) && (iVar1 = FUN_00416db0(param_1[0x39],param_1[2]), iVar1 != 0)) {
      return;
    }
    (**(code **)(*param_1 + 0x2d0))(param_1,param_2);
  }
  return;
}

