/* Ghidra address: 00a34b00 */
/* Ghidra symbol: FUN_00a34b00 */


void FUN_00a34b00(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
  }
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + -4);
  }
  FUN_00a33eb0(param_1,iVar2 + iVar3 + 1);
  FUN_0040d200(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),0);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_00414df0(param_1 + 0x28);
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
    }
    FUN_00409a70(uVar1,*(undefined8 *)(param_1 + 8),(longlong)iVar2);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
    }
    uVar1 = FUN_00414df0(param_1 + 0x30);
    iVar3 = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + -4);
    }
    FUN_00409a70(uVar1,*(longlong *)(param_1 + 8) + 1 + (longlong)iVar2,(longlong)iVar3);
  }
  FUN_00a34420(param_1,param_2);
  return;
}

