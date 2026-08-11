/* Ghidra address: 018ae420 */
/* Ghidra symbol: FUN_018ae420 */


void FUN_018ae420(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  FUN_0181b910(param_1,param_2);
  uVar4 = FUN_0180bfb0();
  uVar4 = FUN_0180a040(uVar4);
  FUN_006fd110(*(undefined8 *)(param_1 + 0x6d8),uVar4);
  FUN_007e6a70(*(undefined8 *)(param_1 + 0x7b8),
               *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4e8));
  DAT_02110690 = (double)param_2 / (double)*(int *)PTR_DAT_02001400;
  uVar4 = *(undefined8 *)(param_1 + 0x718);
  pcVar5 = (code *)FUN_00411550(uVar4,0xffce);
  (*pcVar5)(uVar4);
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  iVar2 = FUN_0040c770(DAT_02110690 * 7.0);
  FUN_006fbac0(lVar1,*(int *)(*(longlong *)(lVar1 + 0x4e8) + 0x90) + iVar2);
  lVar1 = *(longlong *)(param_1 + 0x6d8);
  iVar2 = FUN_0040c770(DAT_02110690 * 7.0);
  FUN_006fbb10(lVar1,*(int *)(*(longlong *)(lVar1 + 0x4e8) + 0x94) + iVar2);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x708),*(int *)(*(longlong *)(param_1 + 0x718) + 0x98) + 6)
  ;
  lVar1 = *(longlong *)(param_1 + 0x740);
  uVar3 = FUN_0181a900(param_1);
  uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(lVar1 + 0x98),param_2,uVar3);
  FUN_0064cbf0(lVar1,uVar3);
  uVar3 = FUN_0040c770((double)(param_2 * 0x44) / (double)*(int *)PTR_DAT_02001400);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x790),uVar3);
  FUN_0064cb90(*(longlong *)(param_1 + 0x748),
               (longlong)
               (*(int *)(*(longlong *)(param_1 + 0x740) + 0x9c) -
               *(int *)(*(longlong *)(param_1 + 0x748) + 0x9c)) / 2 & 0xffffffff);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x800),
               *(undefined4 *)(*(longlong *)(param_1 + 0x748) + 0x94));
  FUN_0064cb90(*(longlong *)(param_1 + 0x718),
               (longlong)
               (*(int *)(*(longlong *)(param_1 + 0x740) + 0x9c) -
               *(int *)(*(longlong *)(param_1 + 0x718) + 0x9c)) / 2 & 0xffffffff);
  return;
}

