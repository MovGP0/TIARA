/* Ghidra address: 00bca420 */
/* Ghidra symbol: FUN_00bca420 */


undefined8 * FUN_00bca420(undefined8 *param_1,undefined8 *param_2,short *param_3)

{
  char cVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  short sVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  short *local_38;
  short *local_30;
  
  local_40 = param_1;
  cVar1 = FUN_00bc5d10();
  if (cVar1 != '\0') {
    if (local_40[0x32] == 0) {
      (**(code **)*local_40)(local_40,0x3ed);
    }
    else {
      iVar4 = 0;
      if (param_3 != (short *)0x0) {
        iVar4 = *(int *)(param_3 + -2);
      }
      if (iVar4 == 0) {
        FUN_00414480(param_2);
      }
      else {
        local_30 = param_3 + iVar4;
        iVar4 = 0;
        local_38 = param_3;
        if (param_3 < local_30) {
          do {
            sVar6 = *local_38;
            local_38 = local_38 + 1;
            if (sVar6 == 0x24) {
              iVar2 = FUN_00bca350(auStack_68,&local_38);
            }
            else {
              iVar2 = -1;
            }
            if (iVar2 < 0) {
              if ((sVar6 == 0x5c) && (local_38 < local_30)) {
                local_38 = local_38 + 1;
              }
              iVar4 = iVar4 + 1;
            }
            else if (((iVar2 < 0xf) && (local_40[(longlong)iVar2 + 1] != 0)) &&
                    (local_40[(longlong)iVar2 + 0x10] != 0)) {
              iVar4 = iVar4 + (int)((longlong)
                                    (local_40[(longlong)iVar2 + 0x10] -
                                    local_40[(longlong)iVar2 + 1]) / 2);
            }
          } while (local_38 < local_30);
        }
        if (iVar4 == 0) {
          FUN_00414480(param_2);
        }
        else {
          FUN_00414740(param_2,0,iVar4);
          psVar5 = (short *)*param_2;
          local_38 = param_3;
          if (param_3 < local_30) {
            do {
              sVar6 = *local_38;
              local_38 = local_38 + 1;
              if (sVar6 == 0x24) {
                iVar4 = FUN_00bca350(auStack_68,&local_38);
              }
              else {
                iVar4 = -1;
              }
              if (iVar4 < 0) {
                if ((sVar6 == 0x5c) && (local_38 < local_30)) {
                  sVar6 = *local_38;
                  local_38 = local_38 + 1;
                }
                *psVar5 = sVar6;
                psVar5 = psVar5 + 1;
              }
              else {
                psVar3 = (short *)local_40[(longlong)iVar4 + 1];
                if (((iVar4 < 0xf) && (psVar3 != (short *)0x0)) &&
                   (local_40[(longlong)iVar4 + 0x10] != 0)) {
                  for (; psVar3 < (short *)local_40[(longlong)iVar4 + 0x10]; psVar3 = psVar3 + 1) {
                    *psVar5 = *psVar3;
                    psVar5 = psVar5 + 1;
                  }
                }
              }
            } while (local_38 < local_30);
          }
        }
      }
    }
  }
  return param_2;
}

