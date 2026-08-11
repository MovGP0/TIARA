/* Ghidra address: 017d8db0 */
/* Ghidra symbol: FUN_017d8db0 */


void FUN_017d8db0(longlong param_1,int param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double unaff_XMM8_Qa;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  longlong local_80;
  longlong lStack_78;
  longlong local_70;
  
  *param_3 = 0;
  *param_4 = 0;
  iVar4 = *(int *)(param_1 + 8) + -1;
  local_8c = iVar4 * (*(int *)(param_1 + 8) + -1);
  dVar11 = 0.0;
  if (param_2 <= iVar4) {
    iVar4 = (iVar4 - param_2) + 1;
    dVar11 = 0.0;
    local_9c = param_2;
    do {
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)local_9c * 0x18);
      local_80 = *plVar1;
      lStack_78 = plVar1[1];
      local_70 = plVar1[2];
      dVar9 = (double)FUN_017d8770(param_1,&local_80,param_2,local_9c);
      if (0.0 < dVar9) {
        iVar6 = 0;
        iVar7 = (int)local_70;
        if (-1 < (int)local_70 + -1) {
          do {
            lVar3 = local_80;
            lVar8 = (longlong)iVar6;
            sVar2 = *(short *)(local_80 + lVar8 * 2);
            if (param_2 <= sVar2) {
              dVar10 = (double)FUN_017d8580(param_1,local_9c,(int)sVar2);
              if (dVar11 < dVar10) {
                local_94 = (int)*(short *)(lVar3 + lVar8 * 2);
                local_98 = local_9c;
                dVar11 = dVar10;
              }
              iVar5 = (int)*(short *)(*(longlong *)(param_1 + 0x58) +
                                     (longlong)*(short *)(lVar3 + lVar8 * 2) * 2) *
                      (int)*(short *)(*(longlong *)(param_1 + 0x60) + (longlong)local_9c * 2);
              if (((iVar5 <= local_8c) && (*(double *)(param_1 + 0x30) * dVar9 < dVar10)) &&
                 (*(double *)(param_1 + 0x38) <= dVar10 && dVar10 != *(double *)(param_1 + 0x38))) {
                if (iVar5 < local_8c) {
                  *param_3 = (int)*(short *)(local_80 + (longlong)iVar6 * 2);
                  *param_4 = local_9c;
                  unaff_XMM8_Qa = dVar9 / dVar10;
                  local_90 = 0;
                  local_8c = iVar5;
                }
                else {
                  local_90 = local_90 + 1;
                  if (dVar9 / dVar10 < unaff_XMM8_Qa) {
                    *param_3 = (int)*(short *)(local_80 + (longlong)iVar6 * 2);
                    *param_4 = local_9c;
                    unaff_XMM8_Qa = dVar9 / dVar10;
                  }
                  if (local_8c * 5 <= local_90) {
                    return;
                  }
                }
              }
            }
            iVar6 = iVar6 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      local_9c = local_9c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*param_4 == 0) || (*param_3 == 0)) {
    if (dVar11 == 0.0) {
      FUN_017d9d40(param_1,2,0,0);
    }
    else {
      *param_3 = local_94;
      *param_4 = local_98;
    }
  }
  return;
}

