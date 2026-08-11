/* Ghidra address: 0044b3d0 */
/* Ghidra symbol: FUN_0044b3d0 */


ulonglong FUN_0044b3d0(longlong param_1,double *param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  double local_48;
  double local_40;
  int local_34;
  int local_30;
  int local_2c [3];
  
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  local_2c[0] = 1;
  local_48 = 0.0;
  if (**(short **)(param_3 + 0x10) != 0x67) {
    FUN_0044a690(param_1,local_2c);
  }
  cVar3 = FUN_0044a7a0(param_1,local_2c,&local_40,param_3);
  if (cVar3 == '\0') {
    uVar5 = FUN_0044b310(param_1,param_2,param_3);
    uVar6 = (ulonglong)uVar5;
  }
  else {
    local_30 = local_2c[0];
    FUN_0044a690(param_1,&local_30);
    iVar4 = 0;
    if (param_1 != 0) {
      iVar4 = *(int *)(param_1 + -4);
    }
    if (local_30 < iVar4) {
      local_34 = local_2c[0] + -1;
      bVar2 = false;
      while ((!bVar2 && (local_34 < local_30))) {
        if ((local_34 < 1) || (local_30 <= local_34)) {
          bVar2 = true;
        }
        else {
          iVar4 = local_34 + 1;
          local_34 = iVar4;
          cVar3 = FUN_0044a4b0(param_1,&local_34,*(undefined8 *)(param_3 + 0x20));
          if ((((cVar3 == '\0') &&
               (cVar3 = FUN_0044a4b0(param_1,&local_34,&PTR_DAT_0044b60c), cVar3 == '\0')) &&
              (cVar3 = FUN_0044a4b0(param_1,&local_34,*(undefined8 *)(param_3 + 0x28)),
              cVar3 == '\0')) &&
             (cVar3 = FUN_0044a4b0(param_1,&local_34,&LAB_0044b620), cVar3 == '\0')) {
            bVar2 = false;
            local_34 = iVar4;
          }
          else {
            bVar2 = true;
            local_34 = iVar4;
          }
        }
        if (!bVar2) {
          while( true ) {
            if (*(short *)(param_1 + -2 + (longlong)local_34 * 2) == 0x20) {
              bVar1 = false;
            }
            else {
              iVar4 = 0;
              if (param_1 != 0) {
                iVar4 = *(int *)(param_1 + -4);
              }
              bVar1 = local_34 <= iVar4;
            }
            if (!bVar1) break;
            local_34 = local_34 + 1;
          }
          iVar4 = 0;
          if (param_1 != 0) {
            iVar4 = *(int *)(param_1 + -4);
          }
          if (iVar4 < local_34) {
            local_34 = 0;
          }
        }
      }
      if (bVar2) {
        if (local_34 < 1) {
          local_2c[0] = local_30;
        }
        else if (local_34 < local_30) {
          local_2c[0] = local_34;
        }
        else {
          local_2c[0] = local_30;
        }
      }
      else {
        local_2c[0] = local_30;
      }
      uVar5 = FUN_0044af80(param_1,local_2c,&local_48,param_3);
      uVar6 = (ulonglong)uVar5;
      if ((char)uVar5 != '\0') {
        if (local_40 < 0.0) {
          *param_2 = local_40 - local_48;
        }
        else {
          *param_2 = local_40 + local_48;
        }
      }
    }
    else {
      *param_2 = local_40;
    }
  }
  return uVar6 & 0xffffffff;
}

