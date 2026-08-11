/* Ghidra address: 00822210 */
/* Ghidra symbol: FUN_00822210 */


void FUN_00822210(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = FUN_00821f80(param_1,param_2);
  if (cVar2 != '\0') {
    uVar1 = FUN_00821e60(param_1,param_2);
    iVar3 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x570),uVar1);
    if (iVar3 != -1) {
      FUN_004ae870(*(undefined8 *)(param_1 + 0x570),iVar3);
    }
    FUN_00410f20(uVar1);
  }
  FUN_0068b590(param_1,param_2);
  return;
}

