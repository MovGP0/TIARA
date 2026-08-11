/* Ghidra address: 01575890 */
/* Ghidra symbol: FUN_01575890 */


void FUN_01575890(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_004b89e0(param_2,param_1 + 0x10,4);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_1,iVar2);
      FUN_01574e80(uVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

