/* Ghidra address: 016775a0 */
/* Ghidra symbol: FUN_016775a0 */


bool FUN_016775a0(longlong param_1,double *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_188 [38];
  undefined8 *local_58 [2];
  double local_48;
  double local_40;
  
  local_48 = *param_2;
  local_40 = param_2[1];
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0xed7) == '\x01') {
    uVar1 = FUN_01b0fa20(param_1,0);
    iVar2 = FUN_01b0fa40(param_1,0,uVar1);
    FUN_016ee260(*(undefined8 *)(param_1 + 0x30),local_58,0x130,0);
    puVar7 = local_188;
    for (lVar6 = 0x26; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar7 = *local_58[0];
      local_58[0] = local_58[0] + 1;
      puVar7 = puVar7 + 1;
    }
    local_48 = local_48 - *(double *)(param_1 + 0x58);
    if (iVar2 == 0) {
      bVar8 = local_48 <= 0.0;
    }
    else {
      bVar8 = 0.0 < local_48;
    }
  }
  else {
    uVar1 = FUN_01b0fa20(param_1,0);
    uVar3 = FUN_01b0fa40(param_1,0,uVar1);
    uVar1 = FUN_01b0fa20(param_1,1);
    uVar4 = FUN_01b0fa40(param_1,1,uVar1);
    if ((int)uVar3 < 0) {
      lVar6 = *(longlong *)(param_1 + 0x68);
      if (*(int *)(lVar6 + 0x10) == 0) {
        FUN_00594f90();
      }
      lVar6 = **(longlong **)(lVar6 + 8);
      if (*(int *)(lVar6 + 0x10) == 0) {
        FUN_00594f90();
      }
      bVar8 = local_48 < **(double **)(lVar6 + 8);
    }
    else {
      uVar5 = FUN_01b0faf0(param_1,0);
      if (uVar3 == uVar5) {
        lVar6 = *(longlong *)(param_1 + 0x68);
        uVar3 = FUN_01b0faf0(param_1,0);
        if (*(uint *)(lVar6 + 0x10) <= uVar3) {
          FUN_00594f90();
        }
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + (longlong)(int)uVar3 * 8);
        if (*(int *)(lVar6 + 0x10) == 0) {
          FUN_00594f90();
        }
        bVar8 = **(double **)(lVar6 + 8) <= local_48;
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x68);
        if (*(uint *)(lVar6 + 0x10) <= uVar3 + 1) {
          FUN_00594f90();
        }
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + (longlong)(int)(uVar3 + 1) * 8);
        if (*(int *)(lVar6 + 0x10) == 0) {
          FUN_00594f90();
        }
        if (**(double **)(lVar6 + 8) <= local_48) {
          bVar8 = false;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 0x68);
          if (*(uint *)(lVar6 + 0x10) <= uVar3) {
            FUN_00594f90();
          }
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + 8) + (longlong)(int)uVar3 * 8);
          if (*(int *)(lVar6 + 0x10) == 0) {
            FUN_00594f90();
          }
          bVar8 = **(double **)(lVar6 + 8) <= local_48;
        }
      }
    }
    if ((int)uVar4 < 0) {
      lVar6 = *(longlong *)(param_1 + 0x68);
      if (*(int *)(lVar6 + 0x10) == 0) {
        FUN_00594f90();
      }
      if (*(int *)(**(longlong **)(lVar6 + 8) + 0x10) == 0) {
        FUN_00594f90();
      }
    }
    else {
      uVar3 = FUN_01b0faf0(param_1,1);
      if (uVar4 == uVar3) {
        lVar6 = *(longlong *)(param_1 + 0x68);
        if (*(int *)(lVar6 + 0x10) == 0) {
          FUN_00594f90();
        }
        lVar6 = **(longlong **)(lVar6 + 8);
        uVar3 = FUN_01b0faf0(param_1,1);
        if (*(uint *)(lVar6 + 0x10) <= uVar3) {
          FUN_00594f90();
        }
      }
      else {
        lVar6 = *(longlong *)(param_1 + 0x68);
        if (*(int *)(lVar6 + 0x10) == 0) {
          FUN_00594f90();
        }
        lVar6 = **(longlong **)(lVar6 + 8);
        if (*(uint *)(lVar6 + 0x10) <= uVar4 + 1) {
          FUN_00594f90();
        }
        if (local_40 < *(double *)(*(longlong *)(lVar6 + 8) + (longlong)(int)(uVar4 + 1) * 0x18 + 8)
           ) {
          lVar6 = *(longlong *)(param_1 + 0x68);
          if (*(int *)(lVar6 + 0x10) == 0) {
            FUN_00594f90();
          }
          if (*(uint *)(**(longlong **)(lVar6 + 8) + 0x10) <= uVar4) {
            FUN_00594f90();
          }
        }
      }
    }
  }
  return bVar8;
}

