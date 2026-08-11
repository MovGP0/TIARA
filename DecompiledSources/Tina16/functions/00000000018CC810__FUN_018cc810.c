/* Ghidra address: 018cc810 */
/* Ghidra symbol: FUN_018cc810 */


void FUN_018cc810(longlong *param_1)

{
  longlong lVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  double local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  puVar2 = auStack_58;
  if (*(char *)((longlong)param_1 + 0xa1) == '\0') {
    FUN_018cceb0(param_1);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  if (*(char *)((longlong)param_1 + 0xda) == '\0') {
    param_1[0x11] = param_1[0x26];
    *(undefined4 *)(param_1 + 1) = 1;
  }
  if (1 < *(int *)(param_1[0x25] + 0x180)) {
    FUN_018ba320(param_1[7],(int)param_1[1],param_1[0x11],0);
  }
  if ((*(char *)((longlong)param_1 + 0xda) != '\0') && (*(char *)((longlong)param_1 + 0xa1) == '\0')
     ) {
    *(undefined1 *)((longlong)param_1 + 0xa1) = 1;
    local_28 = (double)param_1[0x12];
    local_20 = FUN_018cb270(param_1,&PTR_FUN_01932e38);
    (**(code **)(*param_1 + 0x58))(param_1,local_20);
    if (local_20 == 0) {
      FUN_018cd940(param_1,0,1);
    }
    if ((local_20 != 0) && (*(char *)(param_1[0x25] + 0x1a1) != '\0')) {
      local_28 = (double)param_1[0x12] - local_28;
      dVar3 = (double)(**(code **)(*param_1 + 0x20))(param_1);
      param_1[5] = (longlong)(dVar3 + local_28);
      lVar1 = param_1[0x25];
      dVar3 = (double)(**(code **)(*param_1 + 0x20))(param_1);
      FUN_018ba100(param_1[7],lVar1,
                   (double)param_1[6] + *(double *)(lVar1 + 0x1a8) * *(double *)PTR_DAT_02002c30 +
                   *(double *)(lVar1 + 0x1c8) * *(double *)PTR_DAT_02002c30,
                   dVar3 + *(double *)(param_1[0x25] + 0x1e0) * *(double *)PTR_DAT_02002c30 +
                   *(double *)(param_1[0x25] + 0x178) * *(double *)PTR_DAT_02002c30);
    }
    *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  }
  local_20 = FUN_018cb270(param_1,&PTR_FUN_01930a20);
  if (local_20 != 0) {
    dVar3 = (double)(**(code **)(*param_1 + 0x20))(param_1);
    param_1[0x12] = (longlong)(dVar3 - *(double *)(local_20 + 0xb0));
    if (((*(char *)((longlong)param_1 + 0xda) == '\0') || (*(char *)(local_20 + 0x241) == '\0')) ||
       (*(char *)((longlong)param_1 + 0xa1) != '\0')) {
      param_1[0x20] = 0;
    }
    else {
      param_1[0x20] = *(longlong *)(local_20 + 0xb0);
    }
  }
  FUN_018cc5f0(auStack_58,local_20);
  local_20 = FUN_018cb270(param_1,&PTR_FUN_01933a98);
  if ((local_20 != 0) && (*(char *)(local_20 + 0x240) != '\0')) {
    param_1[0x12] = 0;
    FUN_018cc5f0(auStack_58,local_20);
  }
  *(undefined1 *)((longlong)param_1 + 0xd9) = 0;
  return;
}

