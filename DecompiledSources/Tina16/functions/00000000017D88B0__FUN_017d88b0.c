/* Ghidra address: 017d88b0 */
/* Ghidra symbol: FUN_017d88b0 */


undefined8 FUN_017d88b0(longlong param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar8;
  int *piVar7;
  int local_40;
  int local_3c [5];
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x88) + (longlong)*(int *)(param_1 + 8) * 4) =
       *(undefined4 *)(*(longlong *)(param_1 + 0x88) + (longlong)param_2 * 4);
  iVar3 = *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -1;
  iVar1 = *(int *)(param_1 + 8);
  for (; 0 < iVar3; iVar3 = iVar3 + -1) {
    for (; (uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20),
           0 < *(int *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar1 * 4) && (param_2 <= iVar1));
        iVar1 = iVar1 + -1) {
    }
    if (iVar1 < param_2) break;
    iVar2 = iVar1;
    if (iVar1 == *(int *)(param_1 + 8)) {
      iVar2 = param_2;
    }
    dVar5 = (double)FUN_017d8580(param_1,iVar2,iVar2);
    if ((dVar5 == 0.0) ||
       (dVar5 < *(double *)(param_1 + 0x38) || dVar5 == *(double *)(param_1 + 0x38))) {
      lVar4 = (longlong)iVar2;
      if (*(short *)(*(longlong *)(param_1 + 0x60) + lVar4 * 2) == 0) {
        piVar7 = local_3c;
        dVar5 = (double)FUN_017d86b0(param_1,*(longlong *)(param_1 + 0x28) + lVar4 * 0x18,param_2,
                                     iVar2,piVar7);
        in_stack_ffffffffffffff88 = CONCAT44((int)((ulonglong)piVar7 >> 0x20),local_3c[0]);
        dVar6 = (double)FUN_017d8810(param_1,*(longlong *)(param_1 + 0x28) + lVar4 * 0x18,param_2,
                                     iVar2,in_stack_ffffffffffffff88);
        if ((*(double *)(param_1 + 0x38) <= dVar5 && dVar5 != *(double *)(param_1 + 0x38)) &&
           (*(double *)(param_1 + 0x30) * dVar6 < dVar5)) {
          *param_3 = local_3c[0];
          *param_4 = iVar2;
          return 1;
        }
        if (*(short *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 2) == 0) {
          piVar7 = &local_40;
          dVar5 = (double)FUN_017d85d0(param_1,*(longlong *)(param_1 + 0x20) +
                                               (longlong)iVar2 * 0x18,param_2,iVar2,piVar7);
          in_stack_ffffffffffffff88 = CONCAT44((int)((ulonglong)piVar7 >> 0x20),param_2);
          dVar6 = (double)FUN_017d8810(param_1,*(longlong *)(param_1 + 0x28) +
                                               (longlong)local_40 * 0x18,param_2,local_40,
                                       in_stack_ffffffffffffff88);
          if ((*(double *)(param_1 + 0x38) <= dVar5 && dVar5 != *(double *)(param_1 + 0x38)) &&
             (*(double *)(param_1 + 0x30) * dVar6 < dVar5)) {
            *param_3 = iVar2;
            *param_4 = local_40;
            return 1;
          }
        }
      }
      else {
        piVar7 = &local_40;
        dVar5 = (double)FUN_017d85d0(param_1,*(longlong *)(param_1 + 0x20) + lVar4 * 0x18,param_2,
                                     iVar2,piVar7);
        in_stack_ffffffffffffff88 = CONCAT44((int)((ulonglong)piVar7 >> 0x20),param_2);
        dVar6 = (double)FUN_017d8810(param_1,*(longlong *)(param_1 + 0x28) +
                                             (longlong)local_40 * 0x18,param_2,local_40,
                                     in_stack_ffffffffffffff88);
        if ((*(double *)(param_1 + 0x38) <= dVar5 && dVar5 != *(double *)(param_1 + 0x38)) &&
           (*(double *)(param_1 + 0x30) * dVar6 < dVar5)) {
          *param_3 = iVar2;
          *param_4 = local_40;
          return 1;
        }
      }
    }
    else {
      in_stack_ffffffffffffff88 = CONCAT44(uVar8,iVar2);
      dVar6 = (double)FUN_017d8810(param_1,*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 0x18,
                                   param_2,iVar2,in_stack_ffffffffffffff88);
      if (*(double *)(param_1 + 0x30) * dVar6 < dVar5) {
        *param_3 = iVar2;
        *param_4 = iVar2;
        return 1;
      }
    }
    iVar1 = iVar1 + -1;
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  return 0;
}

