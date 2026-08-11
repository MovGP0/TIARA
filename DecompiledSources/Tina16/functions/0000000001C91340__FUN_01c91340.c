/* Ghidra address: 01c91340 */
/* Ghidra symbol: FUN_01c91340 */


void FUN_01c91340(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_007e2ef0();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar1 = FUN_007e2f10(*(undefined8 *)(param_1 + 0x720),iVar4);
      iVar3 = FUN_004170c0(L"mnMRU",*(undefined8 *)(lVar1 + 0x10),1);
      if (0 < iVar3) {
        FUN_007e2da0(lVar1,param_2);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

