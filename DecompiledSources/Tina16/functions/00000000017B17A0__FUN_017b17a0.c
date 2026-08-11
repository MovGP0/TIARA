/* Ghidra address: 017b17a0 */
/* Ghidra symbol: FUN_017b17a0 */


undefined8
FUN_017b17a0(int param_1,int param_2,undefined8 param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint7 uVar4;
  undefined8 uVar3;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  uVar4 = (uint7)((ulonglong)param_3 >> 8) & 0xffffff;
  iVar2 = (int)param_3;
  lVar5 = (longlong)(iVar2 - param_1);
  lVar6 = (longlong)(param_4 - param_2);
  lVar7 = lVar5 * lVar5;
  lVar8 = lVar6 * lVar6;
  if ((lVar5 == 0) && (lVar6 == 0)) {
    uVar3 = CONCAT71(uVar4,1);
  }
  else {
    dVar9 = (double)FUN_004106c0(lVar7 * param_5 + lVar8 * param_1 +
                                 lVar5 * lVar6 * (longlong)(param_6 - param_2),lVar7 + lVar8);
    dVar10 = (double)FUN_0040c850(dVar9 - (double)iVar2);
    dVar9 = (double)FUN_0040c850(dVar9 - (double)param_1);
    uVar1 = iVar2 - param_1 >> 0x1f;
    dVar11 = (double)FUN_004106c0(lVar7 * param_2 + lVar8 * param_6 +
                                  lVar5 * lVar6 * (longlong)(param_5 - param_1),lVar7 + lVar8);
    if (dVar10 + dVar9 <= (double)(int)((iVar2 - param_1 ^ uVar1) - uVar1)) {
      dVar9 = (double)FUN_0040c850(dVar11 - (double)param_4);
      dVar10 = (double)FUN_0040c850(dVar11 - (double)param_2);
      uVar1 = param_4 - param_2 >> 0x1f;
      if (dVar9 + dVar10 <= (double)(int)((param_4 - param_2 ^ uVar1) - uVar1)) {
        return CONCAT71(uVar4,1);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

