/* Ghidra address: 01192780 */
/* Ghidra symbol: FUN_01192780 */


undefined8 FUN_01192780(longlong *param_1,double param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  
  bVar7 = *(int *)(*param_1 + 0x1fa0) % 2 == 1;
  if (bVar7) {
    *(double *)(*param_1 + 0x48) =
         *(double *)(*param_1 + 0x48) *
         (*(double *)(*param_1 + 0x60) / *(double *)(*param_1 + 0x1008));
    *(double *)(*param_1 + 0x60) =
         (param_2 * *(double *)(*param_1 + 0x58)) / *(double *)(*param_1 + 0x60);
    *(undefined8 *)(*param_1 + 0x58) = 0x3ff0000000000000;
    *(double *)(*param_1 + 0x1008) = param_2 / *(double *)(*param_1 + 0x1008);
  }
  uVar2 = (uint)bVar7;
  iVar6 = (*(int *)(*param_1 + 0x1fa0) + 1) / 2 + -1;
  if ((int)uVar2 <= iVar6) {
    iVar6 = (iVar6 - uVar2) + 1;
    do {
      iVar1 = uVar2 * 3;
      lVar4 = (longlong)(iVar1 + 2);
      *(double *)(*param_1 + 0x48) =
           *(double *)(*param_1 + 0x48) *
           (*(double *)(*param_1 + 0x50 + lVar4 * 8) / *(double *)(*param_1 + 0xff8 + lVar4 * 8));
      lVar5 = (longlong)(iVar1 + 1);
      *(double *)(*param_1 + 0x50 + lVar5 * 8) =
           *(double *)(*param_1 + 0x50 + lVar5 * 8) *
           (param_2 / *(double *)(*param_1 + 0x50 + lVar4 * 8));
      lVar3 = (longlong)iVar1;
      *(double *)(*param_1 + 0x50 + lVar4 * 8) =
           (param_2 * param_2 * *(double *)(*param_1 + 0x50 + lVar3 * 8)) /
           *(double *)(*param_1 + 0x50 + lVar4 * 8);
      *(undefined8 *)(*param_1 + 0x50 + lVar3 * 8) = 0x3ff0000000000000;
      *(double *)(*param_1 + 0xff8 + lVar5 * 8) =
           *(double *)(*param_1 + 0xff8 + lVar5 * 8) *
           (param_2 / *(double *)(*param_1 + 0xff8 + lVar4 * 8));
      *(double *)(*param_1 + 0xff8 + lVar4 * 8) =
           (param_2 * param_2 * *(double *)(*param_1 + 0xff8 + lVar3 * 8)) /
           *(double *)(*param_1 + 0xff8 + lVar4 * 8);
      *(undefined8 *)(*param_1 + 0xff8 + lVar3 * 8) = 0x3ff0000000000000;
      uVar2 = uVar2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

