/* Ghidra address: 005260d0 */
/* Ghidra symbol: FUN_005260d0 */


void FUN_005260d0(double param_1,double *param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  double local_res8 [4];
  
  *param_2 = param_1;
  *param_3 = 0;
  local_res8[0] = param_1;
  cVar1 = FUN_00458610(local_res8);
  if ((byte)(cVar1 - 2U) < 2) {
    iVar3 = FUN_00458460(local_res8);
    *param_3 = iVar3 + 1;
    uVar4 = FUN_004585b0(local_res8);
    if ((uVar4 & 0x1fffffffe00000) == 0) {
      uVar4 = uVar4 << 0x20;
      *param_3 = *param_3 + -0x20;
    }
    if ((uVar4 & 0x1fffe000000000) == 0) {
      uVar4 = uVar4 << 0x10;
      *param_3 = *param_3 + -0x10;
    }
    if ((uVar4 & 0x1fe00000000000) == 0) {
      uVar4 = uVar4 << 8;
      *param_3 = *param_3 + -8;
    }
    if ((uVar4 & 0x1e000000000000) == 0) {
      uVar4 = uVar4 << 4;
      *param_3 = *param_3 + -4;
    }
    if ((uVar4 & 0x18000000000000) == 0) {
      uVar4 = uVar4 * 4;
      *param_3 = *param_3 + -2;
    }
    if ((uVar4 & 0x10000000000000) == 0) {
      uVar4 = uVar4 * 2;
      *param_3 = *param_3 + -1;
    }
    dVar5 = (double)(longlong)uVar4;
    if ((longlong)uVar4 < 0) {
      dVar5 = dVar5 + 1.8446744073709552e+19;
    }
    *param_2 = dVar5 / 9007199254740992.0;
    bVar2 = FUN_00458410(local_res8,7);
    if (0x7f < bVar2) {
      *param_2 = *param_2 * -1.0;
    }
  }
  else if ((byte)(cVar1 - 4U) < 2) {
    iVar3 = FUN_00458460(local_res8);
    *param_3 = iVar3 + 1;
    dVar5 = (double)FUN_004584d0(local_res8);
    *param_2 = dVar5 / 2.0;
    bVar2 = FUN_00458410(local_res8,7);
    if (0x7f < bVar2) {
      *param_2 = *param_2 * -1.0;
    }
  }
  else if ((byte)(cVar1 - 6U) < 2) {
    FUN_00409f50(1,1);
    *param_3 = -0x7fffffff;
  }
  else if (cVar1 == '\b') {
    FUN_00409f50(1,1);
  }
  return;
}

