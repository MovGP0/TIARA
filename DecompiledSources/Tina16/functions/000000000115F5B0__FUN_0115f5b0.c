/* Ghidra address: 0115f5b0 */
/* Ghidra symbol: FUN_0115f5b0 */


int FUN_0115f5b0(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  double **local_f8;
  double *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_24;
  undefined4 local_1c;
  
  local_f8 = &local_f0;
  local_f0 = (double *)FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  local_e8 = FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  local_e0 = FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  local_d8 = FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  local_d0 = FUN_004095c0((longlong)((*(int *)PTR_DAT_02002710 + 1) * 8));
  local_1c = *(undefined4 *)(*param_2 + 0xd4);
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if ((sVar1 == 0x48) || (sVar1 == 0x4c)) {
    local_24 = 2;
    *local_f0 = *(double *)(*param_1 + 0x20) / 6.2831853071796;
    local_f0[1] = *(double *)(*param_1 + 0x30) / 6.2831853071796;
  }
  else if (sVar1 == 0x50) {
    local_24 = 4;
    *local_f0 = *(double *)(*param_1 + 0x20) / 6.2831853071796;
    local_f0[1] = *(double *)(*param_1 + 0x28) / 6.2831853071796;
    local_f0[2] = *(double *)(*param_1 + 0x30) / 6.2831853071796;
    local_f0[3] = *(double *)(*param_1 + 0x38) / 6.2831853071796;
  }
  else {
    if (sVar1 != 0x53) {
      FUN_004095f0(local_f0);
      FUN_004095f0(local_e8);
      FUN_004095f0(local_e0);
      FUN_004095f0(local_d8);
      FUN_004095f0(local_d0);
      return 3;
    }
    local_24 = 4;
    *local_f0 = *(double *)(*param_1 + 0x20) / 6.2831853071796;
    local_f0[1] = *(double *)(*param_1 + 0x28) / 6.2831853071796;
    local_f0[2] = *(double *)(*param_1 + 0x30) / 6.2831853071796;
    local_f0[3] = *(double *)(*param_1 + 0x38) / 6.2831853071796;
  }
  sVar1 = *(short *)(*param_1 + 0x1fa8);
  if (sVar1 == 0x41) {
    iVar2 = FUN_0115de00(param_1,&local_f8);
    if (iVar2 != 0) {
      FUN_004095f0(local_f0);
      FUN_004095f0(local_e8);
      FUN_004095f0(local_e0);
      FUN_004095f0(local_d8);
      FUN_004095f0(local_d0);
      return iVar2 * 10 + 4;
    }
  }
  else if (sVar1 == 0x46) {
    iVar2 = FUN_0115edb0(param_1,&local_f8);
    if (iVar2 != 0) {
      FUN_004095f0(local_f0);
      FUN_004095f0(local_e8);
      FUN_004095f0(local_e0);
      FUN_004095f0(local_d8);
      FUN_004095f0(local_d0);
      return iVar2 * 10 + 5;
    }
  }
  else {
    if (sVar1 != 0x49) {
      FUN_004095f0(local_f0);
      FUN_004095f0(local_e8);
      FUN_004095f0(local_e0);
      FUN_004095f0(local_d8);
      FUN_004095f0(local_d0);
      return 3;
    }
    iVar2 = FUN_0115f0a0(param_1,&local_f8);
    if (iVar2 != 0) {
      FUN_004095f0(local_f0);
      FUN_004095f0(local_e8);
      FUN_004095f0(local_e0);
      FUN_004095f0(local_d8);
      FUN_004095f0(local_d0);
      return iVar2 * 10 + 6;
    }
  }
  iVar2 = 0;
  do {
    lVar3 = (longlong)iVar2;
    *(undefined8 *)(*param_2 + 0x28 + lVar3 * 8) = *(undefined8 *)(local_e8 + lVar3 * 8);
    *(undefined8 *)(*param_2 + 0x68 + lVar3 * 8) = *(undefined8 *)(local_e0 + lVar3 * 8);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  *(undefined4 *)(*param_2 + 0xc0) = local_24;
  FUN_004095f0(local_f0);
  FUN_004095f0(local_e8);
  FUN_004095f0(local_e0);
  FUN_004095f0(local_d8);
  FUN_004095f0(local_d0);
  return 0;
}

