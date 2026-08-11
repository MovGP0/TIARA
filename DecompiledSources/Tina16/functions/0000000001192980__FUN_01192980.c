/* Ghidra address: 01192980 */
/* Ghidra symbol: FUN_01192980 */


undefined8 FUN_01192980(longlong *param_1,double param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  bVar5 = *(int *)(*param_1 + 0x1fa0) % 2 == 1;
  if (bVar5) {
    *(double *)(*param_1 + 0x60) = *(double *)(*param_1 + 0x60) * param_2;
    *(double *)(*param_1 + 0x1008) = *(double *)(*param_1 + 0x1008) * param_2;
  }
  uVar1 = (uint)bVar5;
  iVar4 = (*(int *)(*param_1 + 0x1fa0) + 1) / 2 + -1;
  if ((int)uVar1 <= iVar4) {
    iVar4 = (iVar4 - uVar1) + 1;
    do {
      lVar3 = (longlong)(int)(uVar1 * 3 + 1);
      *(double *)(*param_1 + 0x50 + lVar3 * 8) = *(double *)(*param_1 + 0x50 + lVar3 * 8) * param_2;
      lVar2 = (longlong)(int)(uVar1 * 3 + 2);
      *(double *)(*param_1 + 0x50 + lVar2 * 8) =
           *(double *)(*param_1 + 0x50 + lVar2 * 8) * param_2 * param_2;
      *(double *)(*param_1 + 0xff8 + lVar3 * 8) =
           *(double *)(*param_1 + 0xff8 + lVar3 * 8) * param_2;
      *(double *)(*param_1 + 0xff8 + lVar2 * 8) =
           *(double *)(*param_1 + 0xff8 + lVar2 * 8) * param_2 * param_2;
      uVar1 = uVar1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

