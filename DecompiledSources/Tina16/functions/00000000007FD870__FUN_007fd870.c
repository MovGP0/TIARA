/* Ghidra address: 007fd870 */
/* Ghidra symbol: FUN_007fd870 */


void FUN_007fd870(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(float *)(param_1 + 0x308) = (*(float *)(param_1 + 0x308) * (float)param_2) / (float)param_3;
  FUN_007fb920(param_1,param_2,param_3);
  FUN_007fb540(param_1,param_2,param_3);
  FUN_0065ad90(param_1,param_2,param_3);
  FUN_007fce80(param_1,param_2,param_3,0);
  cVar2 = FUN_007fda00(param_1);
  if (cVar2 != '\0') {
    uVar3 = FUN_0064d120(param_1);
    uVar4 = FUN_0064d0b0(param_1);
    uVar4 = thunk_FUN_03f3ed25(uVar4,param_2,param_3);
    FUN_007fded0(param_1,uVar4);
    uVar3 = thunk_FUN_03f3ed25(uVar3,param_2,param_3);
    FUN_007fdf10(param_1,uVar3);
  }
  if (*(char *)(param_1 + 0xab) == '\0') {
    lVar1 = *(longlong *)(param_1 + 0xb8);
    uVar3 = thunk_FUN_03f3ed25(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x28),param_2,param_3);
    FUN_005fcc80(lVar1,uVar3);
  }
  FUN_007fce80(param_1,param_2,param_3,1);
  return;
}

