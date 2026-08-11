/* Ghidra address: 006518c0 */
/* Ghidra symbol: FUN_006518c0 */


void FUN_006518c0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  local_38 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x90);
  local_34 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0x94);
  local_30 = FUN_0064d1f0(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x78),&local_38);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
  piVar1 = (int *)(lVar3 + 0x60);
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x78);
  iVar2 = *piVar1;
  iVar5 = FUN_004230a0(piVar1);
  iVar6 = FUN_004230c0(piVar1);
  FUN_00423b80(local_48,(iVar2 + *(int *)(lVar4 + 0x90)) - (int)local_30,
               (*(int *)(lVar3 + 100) + *(int *)(lVar4 + 0x94)) - local_30._4_4_,
               ((*(int *)(lVar3 + 0x68) - iVar2) + *(int *)(lVar4 + 0x98)) - iVar5,
               ((*(int *)(lVar3 + 0x6c) - *(int *)(lVar3 + 100)) +
               *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x78) + 0x9c)) - iVar6);
  FUN_0064d040(lVar4,local_48);
  return;
}

