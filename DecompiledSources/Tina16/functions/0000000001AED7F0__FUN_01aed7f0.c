/* Ghidra address: 01aed7f0 */
/* Ghidra symbol: FUN_01aed7f0 */


void FUN_01aed7f0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  
  if (*(char *)(param_1 + 0x19) == '\0') {
    FUN_00742eb0(*(undefined8 *)(*(longlong *)PTR_DAT_02001538 + 0x6c0),0);
  }
  else {
    FUN_00448ea0();
    dVar5 = (double)FUN_0040af40();
    iVar2 = FUN_0040c770(dVar5 * 86400000.0);
    if (iVar2 < *(int *)(param_1 + 0x30)) {
      dVar5 = (double)FUN_0040bcd0(((double)(iVar2 - *(int *)(param_1 + 0x2c)) /
                                   (double)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c))) *
                                   3.141592653589793);
      dVar5 = (1.0 - dVar5) / 2.0;
      iVar2 = *(int *)(param_1 + 0x20);
      iVar1 = *(int *)(param_1 + 0x28);
      if (*(char *)(param_1 + 0x19) == '\x01') {
        uVar3 = FUN_0040c770((double)*(int *)(param_1 + 0x1c) +
                             dVar5 * (double)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x1c)));
        uVar4 = FUN_0040c770((double)iVar2 + dVar5 * (double)(iVar1 - iVar2));
        thunk_FUN_04117c3c(uVar3,uVar4);
      }
    }
    else {
      if (*(char *)(param_1 + 0x19) == '\x01') {
        thunk_FUN_04117c3c(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
      }
      FUN_00742eb0(*(undefined8 *)(*(longlong *)PTR_DAT_02001538 + 0x6c0),0);
    }
  }
  return;
}

