/* Ghidra address: 0098b580 */
/* Ghidra symbol: FUN_0098b580 */


void FUN_0098b580(longlong *param_1,undefined1 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  short local_1c;
  ushort local_1a [5];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  *param_3 = 0;
  if ((char)param_1[1] == '\0') {
    bVar1 = *(byte *)((longlong)param_1 + 9);
    if (bVar1 < 4) {
      if (bVar1 == 3) {
        *param_2 = 0xd;
        *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
        FUN_00414520(param_3);
        *(undefined1 *)((longlong)param_1 + 9) = 4;
      }
      else if (bVar1 == 0) {
        do {
          cVar2 = (**(code **)(*param_1 + 8))(param_1,local_1a);
          if (cVar2 == '\0') {
            *param_2 = 0x2e;
            FUN_00414520(param_3);
            *param_4 = 0xffffffff;
            goto LAB_0098ca38;
          }
          cVar2 = FUN_008ff300(local_1a[0]);
        } while (cVar2 != '\0');
        uVar4 = (ulonglong)local_1a[0];
        if (uVar4 < 0x2f) {
          if (uVar4 == 0x2e) {
            (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
            if (local_1c == 0x2e) {
              *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
              *param_2 = 5;
              *(undefined1 *)(param_1 + 3) = 5;
              FUN_00414520(param_3);
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            }
            else if ((ushort)(local_1c - 0x30U) < 10) {
              FUN_00414b90(param_3,&DAT_0098ca80);
              do {
                *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                FUN_00415e60(local_30,local_1c);
                FUN_00415f90(param_3,local_30[0]);
                uVar5 = (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
                if ((ushort)(local_1c - 0x30U) < 0x10) {
                  bVar6 = ((int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),1) <<
                           ((byte)(local_1c - 0x30U) & 0x1f) & 0x3ffU) != 0;
                }
                else {
                  bVar6 = false;
                }
              } while (bVar6);
              *param_2 = 0x2c;
              *(undefined1 *)(param_1 + 3) = 0x2c;
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            }
            else {
              *param_2 = 4;
              *(undefined1 *)(param_1 + 3) = 4;
              FUN_00414520(param_3);
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            }
            goto LAB_0098ca38;
          }
          if (uVar4 < 0x2a) {
            if (uVar4 == 0x29) {
              *param_2 = 1;
              *(undefined1 *)(param_1 + 3) = 1;
              FUN_00414520(param_3);
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              goto LAB_0098ca38;
            }
            if (uVar4 < 0x25) {
              if (uVar4 == 0x24) {
                cVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_1a);
                if (cVar2 == '\0') {
                  *param_2 = 0x2f;
                  *(undefined1 *)(param_1 + 3) = 0x2f;
                  *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                }
                else {
                  cVar2 = FUN_009007b0(local_1a[0]);
                  if (cVar2 == '\0') {
                    *param_2 = 0x2f;
                    *(undefined1 *)(param_1 + 3) = 0x2f;
                    *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                    FUN_00415e60(param_3,local_1a[0]);
                  }
                  else {
                    FUN_00414520(param_3);
                    do {
                      cVar2 = FUN_00900780(local_1a[0]);
                      if (cVar2 == '\0') break;
                      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                      FUN_00415e60(&local_50,local_1a[0]);
                      FUN_00415f90(param_3,local_50);
                      cVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_1a);
                    } while (cVar2 != '\0');
                    if (local_1a[0] == 0x3a) {
                      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                      cVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_1a);
                      if (cVar2 == '\0') {
                        *param_2 = 0x2f;
                        *(undefined1 *)(param_1 + 3) = 0x2f;
                        *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                        FUN_00415f90(param_3,&DAT_0098ca70);
                        goto LAB_0098ca38;
                      }
                      if (local_1a[0] == 0x3a) {
                        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1
                        ;
                      }
                      else {
                        FUN_00415f90(param_3,&DAT_0098ca70);
                        cVar2 = FUN_009007b0(local_1a[0]);
                        if (cVar2 == '\0') {
                          *param_2 = 0x2f;
                          *(undefined1 *)(param_1 + 3) = 0x2f;
                          *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                          FUN_00415e60(&local_58,local_1a[0]);
                          FUN_00415f90(param_3,local_58);
                          goto LAB_0098ca38;
                        }
                        do {
                          cVar2 = FUN_00900780(local_1a[0]);
                          if (cVar2 == '\0') break;
                          *(int *)((longlong)param_1 + 0x1c) =
                               *(int *)((longlong)param_1 + 0x1c) + 1;
                          FUN_00415e60(&local_60,local_1a[0]);
                          FUN_00415f90(param_3,local_60);
                          cVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_1a);
                        } while (cVar2 != '\0');
                      }
                    }
                    *param_2 = 0x2d;
                    *(undefined1 *)(param_1 + 3) = 0x2d;
                    *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                  }
                }
                goto LAB_0098ca38;
              }
              if (uVar4 == 0x21) {
                (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
                if (local_1c == 0x3d) {
                  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                  *param_2 = 0x18;
                  *(undefined1 *)(param_1 + 3) = 0x18;
                  FUN_00414520(param_3);
                  *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                }
                else {
                  *param_2 = 0x2f;
                  *(undefined1 *)(param_1 + 3) = 0x2f;
                  FUN_00414b90(param_3,&DAT_0098ca78);
                  *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                }
                goto LAB_0098ca38;
              }
              if (uVar4 == 0x22) {
                FUN_00414520(param_3);
                cVar2 = (**(code **)(*param_1 + 8))(param_1,local_1a);
                if (cVar2 == '\0') {
                  *param_2 = 0x2f;
                  *(undefined1 *)(param_1 + 3) = 0x2f;
                  *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                }
                else {
                  do {
                    if (local_1a[0] == 0x22) {
                      *param_2 = 0x2b;
                      *(undefined1 *)(param_1 + 3) = 0x2b;
                      *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                      goto LAB_0098ca38;
                    }
                    FUN_00415e60(&local_40,local_1a[0]);
                    FUN_00415f90(param_3,local_40);
                    cVar2 = (**(code **)(*param_1 + 8))(param_1,local_1a);
                  } while (cVar2 != '\0');
                  *param_2 = 0x2f;
                  *(undefined1 *)(param_1 + 3) = 0x2f;
                  *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                }
                goto LAB_0098ca38;
              }
            }
            else {
              if (uVar4 == 0x27) {
                FUN_00414520(param_3);
                cVar2 = (**(code **)(*param_1 + 8))(param_1,local_1a);
                if (cVar2 == '\0') {
                  *param_2 = 0x2f;
                  *(undefined1 *)(param_1 + 3) = 0x2f;
                  *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                }
                else {
                  do {
                    if (local_1a[0] == 0x27) {
                      *param_2 = 0x2b;
                      *(undefined1 *)(param_1 + 3) = 0x2b;
                      *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                      goto LAB_0098ca38;
                    }
                    FUN_00415e60(&local_48,local_1a[0]);
                    FUN_00415f90(param_3,local_48);
                    cVar2 = (**(code **)(*param_1 + 8))(param_1,local_1a);
                  } while (cVar2 != '\0');
                  *param_2 = 0x2f;
                  *(undefined1 *)(param_1 + 3) = 0x2f;
                  *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                }
                goto LAB_0098ca38;
              }
              if (uVar4 == 0x28) {
                *param_2 = 0;
                *(undefined1 *)(param_1 + 3) = 0;
                FUN_00414520(param_3);
                *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                goto LAB_0098ca38;
              }
            }
          }
          else {
            if (uVar4 == 0x2a) {
              if (*(byte *)(param_1 + 3) < 0x40 &&
                  (1L << (*(byte *)(param_1 + 3) & 0x3f) & 0x80001fffc1c5U) != 0) {
                *param_2 = 9;
                *(undefined1 *)(param_1 + 3) = 9;
                FUN_00414b90(param_3,&DAT_0098ca94);
              }
              else {
                *param_2 = 0x12;
                *(undefined1 *)(param_1 + 3) = 0x12;
                FUN_00414520(param_3);
              }
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              goto LAB_0098ca38;
            }
            if (uVar4 == 0x2b) {
              *param_2 = 0x15;
              *(undefined1 *)(param_1 + 3) = 0x15;
              FUN_00414520(param_3);
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              goto LAB_0098ca38;
            }
            if (uVar4 == 0x2c) {
              *param_2 = 7;
              *(undefined1 *)(param_1 + 3) = 7;
              FUN_00414520(param_3);
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              goto LAB_0098ca38;
            }
            if (uVar4 == 0x2d) {
              *param_2 = 0x16;
              *(undefined1 *)(param_1 + 3) = 0x16;
              FUN_00414520(param_3);
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              goto LAB_0098ca38;
            }
          }
        }
        else if (uVar4 < 0x3f) {
          if (uVar4 == 0x3e) {
            (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
            if (local_1c == 0x3d) {
              *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
              *param_2 = 0x1c;
              *(undefined1 *)(param_1 + 3) = 0x1c;
            }
            else {
              *param_2 = 0x1b;
              *(undefined1 *)(param_1 + 3) = 0x1b;
            }
            FUN_00414520(param_3);
            *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            goto LAB_0098ca38;
          }
          if (uVar4 < 0x3b) {
            if (uVar4 == 0x3a) {
              (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
              if (local_1c == 0x3a) {
                *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                *param_2 = 8;
                *(undefined1 *)(param_1 + 3) = 8;
                FUN_00414520(param_3);
                *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              }
              else {
                *param_2 = 0x2f;
                *(undefined1 *)(param_1 + 3) = 0x2f;
                FUN_00414b90(param_3,&DAT_0098ca70);
                *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              }
              goto LAB_0098ca38;
            }
            if (uVar4 == 0x2f) {
              (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
              if (local_1c == 0x2f) {
                *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                *(undefined1 *)((longlong)param_1 + 9) = 1;
              }
              *param_2 = 0x13;
              *(undefined1 *)(param_1 + 3) = 0x13;
              FUN_00414520(param_3);
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              goto LAB_0098ca38;
            }
            if (uVar4 - 0x30 < 10) {
              FUN_00415e60(param_3,local_1a[0]);
              bVar6 = false;
              uVar5 = (**(code **)(*param_1 + 0x18))(param_1,local_1a);
              if ((char)uVar5 != '\0') {
                while( true ) {
                  if ((ushort)(local_1a[0] - 0x30) < 0x10) {
                    bVar7 = ((int)CONCAT62((int6)((ulonglong)uVar5 >> 0x10),1) <<
                             ((byte)(local_1a[0] - 0x30) & 0x1f) & 0x3ffU) != 0;
                  }
                  else {
                    bVar7 = false;
                  }
                  if ((!bVar7) && ((local_1a[0] != 0x2e || (bVar6)))) break;
                  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                  FUN_00415e60(&local_38,local_1a[0]);
                  FUN_00415f90(param_3,local_38);
                  if (local_1a[0] == 0x2e) {
                    bVar6 = true;
                  }
                  uVar5 = (**(code **)(*param_1 + 0x18))(param_1,local_1a);
                }
              }
              *param_2 = 0x2c;
              *(undefined1 *)(param_1 + 3) = 0x2c;
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              goto LAB_0098ca38;
            }
          }
          else {
            if (uVar4 == 0x3c) {
              (**(code **)(*param_1 + 0x18))(param_1,&local_1c);
              if (local_1c == 0x3d) {
                *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                *param_2 = 0x1a;
                *(undefined1 *)(param_1 + 3) = 0x1a;
              }
              else {
                *param_2 = 0x19;
                *(undefined1 *)(param_1 + 3) = 0x19;
              }
              FUN_00414520(param_3);
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              goto LAB_0098ca38;
            }
            if (uVar4 == 0x3d) {
              *param_2 = 0x17;
              *(undefined1 *)(param_1 + 3) = 0x17;
              FUN_00414520(param_3);
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
              goto LAB_0098ca38;
            }
          }
        }
        else {
          if (uVar4 == 0x40) {
            *param_2 = 6;
            *(undefined1 *)(param_1 + 3) = 6;
            FUN_00414520(param_3);
            *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            goto LAB_0098ca38;
          }
          if (uVar4 == 0x5b) {
            *param_2 = 2;
            *(undefined1 *)(param_1 + 3) = 2;
            FUN_00414520(param_3);
            *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            goto LAB_0098ca38;
          }
          if (uVar4 == 0x5d) {
            *param_2 = 3;
            *(undefined1 *)(param_1 + 3) = 3;
            FUN_00414520(param_3);
            *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            goto LAB_0098ca38;
          }
          if (uVar4 == 0x7c) {
            *param_2 = 0x14;
            *(undefined1 *)(param_1 + 3) = 0x14;
            FUN_00414520(param_3);
            *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            goto LAB_0098ca38;
          }
        }
        cVar2 = FUN_009007b0(local_1a[0]);
        if (cVar2 == '\0') {
          *param_2 = 0x2f;
          *(undefined1 *)(param_1 + 3) = 0x2f;
          *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
          FUN_00415e60(param_3,local_1a[0]);
        }
        else {
          FUN_00414520(param_3);
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
          do {
            cVar2 = FUN_00900780(local_1a[0]);
            if (cVar2 == '\0') break;
            *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
            FUN_00415e60(&local_68,local_1a[0]);
            FUN_00415f90(param_3,local_68);
            cVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_1a);
          } while (cVar2 != '\0');
          if (*(byte *)(param_1 + 3) < 0x40 &&
              (1L << (*(byte *)(param_1 + 3) & 0x3f) & 0x80001fffc1c5U) != 0) {
            cVar2 = (**(code **)*param_1)(param_1);
            if (cVar2 == '\0') {
              if (local_1a[0] == 0x3a) {
                *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                cVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_1a);
                if (cVar2 == '\0') {
                  *param_2 = 0x2f;
                  *(undefined1 *)(param_1 + 3) = 0x2f;
                  *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                  FUN_00415f90(param_3,&DAT_0098ca70);
                  goto LAB_0098ca38;
                }
                if (local_1a[0] == 0x3a) {
                  *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + -1;
                }
                else {
                  FUN_00415f90(param_3,&DAT_0098ca70);
                  cVar2 = FUN_009007b0(local_1a[0]);
                  if (cVar2 == '\0') {
                    if (local_1a[0] == 0x2a) {
                      *param_2 = 9;
                      *(undefined1 *)(param_1 + 3) = 9;
                    }
                    else {
                      *param_2 = 0x2f;
                      *(undefined1 *)(param_1 + 3) = 0x2f;
                    }
                    *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                    *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
                    FUN_00415e60(&local_70,local_1a[0]);
                    FUN_00415f90(param_3,local_70);
                    goto LAB_0098ca38;
                  }
                  do {
                    cVar2 = FUN_00900780(local_1a[0]);
                    if (cVar2 == '\0') break;
                    *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
                    FUN_00415e60(&local_78,local_1a[0]);
                    FUN_00415f90(param_3,local_78);
                    cVar2 = (**(code **)(*param_1 + 0x18))(param_1,local_1a);
                  } while (cVar2 != '\0');
                }
              }
              cVar2 = (**(code **)(*param_1 + 0x10))(param_1);
              if (cVar2 == '\0') {
                *param_2 = 9;
                *(undefined1 *)(param_1 + 3) = 9;
              }
              else {
                iVar3 = FUN_00416420(*param_3,L"comment");
                if (iVar3 == 0) {
                  *param_2 = 10;
                  *(undefined1 *)(param_1 + 3) = 10;
                  FUN_00414520(param_3);
                }
                else {
                  iVar3 = FUN_00416420(*param_3,L"text");
                  if (iVar3 == 0) {
                    *param_2 = 0xb;
                    *(undefined1 *)(param_1 + 3) = 0xb;
                    FUN_00414520(param_3);
                  }
                  else {
                    iVar3 = FUN_00416420(*param_3,L"processing-instruction");
                    if (iVar3 == 0) {
                      *param_2 = 0xc;
                      *(undefined1 *)(param_1 + 3) = 0xc;
                      FUN_00414520(param_3);
                    }
                    else {
                      iVar3 = FUN_00416420(*param_3,L"node");
                      if (iVar3 == 0) {
                        *param_2 = 0xd;
                        *(undefined1 *)(param_1 + 3) = 0xd;
                        FUN_00414520(param_3);
                      }
                      else {
                        *param_2 = 0x1d;
                        *(undefined1 *)(param_1 + 3) = 0x1d;
                      }
                    }
                  }
                }
              }
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            }
            else {
              iVar3 = FUN_00416420(*param_3,L"ancestor");
              if (iVar3 == 0) {
                *param_2 = 0x1e;
                *(undefined1 *)(param_1 + 3) = 0x1e;
                FUN_00414520(param_3);
              }
              else {
                iVar3 = FUN_00416420(*param_3,L"ancestor-or-self");
                if (iVar3 == 0) {
                  *param_2 = 0x1f;
                  *(undefined1 *)(param_1 + 3) = 0x1f;
                  FUN_00414520(param_3);
                }
                else {
                  iVar3 = FUN_00416420(*param_3,L"attribute");
                  if (iVar3 == 0) {
                    *param_2 = 0x20;
                    *(undefined1 *)(param_1 + 3) = 0x20;
                    FUN_00414520(param_3);
                  }
                  else {
                    iVar3 = FUN_00416420(*param_3,L"child");
                    if (iVar3 == 0) {
                      *param_2 = 0x21;
                      *(undefined1 *)(param_1 + 3) = 0x21;
                      FUN_00414520(param_3);
                    }
                    else {
                      iVar3 = FUN_00416420(*param_3,L"descendant");
                      if (iVar3 == 0) {
                        *param_2 = 0x22;
                        *(undefined1 *)(param_1 + 3) = 0x22;
                        FUN_00414520(param_3);
                      }
                      else {
                        iVar3 = FUN_00416420(*param_3,L"descendant-or-self");
                        if (iVar3 == 0) {
                          *param_2 = 0x23;
                          *(undefined1 *)(param_1 + 3) = 0x23;
                          FUN_00414520(param_3);
                        }
                        else {
                          iVar3 = FUN_00416420(*param_3,L"following");
                          if (iVar3 == 0) {
                            *param_2 = 0x24;
                            *(undefined1 *)(param_1 + 3) = 0x24;
                            FUN_00414520(param_3);
                          }
                          else {
                            iVar3 = FUN_00416420(*param_3,L"following-sibling");
                            if (iVar3 == 0) {
                              *param_2 = 0x25;
                              *(undefined1 *)(param_1 + 3) = 0x25;
                              FUN_00414520(param_3);
                            }
                            else {
                              iVar3 = FUN_00416420(*param_3,L"namespace");
                              if (iVar3 == 0) {
                                *param_2 = 0x26;
                                *(undefined1 *)(param_1 + 3) = 0x26;
                                FUN_00414520(param_3);
                              }
                              else {
                                iVar3 = FUN_00416420(*param_3,L"parent");
                                if (iVar3 == 0) {
                                  *param_2 = 0x27;
                                  *(undefined1 *)(param_1 + 3) = 0x27;
                                  FUN_00414520(param_3);
                                }
                                else {
                                  iVar3 = FUN_00416420(*param_3,L"preceding");
                                  if (iVar3 == 0) {
                                    *param_2 = 0x28;
                                    *(undefined1 *)(param_1 + 3) = 0x28;
                                  }
                                  else {
                                    iVar3 = FUN_00416420(*param_3,L"preceding-sibling");
                                    if (iVar3 == 0) {
                                      *param_2 = 0x29;
                                      *(undefined1 *)(param_1 + 3) = 0x29;
                                      FUN_00414520(param_3);
                                    }
                                    else {
                                      iVar3 = FUN_00416420(*param_3,L"self");
                                      if (iVar3 == 0) {
                                        *param_2 = 0x2a;
                                        *(undefined1 *)(param_1 + 3) = 0x2a;
                                        FUN_00414520(param_3);
                                      }
                                      else {
                                        *param_2 = 0x2f;
                                        *(undefined1 *)(param_1 + 3) = 0x2f;
                                        FUN_00414520(param_3);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
            }
          }
          else {
            iVar3 = FUN_00416420(*param_3,&DAT_0098ca9c);
            if (iVar3 == 0) {
              *param_2 = 0xe;
              *(undefined1 *)(param_1 + 3) = 0xe;
              FUN_00414520(param_3);
            }
            else {
              iVar3 = FUN_00416420(*param_3,&PTR_s_B_0098caa8);
              if (iVar3 == 0) {
                *param_2 = 0xf;
                *(undefined1 *)(param_1 + 3) = 0xf;
                FUN_00414520(param_3);
              }
              else {
                iVar3 = FUN_00416420(*param_3,&DAT_0098cab4);
                if (iVar3 == 0) {
                  *param_2 = 0x10;
                  *(undefined1 *)(param_1 + 3) = 0x10;
                  FUN_00414520(param_3);
                }
                else {
                  iVar3 = FUN_00416420(*param_3,&DAT_0098cac0);
                  if (iVar3 == 0) {
                    *param_2 = 0x11;
                    *(undefined1 *)(param_1 + 3) = 0x11;
                    FUN_00414520(param_3);
                  }
                  else {
                    *param_2 = 0x2f;
                    *(undefined1 *)(param_1 + 3) = 0x2f;
                  }
                }
              }
            }
            *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
          }
        }
      }
      else if (bVar1 == 1) {
        *param_2 = 0x23;
        *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
        FUN_00414520(param_3);
        *(undefined1 *)((longlong)param_1 + 9) = 2;
      }
      else if (bVar1 == 2) {
        *param_2 = 8;
        *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
        FUN_00414520(param_3);
        *(undefined1 *)((longlong)param_1 + 9) = 3;
      }
    }
    else if (bVar1 == 4) {
      *param_2 = 0;
      *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
      FUN_00414520(param_3);
      *(undefined1 *)((longlong)param_1 + 9) = 5;
    }
    else if (bVar1 == 5) {
      *param_2 = 1;
      *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
      FUN_00414520(param_3);
      *(undefined1 *)((longlong)param_1 + 9) = 6;
    }
    else if (bVar1 == 6) {
      *param_2 = 0x13;
      *(undefined1 *)(param_1 + 3) = 0x13;
      *param_4 = *(undefined4 *)((longlong)param_1 + 0x1c);
      FUN_00414520(param_3);
      *(undefined1 *)((longlong)param_1 + 9) = 0;
    }
  }
  else {
    *param_2 = *(undefined1 *)((longlong)param_1 + 0x24);
    FUN_00414b90(param_3,param_1[5]);
    *param_4 = (int)param_1[4];
    *(undefined1 *)(param_1 + 1) = 0;
  }
LAB_0098ca38:
  FUN_004145c0(&local_78,10);
  return;
}

