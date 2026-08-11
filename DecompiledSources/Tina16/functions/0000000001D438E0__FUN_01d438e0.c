/* Ghidra address: 01d438e0 */
/* Ghidra symbol: FUN_01d438e0 */


void FUN_01d438e0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 1;
  do {
    sVar1 = *(short *)(param_3 + -2 + (longlong)iVar3 * 2);
    if (sVar1 != 0x2e) {
      uVar2 = FUN_01d43840(sVar1);
      FUN_01d44830(param_1,iVar3,param_2,uVar2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 10);
  return;
}

