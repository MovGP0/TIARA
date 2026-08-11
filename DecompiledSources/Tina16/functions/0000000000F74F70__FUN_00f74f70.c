/* Ghidra address: 00f74f70 */
/* Ghidra symbol: FUN_00f74f70 */


void FUN_00f74f70(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  iVar3 = 0;
  while (iVar3 < *(int *)(param_1 + 0x10)) {
    uVar1 = FUN_004aeac0(param_1,iVar3);
    cVar2 = FUN_00f6f9b0(uVar1,param_2);
    if (cVar2 == '\0') {
      iVar3 = iVar3 + 1;
    }
    else {
      FUN_00410f20(uVar1);
      FUN_004ae870(param_1,iVar3);
    }
  }
  return;
}

