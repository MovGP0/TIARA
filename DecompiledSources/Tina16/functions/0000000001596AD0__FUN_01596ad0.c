/* Ghidra address: 01596ad0 */
/* Ghidra symbol: FUN_01596ad0 */


uint FUN_01596ad0(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined4 uVar5;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_54;
  char local_50;
  int local_4c;
  char local_48;
  int local_3c;
  char local_38;
  int local_34;
  undefined1 local_30;
  int local_2c;
  char local_28;
  uint local_24;
  undefined1 local_1c;
  
  if ((((param_1 == (longlong *)0x0) || (param_1[5] == 0)) || (5 < param_2)) || (param_2 < 0)) {
    local_24 = 0xfffffffe;
  }
  else {
    puVar3 = (undefined8 *)param_1[5];
    if (((param_1[2] == 0) || ((*param_1 == 0 && ((int)param_1[1] != 0)))) ||
       ((*(int *)(puVar3 + 1) == 0x29a && (param_2 != 4)))) {
      param_1[4] = (longlong)PTR_s_stream_error_01f68268;
      local_24 = 0xfffffffe;
    }
    else if ((int)param_1[3] == 0) {
      param_1[4] = (longlong)PTR_s_buffer_error_01f68280;
      local_24 = 0xfffffffb;
    }
    else {
      *puVar3 = param_1;
      iVar2 = *(int *)((longlong)puVar3 + 0x35);
      *(int *)((longlong)puVar3 + 0x35) = param_2;
      if (*(int *)(puVar3 + 1) == 0x2a) {
        if (*(int *)((longlong)puVar3 + 0x24) == 2) {
          uVar5 = FUN_015a60c0(0,0,0);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
          *(undefined1 *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4))
               = 0x1f;
          *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
          *(undefined1 *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4))
               = 0x8b;
          *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
          *(undefined1 *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4))
               = 8;
          *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
          if (puVar3[5] == 0) {
            *(undefined1 *)
             (*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) = 0;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(undefined1 *)
             (*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) = 0;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(undefined1 *)
             (*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) = 0;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(undefined1 *)
             (*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) = 0;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(undefined1 *)
             (*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) = 0;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            if (*(int *)((longlong)puVar3 + 0x9d) == 9) {
              local_1c = 2;
            }
            else if ((*(int *)((longlong)puVar3 + 0xa1) < 2) &&
                    (1 < *(int *)((longlong)puVar3 + 0x9d))) {
              local_1c = 0;
            }
            else {
              local_1c = 4;
            }
            *(undefined1 *)
             (*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) = local_1c;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(undefined1 *)
             (*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) = 0xb;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(undefined4 *)(puVar3 + 1) = 0x71;
          }
          else {
            if (*(int *)(puVar3[5] + 0x38) == 0) {
              local_48 = '\0';
            }
            else {
              local_48 = '\x02';
            }
            if (*(longlong *)(puVar3[5] + 0x10) == 0) {
              local_50 = '\0';
            }
            else {
              local_50 = '\x04';
            }
            if (*(longlong *)(puVar3[5] + 0x20) == 0) {
              local_28 = '\0';
            }
            else {
              local_28 = '\b';
            }
            if (*(longlong *)(puVar3[5] + 0x2c) == 0) {
              local_38 = '\0';
            }
            else {
              local_38 = '\x10';
            }
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 (*(int *)puVar3[5] != 0) + local_48 + local_50 + local_28 + local_38;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 (char)*(undefined4 *)(puVar3[5] + 4);
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 (char)((uint)*(undefined4 *)(puVar3[5] + 4) >> 8);
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 (char)((uint)*(undefined4 *)(puVar3[5] + 4) >> 0x10);
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 (char)((uint)*(undefined4 *)(puVar3[5] + 4) >> 0x18);
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            if (*(int *)((longlong)puVar3 + 0x9d) == 9) {
              local_30 = 2;
            }
            else if ((*(int *)((longlong)puVar3 + 0xa1) < 2) &&
                    (1 < *(int *)((longlong)puVar3 + 0x9d))) {
              local_30 = 0;
            }
            else {
              local_30 = 4;
            }
            *(undefined1 *)
             (*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) = local_30;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 (char)*(undefined4 *)(puVar3[5] + 0xc);
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            if (*(longlong *)(puVar3[5] + 0x10) != 0) {
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)*(undefined4 *)(puVar3[5] + 0x18);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)((uint)*(undefined4 *)(puVar3[5] + 0x18) >> 8);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            }
            if (*(int *)(puVar3[5] + 0x38) != 0) {
              uVar5 = FUN_015a60c0(*(undefined4 *)((longlong)param_1 + 0x4c),
                                   *(undefined8 *)((longlong)puVar3 + 0xc),
                                   *(undefined4 *)(puVar3 + 4));
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
            }
            *(undefined4 *)(puVar3 + 6) = 0;
            *(undefined4 *)(puVar3 + 1) = 0x45;
          }
        }
        else {
          if ((*(int *)((longlong)puVar3 + 0xa1) < 2) && (1 < *(int *)((longlong)puVar3 + 0x9d))) {
            if (*(int *)((longlong)puVar3 + 0x9d) < 6) {
              local_54 = 1;
            }
            else if (*(int *)((longlong)puVar3 + 0x9d) == 6) {
              local_54 = 2;
            }
            else {
              local_54 = 3;
            }
          }
          else {
            local_54 = 0;
          }
          local_70 = ((*(int *)((longlong)puVar3 + 0x3d) + -8) * 0x10 + 8) * 0x100 | local_54 << 6;
          if (*(int *)((longlong)puVar3 + 0x85) != 0) {
            local_70 = local_70 | 0x20;
          }
          *(undefined4 *)(puVar3 + 1) = 0x71;
          FUN_0159c0a0(puVar3,local_70 + (0x1f - local_70 % 0x1f));
          if (*(int *)((longlong)puVar3 + 0x85) != 0) {
            FUN_0159c0a0(puVar3,*(uint *)((longlong)param_1 + 0x4c) >> 0x10);
            FUN_0159c0a0(puVar3,*(uint *)((longlong)param_1 + 0x4c) & 0xffff);
          }
          uVar5 = FUN_015a5730(0,0,0);
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
        }
      }
      if (*(int *)(puVar3 + 1) == 0x45) {
        if (*(longlong *)(puVar3[5] + 0x10) == 0) {
          *(undefined4 *)(puVar3 + 1) = 0x49;
        }
        else {
          local_64 = *(uint *)(puVar3 + 4);
          while (*(uint *)(puVar3 + 6) < (*(uint *)(puVar3[5] + 0x18) & 0xffff)) {
            if (*(int *)(puVar3 + 4) == *(int *)((longlong)puVar3 + 0x14)) {
              if ((*(int *)(puVar3[5] + 0x38) != 0) && (local_64 < *(uint *)(puVar3 + 4))) {
                uVar5 = FUN_015a60c0(*(undefined4 *)((longlong)param_1 + 0x4c),
                                     (ulonglong)local_64 + *(longlong *)((longlong)puVar3 + 0xc),
                                     *(int *)(puVar3 + 4) - local_64);
                *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
              }
              FUN_0159c110(param_1);
              local_64 = *(uint *)(puVar3 + 4);
              if (*(int *)(puVar3 + 4) == *(int *)((longlong)puVar3 + 0x14)) break;
            }
            *(undefined1 *)
             (*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 *(undefined1 *)(*(longlong *)(puVar3[5] + 0x10) + (ulonglong)*(uint *)(puVar3 + 6))
            ;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(int *)(puVar3 + 6) = *(int *)(puVar3 + 6) + 1;
          }
          if ((*(int *)(puVar3[5] + 0x38) != 0) && (local_64 < *(uint *)(puVar3 + 4))) {
            uVar5 = FUN_015a60c0(*(undefined4 *)((longlong)param_1 + 0x4c),
                                 (ulonglong)local_64 + *(longlong *)((longlong)puVar3 + 0xc),
                                 *(int *)(puVar3 + 4) - local_64);
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
          }
          if (*(int *)(puVar3 + 6) == *(int *)(puVar3[5] + 0x18)) {
            *(undefined4 *)(puVar3 + 6) = 0;
            *(undefined4 *)(puVar3 + 1) = 0x49;
          }
        }
      }
      if (*(int *)(puVar3 + 1) == 0x49) {
        if (*(longlong *)(puVar3[5] + 0x20) == 0) {
          *(undefined4 *)(puVar3 + 1) = 0x5b;
        }
        else {
          local_6c = *(uint *)(puVar3 + 4);
          do {
            if (*(int *)(puVar3 + 4) == *(int *)((longlong)puVar3 + 0x14)) {
              if ((*(int *)(puVar3[5] + 0x38) != 0) && (local_6c < *(uint *)(puVar3 + 4))) {
                uVar5 = FUN_015a60c0(*(undefined4 *)((longlong)param_1 + 0x4c),
                                     (ulonglong)local_6c + *(longlong *)((longlong)puVar3 + 0xc),
                                     *(int *)(puVar3 + 4) - local_6c);
                *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
              }
              FUN_0159c110(param_1);
              local_6c = *(uint *)(puVar3 + 4);
              if (*(int *)(puVar3 + 4) == *(int *)((longlong)puVar3 + 0x14)) {
                bVar4 = true;
                break;
              }
            }
            cVar1 = *(char *)(*(longlong *)(puVar3[5] + 0x20) + (ulonglong)*(uint *)(puVar3 + 6));
            *(int *)(puVar3 + 6) = *(int *)(puVar3 + 6) + 1;
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 cVar1;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            bVar4 = false;
          } while (cVar1 != '\0');
          if ((*(int *)(puVar3[5] + 0x38) != 0) && (local_6c < *(uint *)(puVar3 + 4))) {
            uVar5 = FUN_015a60c0(*(undefined4 *)((longlong)param_1 + 0x4c),
                                 (ulonglong)local_6c + *(longlong *)((longlong)puVar3 + 0xc),
                                 *(int *)(puVar3 + 4) - local_6c);
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
          }
          if (!bVar4) {
            *(undefined4 *)(puVar3 + 6) = 0;
            *(undefined4 *)(puVar3 + 1) = 0x5b;
          }
        }
      }
      if (*(int *)(puVar3 + 1) == 0x5b) {
        if (*(longlong *)(puVar3[5] + 0x2c) == 0) {
          *(undefined4 *)(puVar3 + 1) = 0x67;
        }
        else {
          local_68 = *(uint *)(puVar3 + 4);
          do {
            if (*(int *)(puVar3 + 4) == *(int *)((longlong)puVar3 + 0x14)) {
              if ((*(int *)(puVar3[5] + 0x38) != 0) && (local_68 < *(uint *)(puVar3 + 4))) {
                uVar5 = FUN_015a60c0(*(undefined4 *)((longlong)param_1 + 0x4c),
                                     (ulonglong)local_68 + *(longlong *)((longlong)puVar3 + 0xc),
                                     *(int *)(puVar3 + 4) - local_68);
                *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
              }
              FUN_0159c110(param_1);
              local_68 = *(uint *)(puVar3 + 4);
              if (*(int *)(puVar3 + 4) == *(int *)((longlong)puVar3 + 0x14)) {
                bVar4 = true;
                break;
              }
            }
            cVar1 = *(char *)(*(longlong *)(puVar3[5] + 0x2c) + (ulonglong)*(uint *)(puVar3 + 6));
            *(int *)(puVar3 + 6) = *(int *)(puVar3 + 6) + 1;
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 cVar1;
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            bVar4 = false;
          } while (cVar1 != '\0');
          if ((*(int *)(puVar3[5] + 0x38) != 0) && (local_68 < *(uint *)(puVar3 + 4))) {
            uVar5 = FUN_015a60c0(*(undefined4 *)((longlong)param_1 + 0x4c),
                                 (ulonglong)local_68 + *(longlong *)((longlong)puVar3 + 0xc),
                                 *(int *)(puVar3 + 4) - local_68);
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
          }
          if (!bVar4) {
            *(undefined4 *)(puVar3 + 1) = 0x67;
          }
        }
      }
      if (*(int *)(puVar3 + 1) == 0x67) {
        if (*(int *)(puVar3[5] + 0x38) == 0) {
          *(undefined4 *)(puVar3 + 1) = 0x71;
        }
        else {
          if (*(uint *)((longlong)puVar3 + 0x14) < *(int *)(puVar3 + 4) + 2U) {
            FUN_0159c110(param_1);
          }
          if (*(int *)(puVar3 + 4) + 2U <= *(uint *)((longlong)puVar3 + 0x14)) {
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 (char)*(undefined4 *)((longlong)param_1 + 0x4c);
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                 (char)((uint)*(undefined4 *)((longlong)param_1 + 0x4c) >> 8);
            *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            uVar5 = FUN_015a60c0(0,0,0);
            *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
            *(undefined4 *)(puVar3 + 1) = 0x71;
          }
        }
      }
      if (*(int *)(puVar3 + 4) == 0) {
        if ((int)param_1[1] == 0) {
          if (param_2 < 5) {
            local_4c = 0;
          }
          else {
            local_4c = 9;
          }
          if (iVar2 < 5) {
            local_3c = 0;
          }
          else {
            local_3c = 9;
          }
          if ((param_2 * 2 - local_4c <= iVar2 * 2 - local_3c) && (param_2 != 4)) {
            param_1[4] = (longlong)PTR_s_buffer_error_01f68280;
            return 0xfffffffb;
          }
        }
      }
      else {
        FUN_0159c110(param_1);
        if ((int)param_1[3] == 0) {
          *(undefined4 *)((longlong)puVar3 + 0x35) = 0xffffffff;
          return 0;
        }
      }
      if ((*(int *)(puVar3 + 1) == 0x29a) && ((int)param_1[1] != 0)) {
        param_1[4] = (longlong)PTR_s_buffer_error_01f68280;
        local_24 = 0xfffffffb;
      }
      else {
        if ((((int)param_1[1] != 0) || (*(int *)((longlong)puVar3 + 0x8d) != 0)) ||
           ((param_2 != 0 && (*(int *)(puVar3 + 1) != 0x29a)))) {
          if (*(int *)((longlong)puVar3 + 0xa1) == 2) {
            local_2c = FUN_0159bbd0(puVar3);
          }
          else {
            if (*(int *)((longlong)puVar3 + 0xa1) == 3) {
              local_34 = FUN_0159b390(puVar3);
            }
            else {
              local_34 = (*(code *)(&PTR_FUN_01f68368)
                                   [(longlong)*(int *)((longlong)puVar3 + 0x9d) * 2])(puVar3);
            }
            local_2c = local_34;
          }
          if ((local_2c == 2) || (local_2c == 3)) {
            *(undefined4 *)(puVar3 + 1) = 0x29a;
          }
          if ((local_2c == 0) || (local_2c == 2)) {
            if ((int)param_1[3] == 0) {
              *(undefined4 *)((longlong)puVar3 + 0x35) = 0xffffffff;
            }
            return 0;
          }
          if (local_2c == 1) {
            if (param_2 == 1) {
              FUN_015a2070(puVar3);
            }
            else if ((param_2 != 5) && (FUN_015a2380(puVar3,0,0,0), param_2 == 3)) {
              *(undefined2 *)
               (*(longlong *)((longlong)puVar3 + 0x59) +
               (ulonglong)(*(int *)((longlong)puVar3 + 0x65) - 1) * 2) = 0;
              FUN_01596900(*(undefined8 *)((longlong)puVar3 + 0x59),0,
                           (ulonglong)(*(int *)((longlong)puVar3 + 0x65) - 1) << 1);
              if (*(int *)((longlong)puVar3 + 0x8d) == 0) {
                *(undefined4 *)((longlong)puVar3 + 0x85) = 0;
                *(undefined4 *)((longlong)puVar3 + 0x75) = 0;
                *(undefined4 *)((longlong)puVar3 + 0x16ea) = 0;
              }
            }
            FUN_0159c110(param_1);
            if ((int)param_1[3] == 0) {
              *(undefined4 *)((longlong)puVar3 + 0x35) = 0xffffffff;
              return 0;
            }
          }
        }
        if (param_2 == 4) {
          if (*(int *)((longlong)puVar3 + 0x24) < 1) {
            local_24 = 1;
          }
          else {
            if (*(int *)((longlong)puVar3 + 0x24) == 2) {
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)*(undefined4 *)((longlong)param_1 + 0x4c);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)((uint)*(undefined4 *)((longlong)param_1 + 0x4c) >> 8);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)((uint)*(undefined4 *)((longlong)param_1 + 0x4c) >> 0x10);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)((uint)*(undefined4 *)((longlong)param_1 + 0x4c) >> 0x18);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)*(undefined4 *)((longlong)param_1 + 0xc);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)((uint)*(undefined4 *)((longlong)param_1 + 0xc) >> 8);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)((uint)*(undefined4 *)((longlong)param_1 + 0xc) >> 0x10);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
              *(char *)(*(longlong *)((longlong)puVar3 + 0xc) + (ulonglong)*(uint *)(puVar3 + 4)) =
                   (char)((uint)*(undefined4 *)((longlong)param_1 + 0xc) >> 0x18);
              *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + 1;
            }
            else {
              FUN_0159c0a0(puVar3,*(uint *)((longlong)param_1 + 0x4c) >> 0x10);
              FUN_0159c0a0(puVar3,*(uint *)((longlong)param_1 + 0x4c) & 0xffff);
            }
            FUN_0159c110(param_1);
            if (0 < *(int *)((longlong)puVar3 + 0x24)) {
              *(int *)((longlong)puVar3 + 0x24) = -*(int *)((longlong)puVar3 + 0x24);
            }
            local_24 = (uint)(*(int *)(puVar3 + 4) == 0);
          }
        }
        else {
          local_24 = 0;
        }
      }
    }
  }
  return local_24;
}

