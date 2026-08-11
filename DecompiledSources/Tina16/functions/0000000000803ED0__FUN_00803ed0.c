/* Ghidra address: 00803ed0 */
/* Ghidra symbol: FUN_00803ed0 */


void FUN_00803ed0(longlong param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (*param_2 + param_4) - param_3;
  uVar2 = (int)uVar1 >> 0x1f;
  if ((int)((uVar1 ^ uVar2) - uVar2) < *(int *)(*(longlong *)(param_1 + 0x90) + 0x674)) {
    *param_2 = param_3 - param_4;
  }
  return;
}

