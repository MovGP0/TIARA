/* Ghidra address: 00de1240 */
/* Ghidra symbol: FUN_00de1240 */


void FUN_00de1240(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_007f9b70(param_1,1);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x550) == param_1)) {
    if (*(longlong *)(param_1 + 0x4d8) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x30))(*(longlong **)(param_1 + 0x4d8));
    }
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x4c0) == param_1)) {
      FUN_00de1750(param_1,0);
    }
  }
  return;
}

