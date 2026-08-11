/* Ghidra address: 00bf3780 */
/* Ghidra symbol: FUN_00bf3780 */


void FUN_00bf3780(longlong param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
    if (param_2 <= iVar1) {
      FUN_00bf37c0(param_1,param_2,param_2);
    }
  }
  return;
}

