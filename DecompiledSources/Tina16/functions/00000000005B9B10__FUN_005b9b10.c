/* Ghidra address: 005b9b10 */
/* Ghidra symbol: FUN_005b9b10 */


char FUN_005b9b10(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  int local_1c [3];
  
  *param_2 = 0;
  cVar2 = FUN_005b99e0(param_1,0x17,local_1c);
  if (cVar2 == '\0') {
    *param_2 = (longlong)local_1c[0] * 36000000000;
    iVar5 = (int)param_1[1];
    if (iVar5 < 1) {
      bVar1 = false;
    }
    else {
      iVar4 = 0;
      if (*param_1 != 0) {
        iVar4 = *(int *)(*param_1 + -4);
      }
      bVar1 = iVar5 <= iVar4;
    }
    if (bVar1) {
      sVar3 = *(short *)(*param_1 + -2 + (longlong)iVar5 * 2);
    }
    else {
      sVar3 = 0;
    }
    if (sVar3 == 0x3a) {
      iVar4 = 0;
      if (*param_1 != 0) {
        iVar4 = *(int *)(*param_1 + -4);
      }
      if (iVar5 <= iVar4) {
        *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      }
      cVar2 = FUN_005b99e0(param_1,0x3b,local_1c);
      if (cVar2 == '\0') {
        *param_2 = *param_2 + (longlong)local_1c[0] * 600000000;
        iVar5 = (int)param_1[1];
        if (iVar5 < 1) {
          bVar1 = false;
        }
        else {
          iVar4 = 0;
          if (*param_1 != 0) {
            iVar4 = *(int *)(*param_1 + -4);
          }
          bVar1 = iVar5 <= iVar4;
        }
        if (bVar1) {
          sVar3 = *(short *)(*param_1 + -2 + (longlong)iVar5 * 2);
        }
        else {
          sVar3 = 0;
        }
        if (sVar3 == 0x3a) {
          iVar4 = 0;
          if (*param_1 != 0) {
            iVar4 = *(int *)(*param_1 + -4);
          }
          if (iVar5 <= iVar4) {
            *(int *)(param_1 + 1) = (int)param_1[1] + 1;
          }
          iVar5 = (int)param_1[1];
          if (iVar5 < 1) {
            bVar1 = false;
          }
          else {
            iVar4 = 0;
            if (*param_1 != 0) {
              iVar4 = *(int *)(*param_1 + -4);
            }
            bVar1 = iVar5 <= iVar4;
          }
          if (bVar1) {
            sVar3 = *(short *)(*param_1 + -2 + (longlong)iVar5 * 2);
          }
          else {
            sVar3 = 0;
          }
          if (sVar3 != 0x2e) {
            cVar2 = FUN_005b99e0(param_1,0x3b,local_1c);
            if (cVar2 != '\0') {
              if (cVar2 != '\x02') {
                return cVar2;
              }
              return '\x03';
            }
            *param_2 = *param_2 + (longlong)local_1c[0] * 10000000;
          }
          iVar5 = (int)param_1[1];
          if (iVar5 < 1) {
            bVar1 = false;
          }
          else {
            iVar4 = 0;
            if (*param_1 != 0) {
              iVar4 = *(int *)(*param_1 + -4);
            }
            bVar1 = iVar5 <= iVar4;
          }
          if (bVar1) {
            sVar3 = *(short *)(*param_1 + -2 + (longlong)iVar5 * 2);
          }
          else {
            sVar3 = 0;
          }
          if (sVar3 == 0x2e) {
            iVar4 = 0;
            if (*param_1 != 0) {
              iVar4 = *(int *)(*param_1 + -4);
            }
            if (iVar5 <= iVar4) {
              *(int *)(param_1 + 1) = (int)param_1[1] + 1;
            }
            if ((int)param_1[1] < 1) {
              bVar1 = false;
            }
            else {
              iVar5 = 0;
              if (*param_1 != 0) {
                iVar5 = *(int *)(*param_1 + -4);
              }
              bVar1 = (int)param_1[1] <= iVar5;
            }
            if (bVar1) {
              uVar6 = *(ushort *)(*param_1 + -2 + (longlong)(int)param_1[1] * 2);
            }
            else {
              uVar6 = 0;
            }
            local_1c[0] = 10000000;
            while (((1 < local_1c[0] && (0x2f < uVar6)) && (uVar6 < 0x3a))) {
              local_1c[0] = local_1c[0] / 10;
              *param_2 = *param_2 + (longlong)(int)((uVar6 - 0x30) * local_1c[0]);
              iVar5 = 0;
              if (*param_1 != 0) {
                iVar5 = *(int *)(*param_1 + -4);
              }
              if ((int)param_1[1] <= iVar5) {
                *(int *)(param_1 + 1) = (int)param_1[1] + 1;
              }
              iVar5 = (int)param_1[1];
              if (iVar5 < 1) {
                bVar1 = false;
              }
              else {
                iVar4 = 0;
                if (*param_1 != 0) {
                  iVar4 = *(int *)(*param_1 + -4);
                }
                bVar1 = iVar5 <= iVar4;
              }
              if (bVar1) {
                uVar6 = *(ushort *)(*param_1 + -2 + (longlong)iVar5 * 2);
              }
              else {
                uVar6 = 0;
              }
            }
          }
        }
        cVar2 = '\0';
      }
      else if (cVar2 == '\x02') {
        cVar2 = '\x03';
      }
    }
    else {
      cVar2 = '\x01';
    }
  }
  else if (cVar2 == '\x02') {
    cVar2 = '\x03';
  }
  return cVar2;
}

