/* Ghidra address: 01516fe0 */
/* Ghidra symbol: FUN_01516fe0 */


void FUN_01516fe0(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  FUN_00411a80(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    FUN_004095f0(lVar1,(longlong)(*(int *)(param_1 + 0xb8) * iVar2));
  }
  FUN_01516c90(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

