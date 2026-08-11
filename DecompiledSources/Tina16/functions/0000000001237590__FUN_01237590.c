/* Ghidra address: 01237590 */
/* Ghidra symbol: FUN_01237590 */


int FUN_01237590(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x1fa0) + 1;
  uVar3 = (longlong)iVar1 % 2 & 0xffffffff;
  if ((iVar1 / 2) * 3 < 0x12d) {
    if (*(short *)(*param_1 + 0x1fa6) == 0x42) {
      iVar1 = FUN_012372d0(param_1,uVar3);
      if (iVar1 != 0) {
        return iVar1 * 10 + 1;
      }
    }
    else {
      uVar2 = FUN_0044d490(&PTR_FUN_004334c0,CONCAT71((int7)(uVar3 >> 8),1),L"Calc coeff: FP.approx"
                          );
      FUN_004134c0(uVar2);
    }
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
  }
  return iVar1;
}

