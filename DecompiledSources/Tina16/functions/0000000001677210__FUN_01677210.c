/* Ghidra address: 01677210 */
/* Ghidra symbol: FUN_01677210 */


undefined8 FUN_01677210(longlong param_1,double *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 local_188 [38];
  undefined8 *local_58;
  uint local_50;
  int iStack_4c;
  double local_48;
  double local_40;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0xed7) == '\x01') {
    FUN_016ee260(*(undefined8 *)(param_1 + 0x30),&local_58,0x130,0);
    puVar5 = local_188;
    for (lVar3 = 0x26; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *local_58;
      local_58 = local_58 + 1;
      puVar5 = puVar5 + 1;
    }
    local_50 = (uint)(0.0 < local_48 - *(double *)(param_1 + 0x58));
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x68);
    if (*(int *)(lVar3 + 0x10) == 0) {
      FUN_00594f90();
    }
    lVar3 = **(longlong **)(lVar3 + 8);
    if (*(int *)(lVar3 + 0x10) == 0) {
      FUN_00594f90();
    }
    if (**(double **)(lVar3 + 8) <= local_48) {
      lVar3 = *(longlong *)(param_1 + 0x68);
      uVar2 = FUN_01b0faf0(param_1,0);
      if (*(uint *)(lVar3 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar2 * 8);
      if (*(int *)(lVar3 + 0x10) == 0) {
        FUN_00594f90();
      }
      if (local_48 < **(double **)(lVar3 + 8)) {
        uVar2 = 0;
        while( true ) {
          uVar4 = uVar2 + 1;
          lVar3 = *(longlong *)(param_1 + 0x68);
          if (*(int *)(lVar3 + 0x10) <= (int)uVar4) break;
          if (*(uint *)(lVar3 + 0x10) <= uVar4) {
            FUN_00594f90();
          }
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar4 * 8);
          if (*(int *)(lVar3 + 0x10) == 0) {
            FUN_00594f90();
          }
          if (local_48 < **(double **)(lVar3 + 8)) {
            lVar3 = *(longlong *)(param_1 + 0x68);
            if (*(uint *)(lVar3 + 0x10) <= uVar2) {
              FUN_00594f90();
            }
            lVar3 = *(longlong *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar2 * 8);
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            if (**(double **)(lVar3 + 8) <= local_48) break;
          }
          uVar2 = uVar2 + 1;
        }
        uVar2 = uVar2 + 1;
      }
      else {
        iVar1 = FUN_01b0fad0(param_1,0);
        uVar2 = iVar1 - 1;
      }
    }
    else {
      uVar2 = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x68);
    if (*(int *)(lVar3 + 0x10) == 0) {
      FUN_00594f90();
    }
    lVar3 = **(longlong **)(lVar3 + 8);
    if (*(int *)(lVar3 + 0x10) == 0) {
      FUN_00594f90();
    }
    local_50 = uVar2;
    if (*(double *)(*(longlong *)(lVar3 + 8) + 8) <= local_40) {
      lVar3 = *(longlong *)(param_1 + 0x68);
      if (*(int *)(lVar3 + 0x10) == 0) {
        FUN_00594f90();
      }
      lVar3 = **(longlong **)(lVar3 + 8);
      uVar2 = FUN_01b0faf0(param_1,1);
      if (*(uint *)(lVar3 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      if (local_40 < *(double *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar2 * 0x18 + 8)) {
        uVar2 = 0;
        while( true ) {
          uVar4 = uVar2 + 1;
          lVar3 = *(longlong *)(param_1 + 0x68);
          if (*(int *)(lVar3 + 0x10) <= (int)uVar4) break;
          if (*(int *)(lVar3 + 0x10) == 0) {
            FUN_00594f90();
          }
          lVar3 = **(longlong **)(lVar3 + 8);
          if (*(uint *)(lVar3 + 0x10) <= uVar4) {
            FUN_00594f90();
          }
          if (local_40 < *(double *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar4 * 0x18 + 8)) {
            lVar3 = *(longlong *)(param_1 + 0x68);
            if (*(int *)(lVar3 + 0x10) == 0) {
              FUN_00594f90();
            }
            lVar3 = **(longlong **)(lVar3 + 8);
            if (*(uint *)(lVar3 + 0x10) <= uVar2) {
              FUN_00594f90();
            }
            if (*(double *)(*(longlong *)(lVar3 + 8) + (longlong)(int)uVar2 * 0x18 + 8) <= local_40)
            break;
          }
          uVar2 = uVar2 + 1;
        }
        iStack_4c = uVar2 + 1;
      }
      else {
        iStack_4c = FUN_01b0fad0(param_1,1);
        iStack_4c = iStack_4c + -1;
      }
    }
    else {
      iStack_4c = 0;
    }
  }
  return CONCAT44(iStack_4c,local_50);
}

