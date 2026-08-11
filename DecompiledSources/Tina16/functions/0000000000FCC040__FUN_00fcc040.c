/* Ghidra address: 00fcc040 */
/* Ghidra symbol: FUN_00fcc040 */


double FUN_00fcc040(longlong param_1,int *param_2,int *param_3,double param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined8 local_a0;
  double local_98 [4];
  double local_78 [4];
  int local_58 [10];
  
  local_a0 = 0;
  iVar2 = 0;
  dVar7 = 100.0;
  local_b4 = 0;
  piVar3 = local_58;
  pdVar4 = local_78;
  pdVar5 = local_98;
  do {
    *param_2 = local_b4 / 2;
    *param_3 = local_b4 % 2;
    if (*param_2 == 1) {
      local_bc = 2;
    }
    else {
      local_bc = 1;
    }
    if (*param_3 == 1) {
      local_b8 = 6;
    }
    else {
      local_b8 = 1;
    }
    iVar1 = FUN_0040c840(((double)local_bc * *(double *)(param_1 + 0xce8)) /
                         ((double)(local_b8 << 5) * param_4) + 0.5);
    *(int *)(param_1 + 0x844) = 0x100 - iVar1;
    FUN_0043f750(&local_a0,0x100 - iVar1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_a0);
    (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x128))(*(longlong **)(param_1 + 0x6f8),0);
    iVar1 = *(int *)(param_1 + 0x844);
    if ((iVar1 < 1) || (0xff < iVar1)) {
      *piVar3 = 0;
    }
    else {
      *piVar3 = iVar1;
    }
    *pdVar4 = ((double)local_bc * *(double *)(param_1 + 0xce8)) /
              (double)(local_b8 * 0x20 * (0x100 - *piVar3));
    dVar6 = (double)FUN_0040c850((*pdVar4 - param_4) / param_4);
    *pdVar5 = dVar6 * 100.0;
    if (*pdVar5 <= dVar7 && dVar7 != *pdVar5) {
      dVar7 = *pdVar5;
      iVar2 = local_b4;
    }
    local_b4 = local_b4 + 1;
    pdVar5 = pdVar5 + 1;
    pdVar4 = pdVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (local_b4 != 4);
  iVar1 = local_58[iVar2];
  *(int *)(param_1 + 0x844) = iVar1;
  *param_2 = iVar2 / 2;
  *param_3 = iVar2 % 2;
  if (*param_2 == 1) {
    local_bc = 2;
  }
  else {
    local_bc = 1;
  }
  if (*param_3 == 1) {
    local_b8 = 6;
  }
  else {
    local_b8 = 1;
  }
  *(int *)(param_1 + 0xc14) = iVar1;
  dVar7 = *(double *)(param_1 + 0xce8);
  iVar2 = *(int *)(param_1 + 0x844);
  FUN_00414480(&local_a0);
  return ((double)local_bc * dVar7) / (double)(local_b8 * 0x20 * (0x100 - iVar2));
}

