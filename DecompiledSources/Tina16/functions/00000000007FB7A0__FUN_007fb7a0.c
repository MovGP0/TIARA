/* Ghidra address: 007fb7a0 */
/* Ghidra symbol: FUN_007fb7a0 */


void FUN_007fb7a0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x498) + 0x18);
  iVar1 = FUN_0064d0b0(param_1);
  if (iVar3 <= iVar1) {
    iVar3 = iVar1;
  }
  iVar2 = FUN_0064d120(param_1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x18);
  if (iVar2 <= iVar1) {
    iVar2 = iVar1;
  }
  FUN_00423b80(&local_38,-*(int *)(*(longlong *)(param_1 + 0x498) + 0x14),
               -*(int *)(*(longlong *)(param_1 + 0x4b0) + 0x14),iVar3,iVar2);
  *param_2 = local_38;
  param_2[1] = uStack_30;
  FUN_00652f10(param_1,param_2);
  return;
}

