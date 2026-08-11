/* Ghidra address: 017d8810 */
/* Ghidra symbol: FUN_017d8810 */


double FUN_017d8810(undefined8 param_1,longlong *param_2,int param_3,undefined4 param_4,int param_5)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int local_50;
  
  lVar1 = *param_2;
  dVar6 = 0.0;
  dVar5 = 0.0;
  local_50 = (int)param_2[2];
  iVar3 = 0;
  if (-1 < local_50 + -1) {
    do {
      sVar2 = *(short *)(lVar1 + (longlong)iVar3 * 2);
      dVar5 = dVar6;
      if (((param_3 <= sVar2) && (sVar2 != param_5)) &&
         (dVar4 = (double)FUN_017d8580(param_1,param_4,(int)sVar2), dVar6 < dVar4)) {
        dVar5 = dVar4;
      }
      iVar3 = iVar3 + 1;
      local_50 = local_50 + -1;
      dVar6 = dVar5;
    } while (local_50 != 0);
  }
  return dVar5;
}

