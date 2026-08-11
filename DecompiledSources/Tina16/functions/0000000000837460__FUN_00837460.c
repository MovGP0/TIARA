/* Ghidra address: 00837460 */
/* Ghidra symbol: FUN_00837460 */


ulonglong FUN_00837460(longlong param_1,longlong param_2,int *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  iVar4 = 1;
  iVar6 = 0;
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x4d8) + -4);
  }
  uVar5 = 1;
  if (0 < iVar6) {
    do {
      uVar2 = (ulonglong)uVar5;
      bVar1 = FUN_008317e0(*(undefined8 *)(param_1 + 0x4d8),uVar2);
      if (bVar1 < 8) {
        bVar7 = ((int)CONCAT71((int7)(uVar2 >> 8),1) << (bVar1 & 0x1f) & 0x26U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        iVar4 = iVar4 + 1;
      }
      else if ((bVar1 == 4) && (param_2 != 0)) {
        if ((*(short *)(param_2 + -2 + (longlong)iVar4 * 2) == *(short *)(param_1 + 0x4e0)) ||
           ((*(short *)(param_2 + -2 + (longlong)iVar4 * 2) == 0x20 &&
            (*(short *)(*(longlong *)(param_1 + 0x4d8) + -2 + (longlong)(int)uVar5 * 2) != 0x43))))
        {
          uVar3 = 0;
          *param_3 = iVar4 + -1;
          break;
        }
        iVar4 = iVar4 + 1;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return uVar3 & 0xffffffff;
}

