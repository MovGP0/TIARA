/* Ghidra address: 017d81b0 */
/* Ghidra symbol: FUN_017d81b0 */


int FUN_017d81b0(longlong param_1,int param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  int local_40;
  
  iVar5 = 0;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 0x18);
  lVar2 = *plVar1;
  local_40 = (int)plVar1[2];
  iVar4 = 0;
  if (-1 < local_40 + -1) {
    do {
      dVar6 = (double)FUN_017d8580(param_1,param_2,(longlong)*(short *)(lVar2 + (longlong)iVar4 * 2)
                                  );
      if (dVar6 == 1.0) {
        sVar3 = *(short *)(lVar2 + (longlong)iVar4 * 2);
        dVar6 = (double)FUN_017d8580(param_1,(int)sVar3,param_2);
        if (dVar6 == 1.0) {
          iVar5 = iVar5 + 1;
          if (1 < iVar5) {
            return iVar5;
          }
          *param_3 = param_2;
          *param_4 = (int)sVar3;
        }
      }
      iVar4 = iVar4 + 1;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return iVar5;
}

