/* Ghidra address: 008403a0 */
/* Ghidra symbol: FUN_008403a0 */


void FUN_008403a0(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,undefined4 param_8,byte param_9)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  byte bVar5;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_44 = param_5;
  for (; (local_44 < param_7 && (param_3 < *(int *)(*(longlong *)(param_1 + 0x180) + 0x4e0)));
      param_3 = param_3 + 1) {
    local_48 = param_4;
    local_3c = FUN_00848250(*(undefined8 *)(param_1 + 0x180),param_3);
    local_3c = local_44 + local_3c;
    for (local_5c = param_2;
        (local_48 < param_6 && (local_5c < *(int *)(*(longlong *)(param_1 + 0x180) + 0x4a4)));
        local_5c = local_5c + 1) {
      local_40 = FUN_00848220(*(undefined8 *)(param_1 + 0x180),local_5c);
      local_40 = local_48 + local_40;
      if (local_48 < local_40) {
        uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x490));
        iVar2 = thunk_FUN_04177e28(uVar3,&local_48);
        if (iVar2 != 0) {
          cVar1 = FUN_0083d5d0(local_5c,param_3,*(longlong *)(param_1 + 0x180) + 0x564);
          bVar5 = param_9;
          if (cVar1 != '\0') {
            if ((*(uint *)(*(longlong *)(param_1 + 0x180) + 0x4d4) & 0x20000) != 0) {
              bVar5 = param_9 | 0x10;
            }
            if (*(char *)(*(longlong *)(param_1 + 0x180) + 0x560) != '\0') {
              bVar5 = bVar5 | 0x20;
            }
          }
          cVar1 = FUN_0083f660(*(undefined8 *)(param_1 + 0x180));
          if (((cVar1 != '\0') && (param_3 == *(int *)(*(longlong *)(param_1 + 0x180) + 0x4ac))) &&
             (local_5c == *(int *)(*(longlong *)(param_1 + 0x180) + 0x4a8))) {
            thunk_FUN_041a6241(local_48,local_44);
            bVar5 = bVar5 | 2;
          }
          cVar1 = FUN_0083d5d0(local_5c,param_3,param_1 + 0xb8);
          if (cVar1 != '\0') {
            bVar5 = bVar5 | 1;
          }
          if ((((bVar5 & 2) == 0) ||
              ((*(uint *)(*(longlong *)(param_1 + 0x180) + 0x4d4) & 0x400) == 0)) ||
             ((*(char *)(*(longlong *)(param_1 + 0x180) + 0x525) == '\0' ||
              ((*(ushort *)(*(longlong *)(param_1 + 0x180) + 0x34) & 0x10) != 0)))) {
            if ((*(char *)(*(longlong *)(param_1 + 0x180) + 0x524) != '\0') ||
               ((*(ushort *)(*(longlong *)(param_1 + 0x180) + 0x34) & 0x10) != 0)) {
              FUN_005ff880(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x490),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0xb8));
              if (((bVar5 & 1) == 0) ||
                 (((bVar5 & 2) != 0 &&
                  ((*(uint *)(*(longlong *)(param_1 + 0x180) + 0x4d4) & 0x1020) == 0)))) {
                (**(code **)(**(longlong **)(param_1 + 0x180) + 0x298))
                          (*(longlong **)(param_1 + 0x180),&local_48,param_8,bVar5,local_5c,param_3)
                ;
              }
              else {
                (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2a0))
                          (*(longlong **)(param_1 + 0x180),&local_48,bVar5,local_5c,param_3);
              }
            }
            local_38 = CONCAT44(local_44,local_48);
            local_30 = CONCAT44(local_3c,local_40);
            if ((bVar5 & 0x20) != 0) {
              local_38 = CONCAT44(local_44 + 1,local_48 + 1);
            }
            (**(code **)(**(longlong **)(param_1 + 0x180) + 0x290))
                      (*(longlong **)(param_1 + 0x180),local_5c,param_3,&local_38,bVar5);
            if (((((*(char *)(*(longlong *)(param_1 + 0x180) + 0x524) != '\0') && ((bVar5 & 4) != 0)
                  ) && (*(char *)(*(longlong *)(param_1 + 0x180) + 0x390) != '\0')) &&
                ((*(int *)(param_1 + 0xb4) != 0 || *(int *)(param_1 + 0xb0) != 0 &&
                 (*(char *)(*(longlong *)(param_1 + 0x180) + 0x55c) == '\0')))) &&
               ((bVar5 & 0x20) == 0)) {
              local_58 = CONCAT44(local_44,local_48);
              local_50 = CONCAT44(local_3c,local_40);
              if ((*(uint *)(param_1 + 0xb4) & 4) == 0) {
                local_50 = CONCAT44(local_3c,local_40 + *(int *)(param_1 + 200));
              }
              else if ((*(uint *)(param_1 + 0xb4) & 8) == 0) {
                local_50 = CONCAT44(local_3c + *(int *)(param_1 + 0x100),local_40);
              }
              cVar1 = FUN_00781870();
              if (cVar1 == '\0') {
                uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x490));
                thunk_FUN_03998bad(uVar3,&local_58,4,*(undefined4 *)(param_1 + 0xb4));
                uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x490));
                thunk_FUN_03998bad(uVar3,&local_58,4,*(undefined4 *)(param_1 + 0xb0));
              }
            }
            if ((*(char *)(*(longlong *)(param_1 + 0x180) + 0x524) != '\0') &&
               ((*(ushort *)(*(longlong *)(param_1 + 0x180) + 0x34) & 0x10) == 0)) {
              cVar1 = FUN_00781870();
              if (((cVar1 == '\0') ||
                  ((*(uint *)(*(longlong *)(param_1 + 0x180) + 0x4d4) & 0x20) == 0)) &&
                 ((((bVar5 & 2) != 0 &&
                   ((*(uint *)(*(longlong *)(param_1 + 0x180) + 0x4d4) & 0x2400) != 0x2400)) &&
                  ((*(uint *)(*(longlong *)(param_1 + 0x180) + 0x4d4) & 0x1000) == 0)))) {
                local_58 = CONCAT44(local_44,local_48);
                local_50 = CONCAT44(local_3c,local_40);
                if (*(char *)(*(longlong *)(param_1 + 0x180) + 0x55c) == '\x01') {
                  iVar2 = FUN_0044f080();
                  if (5 < iVar2) {
                    cVar1 = FUN_00781870();
                    if (cVar1 == '\0') {
                      FUN_00423b10(&local_58,0xffffffff,0xffffffff);
                    }
                  }
                }
                FUN_005fdcb0(*(undefined8 *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x490) + 0x80),0);
                cVar1 = FUN_00781870();
                if ((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x180) + 0x478) == '\0'))
                {
                  uVar3 = *(undefined8 *)(param_1 + 0x180);
                  pcVar4 = (code *)FUN_00411550(uVar3,0xffc5);
                  cVar1 = (*pcVar4)(uVar3);
                  if (cVar1 == '\0') {
                    uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x490));
                    thunk_FUN_03b3ef59(uVar3,&local_58);
                  }
                  else {
                    local_38 = CONCAT44((int)((ulonglong)local_58 >> 0x20),(undefined4)local_50);
                    local_30 = CONCAT44((int)((ulonglong)local_50 >> 0x20),(undefined4)local_58);
                    uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x490));
                    thunk_FUN_03b3ef59(uVar3,&local_38);
                  }
                }
                else {
                  uVar3 = *(undefined8 *)(param_1 + 0x180);
                  pcVar4 = (code *)FUN_00411550(uVar3,0xffc5);
                  cVar1 = (*pcVar4)(uVar3);
                  if (cVar1 != '\0') {
                    FUN_00423b50(&local_58,1,0);
                  }
                  uVar3 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x490));
                  FUN_00778530(uVar3,&local_58);
                }
              }
            }
          }
        }
      }
      local_48 = local_40 + *(int *)(param_1 + 200);
    }
    local_44 = local_3c + *(int *)(param_1 + 0x100);
  }
  return;
}

