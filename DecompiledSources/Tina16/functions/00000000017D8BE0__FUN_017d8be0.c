/* Ghidra address: 017d8be0 */
/* Ghidra symbol: FUN_017d8be0 */


undefined1 FUN_017d8be0(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double unaff_XMM7_Qa;
  undefined1 local_4d;
  int local_4c;
  
  local_4d = 0;
  iVar3 = (*(int *)(param_1 + 8) + -1) * (*(int *)(param_1 + 8) + -1);
  *(undefined4 *)(*(longlong *)(param_1 + 0x88) + (longlong)*(int *)(param_1 + 8) * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x88) + (longlong)param_2 * 4);
  local_4c = *(int *)(param_1 + 8);
  if (param_2 + 1 <= local_4c) {
    iVar4 = ((param_2 + 1) - local_4c) + -1;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x88) + (longlong)local_4c * 4) <= iVar3) {
        iVar2 = local_4c;
        if (local_4c == *(int *)(param_1 + 8)) {
          iVar2 = param_2;
        }
        dVar5 = (double)FUN_017d8580(param_1,iVar2,iVar2);
        if (((dVar5 != 0.0) &&
            (*(double *)(param_1 + 0x38) <= dVar5 && dVar5 != *(double *)(param_1 + 0x38))) &&
           (dVar6 = (double)FUN_017d8810(param_1,*(longlong *)(param_1 + 0x28) +
                                                 (longlong)iVar2 * 0x18,param_2,iVar2,iVar2),
           *(double *)(param_1 + 0x30) * dVar6 < dVar5)) {
          iVar1 = *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)local_4c * 4);
          if (iVar1 < iVar3) {
            *param_3 = iVar2;
            unaff_XMM7_Qa = dVar6 / dVar5;
            unaff_ESI = 0;
            local_4d = 1;
            iVar3 = iVar1;
          }
          else {
            unaff_ESI = unaff_ESI + 1;
            if (dVar6 / dVar5 < unaff_XMM7_Qa) {
              *param_3 = iVar2;
              local_4d = 1;
              unaff_XMM7_Qa = dVar6 / dVar5;
            }
            if (iVar3 * 5 <= unaff_ESI) {
              return local_4d;
            }
          }
        }
      }
      local_4c = local_4c + -1;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0);
  }
  return local_4d;
}

