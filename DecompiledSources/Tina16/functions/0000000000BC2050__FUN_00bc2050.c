/* Ghidra address: 00bc2050 */
/* Ghidra symbol: FUN_00bc2050 */


undefined8 FUN_00bc2050(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  psVar4 = *(short **)(param_1 + 0x140);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = (ulonglong)*(uint *)(param_2 + -4);
  }
  iVar5 = *(int *)(param_1 + 0x13c);
  if ((int)uVar1 == iVar5) {
    uVar2 = CONCAT71((int7)(uVar1 >> 8),1);
    iVar3 = 1;
    if (0 < iVar5) {
      do {
        if (*psVar4 != *(short *)(param_2 + -2 + (longlong)iVar3 * 2)) {
          return 0;
        }
        psVar4 = psVar4 + 1;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

