/* Ghidra address: 0083f8c0 */
/* Ghidra symbol: FUN_0083f8c0 */


void FUN_0083f8c0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_004be030(param_2,1);
  iVar3 = *(int *)(param_1 + 0x4e0);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004c06c0(param_2);
      FUN_00848ac0(param_1,iVar2,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004be030(param_2,0);
  return;
}

