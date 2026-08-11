/* Ghidra address: 00a5be90 */
/* Ghidra symbol: FUN_00a5be90 */


void FUN_00a5be90(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_38 [32];
  
  uVar1 = FUN_00a5eab0(*(undefined8 *)(param_1 + 0x10),param_3);
  FUN_00a557b0(uVar1);
  FUN_00a5b9f0(param_1,*(longlong *)(param_1 + 0x748) + 8);
  iVar2 = param_3 + 1;
  FUN_00a5bd60(auStack_38,iVar2,L"visited");
  uVar1 = FUN_00a5eab0(*(undefined8 *)(param_1 + 0x10),iVar2);
  FUN_00a557b0(uVar1);
  uVar1 = FUN_00a5eab0(*(undefined8 *)(param_1 + 0x10),iVar2);
  FUN_00a5b9f0(uVar1,*(longlong *)(param_1 + 0x748) + 0x48);
  param_3 = param_3 + 2;
  FUN_00a5bd60(auStack_38,param_3,L"hover");
  uVar1 = FUN_00a5eab0(*(undefined8 *)(param_1 + 0x10),param_3);
  FUN_00a557b0(uVar1);
  uVar1 = FUN_00a5eab0(*(undefined8 *)(param_1 + 0x10),param_3);
  FUN_00a5b9f0(uVar1,*(longlong *)(param_1 + 0x748) + 200);
  FUN_004ae870(*(undefined8 *)(param_1 + 0x10),param_3);
  FUN_004ae870(*(undefined8 *)(param_1 + 0x10),iVar2);
  FUN_00a5bd60(auStack_38,iVar2,L"hover");
  uVar1 = FUN_00a5eab0(*(undefined8 *)(param_1 + 0x10),iVar2);
  FUN_00a557b0(uVar1);
  uVar1 = FUN_00a5eab0(*(undefined8 *)(param_1 + 0x10),iVar2);
  FUN_00a5b9f0(uVar1,*(longlong *)(param_1 + 0x748) + 0x88);
  FUN_004ae870(*(undefined8 *)(param_1 + 0x10),iVar2);
  return;
}

