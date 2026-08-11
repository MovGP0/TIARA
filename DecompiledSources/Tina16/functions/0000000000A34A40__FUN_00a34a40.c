/* Ghidra address: 00a34a40 */
/* Ghidra symbol: FUN_00a34a40 */


undefined4 FUN_00a34a40(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00a34430(param_1,param_2,param_3,param_4);
  if (((char)uVar1 != '\0') && (2 < param_4)) {
    FUN_00415430(param_1 + 0x28,*(undefined8 *)(param_1 + 8),0);
    iVar3 = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
    }
    FUN_00415d10(param_1 + 0x30,(param_4 - iVar3) + -1,0);
    uVar2 = FUN_00414df0(param_1 + 0x30);
    iVar3 = 0;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + -4);
    }
    iVar4 = 0;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + -4);
    }
    FUN_00409a70(*(longlong *)(param_1 + 8) + 1 + (longlong)iVar3,uVar2,(longlong)iVar4);
  }
  return uVar1;
}

