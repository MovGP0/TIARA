/* Ghidra address: 00ef71d0 */
/* Ghidra symbol: FUN_00ef71d0 */


void FUN_00ef71d0(undefined8 param_1,char *param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  char *local_98;
  char local_8a;
  char local_89;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  undefined4 local_7c;
  byte *local_38;
  char local_2c;
  char local_2b;
  char local_2a;
  char local_29;
  
  local_98 = param_2;
  if ((*PTR_DAT_020052b8 == '\0') && (*(char *)(param_3 + 0xe32) == '\0')) {
    if ((*(char *)(param_3 + 0xb4) == '\x01') &&
       ((*(int *)(param_3 + 0xe70) == 0 && (*(char *)(param_3 + 0xb1) == '\0')))) {
      FUN_00ef4260(0x13,param_3);
    }
    if (*(char *)(param_3 + 0xb4) == '\x02') {
      if (*(char *)(param_3 + 0xe40) == '\0') {
        FUN_00ef4260(5,param_3);
      }
      if (*(int *)(param_3 + 0xe70) == 0) {
        FUN_00ef4260(0x13,param_3);
      }
    }
    if ((*(char *)(param_3 + 0xb4) == '\x03') && (*(int *)(param_3 + 0xe70) == 0)) {
      FUN_00ef4260(0x13,param_3);
    }
  }
  if (*(char *)(param_3 + 0x92) == '\0') {
    uVar2 = *(undefined4 *)(param_3 + 0x40);
    uVar5 = (undefined7)((ulonglong)param_3 >> 8);
    if (((*PTR_DAT_020052b8 == '\0') && (*(char *)(param_3 + 0xe32) == '\0')) &&
       (*(char *)(param_3 + 0xb1) != '\0')) {
      if (*(byte *)(param_3 + 0xb4) < 8) {
        bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_3 + 0xb4) & 0x1f) & 0xcU) != 0;
      }
      else {
        bVar6 = false;
      }
      if (!bVar6) {
        *(undefined1 *)(param_3 + 100) = 1;
        *(undefined1 *)(param_3 + 0x54) = 0;
      }
    }
    local_8a = '\0';
    local_89 = '\0';
    if ((*PTR_DAT_020052b8 == '\0') && (*(char *)(param_3 + 0xe32) == '\0')) {
      *(undefined1 *)(param_3 + 0xb1) = 0;
    }
    local_29 = *(char *)(param_3 + 0x40) + -1;
    local_2a = '\0';
    local_2b = '\0';
    local_2c = '\0';
    if (*(longlong *)(param_3 + 8) == 0) {
      FUN_00ef4260(8,param_3);
    }
    else {
      FUN_00ef6cf0(auStack_c8,param_3);
      for (local_38 = *(byte **)(param_3 + 8); local_38 != (byte *)0x0;
          local_38 = *(byte **)(local_38 + 0xb0)) {
        bVar1 = *local_38;
        if (bVar1 < 0x1c) {
          if (bVar1 == 0x1b) goto LAB_00ef79b4;
          if (bVar1 < 0x11) {
            if (bVar1 == 0x10) {
LAB_00ef7a5a:
              if ((*(char *)(param_3 + 0x54) != '\x01') ||
                 ((*(short *)(param_3 + 0x90) != **(short **)(local_38 + 0xa8) &&
                  ((*(short *)(param_3 + 0x90) != 9 ||
                   ((((uint)*(byte *)(param_3 + 0x50) != *(uint *)(local_38 + 4) ||
                     ((uint)*(byte *)(param_3 + 0x52) != *(uint *)(local_38 + 8))) &&
                    (((uint)*(byte *)(param_3 + 0x50) != *(uint *)(local_38 + 8) ||
                     ((uint)*(byte *)(param_3 + 0x52) != *(uint *)(local_38 + 4))))))))))) {
                FUN_00ef5070(auStack_c8,local_38 + 4,9,param_3);
              }
            }
            else if (bVar1 < 0xb) {
              if (bVar1 == 10) goto LAB_00ef77c8;
              if (bVar1 == 6) goto LAB_00ef7626;
              if (bVar1 == 7) {
                FUN_00ef5070(auStack_c8,local_38 + 4,9,param_3);
              }
              else {
                if (bVar1 == 8) goto LAB_00ef76e3;
                if (bVar1 == 9) {
                  FUN_00ef5070(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),param_3);
                }
              }
            }
            else if (bVar1 == 0xb) {
LAB_00ef77f9:
              FUN_00ef5350(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),param_3);
            }
            else if (bVar1 == 0xc) {
              puVar3 = *(undefined2 **)(local_38 + 0xa8);
              uVar4 = (ulonglong)local_a8 >> 0x10;
              local_a8 = CONCAT62((int6)uVar4,puVar3[0x40]);
              local_a0 = param_3;
              FUN_00ef5520(auStack_c8,local_38 + 4,*puVar3,puVar3[0x20]);
            }
            else if (bVar1 == 0xe) goto LAB_00ef7a5a;
          }
          else if (bVar1 < 0x17) {
            if (bVar1 == 0x16) {
LAB_00ef7bca:
              FUN_00ef6bb0(auStack_c8,local_38 + 4,param_3);
            }
            else if (bVar1 == 0x11) {
              FUN_00ef69b0(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),param_3);
            }
            else if (bVar1 == 0x12) {
              FUN_00ef6ab0(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),param_3);
            }
            else if (bVar1 == 0x13) {
              FUN_00ef6a30(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8));
            }
            else if (bVar1 == 0x14) {
              FUN_00ef6b30(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),param_3);
            }
          }
          else {
            if (bVar1 == 0x18) goto LAB_00ef7868;
            if (bVar1 == 0x19) goto LAB_00ef78bb;
            if (bVar1 == 0x1a) goto LAB_00ef790e;
          }
        }
        else if (bVar1 < 0x58) {
          if (bVar1 == 0x57) {
LAB_00ef7868:
            if (local_38[0xa5] == 3) {
              local_a8 = param_3;
              FUN_00ef6df0(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),
                           (*(undefined2 **)(local_38 + 0xa8))[0x20]);
            }
          }
          else if (bVar1 < 0x23) {
            if (bVar1 == 0x22) {
LAB_00ef7626:
              if ((*(char *)(param_3 + 100) == '\x01') ||
                 ((((uint)*(byte *)(param_3 + 0x60) != *(uint *)(local_38 + 4) ||
                   ((uint)*(byte *)(param_3 + 0x62) != *(uint *)(local_38 + 8))) &&
                  (((uint)*(byte *)(param_3 + 0x60) != *(uint *)(local_38 + 8) ||
                   ((uint)*(byte *)(param_3 + 0x62) != *(uint *)(local_38 + 4))))))) {
                FUN_00ef5070(auStack_c8,local_38 + 4,9,param_3);
              }
            }
            else {
              if (bVar1 == 0x1c) goto LAB_00ef790e;
              if (bVar1 == 0x1d) goto LAB_00ef79b4;
              if (bVar1 == 0x1e) goto LAB_00ef7961;
              if (bVar1 == 0x1f) goto LAB_00ef7a07;
            }
          }
          else if (bVar1 == 0x25) {
LAB_00ef77c8:
            FUN_00ef51f0(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),param_3);
          }
          else {
            if (bVar1 == 0x26) goto LAB_00ef77f9;
            if (bVar1 == 0x56) goto LAB_00ef7bca;
          }
        }
        else if (bVar1 < 0x5d) {
          if (bVar1 == 0x5c) {
LAB_00ef79b4:
            if (local_38[0xa5] == 8) {
              local_a8 = param_3;
              FUN_00ef70e0(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),
                           (*(undefined2 **)(local_38 + 0xa8))[0x20]);
            }
          }
          else if (bVar1 == 0x58) {
LAB_00ef78bb:
            if (local_38[0xa5] == 3) {
              local_a8 = param_3;
              FUN_00ef6ef0(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),
                           (*(undefined2 **)(local_38 + 0xa8))[0x20]);
            }
          }
          else {
            if (bVar1 != 0x59) {
              if (bVar1 == 0x5a) goto LAB_00ef79b4;
              if (bVar1 != 0x5b) goto LAB_00ef7be0;
            }
LAB_00ef790e:
            if (local_38[0xa5] == 8) {
              local_a8 = param_3;
              FUN_00ef6ff0(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),
                           (*(undefined2 **)(local_38 + 0xa8))[0x20]);
            }
          }
        }
        else if (bVar1 == 0x5d) {
LAB_00ef7961:
          if (local_38[0xa5] == 2) {
            local_a8 = param_3;
            FUN_00ef6ff0(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),
                         (*(undefined2 **)(local_38 + 0xa8))[0x20]);
          }
        }
        else if (bVar1 == 0x5e) {
LAB_00ef7a07:
          if (local_38[0xa5] == 2) {
            local_a8 = param_3;
            FUN_00ef70e0(auStack_c8,local_38 + 4,**(undefined2 **)(local_38 + 0xa8),
                         (*(undefined2 **)(local_38 + 0xa8))[0x20]);
          }
        }
        else if (bVar1 == 0x62) {
LAB_00ef76e3:
          if (((local_8a == '\0') && (*PTR_DAT_020052b8 == '\0')) &&
             (*(char *)(param_3 + 0xe32) == '\0')) {
            *(undefined1 *)(param_3 + 0xb1) = 1;
            *(byte *)(param_3 + 0x60) = local_38[4];
            *(byte *)(param_3 + 0x62) = local_38[8];
            *(undefined1 *)(param_3 + 100) = 1;
            *(byte *)(param_3 + 0x50) = local_38[8];
            *(byte *)(param_3 + 0x52) = local_38[4];
            *(undefined1 *)(param_3 + 0x54) = 0;
          }
        }
LAB_00ef7be0:
      }
      if (local_8a == '\0' && local_89 == '\0') {
        local_88 = (uint)*(byte *)(param_3 + 0x60);
        local_84 = (uint)*(byte *)(param_3 + 0x62);
        local_80 = 0;
        local_7c = 0;
        if (*(byte *)(param_3 + 100) < 8) {
          bVar6 = ((int)CONCAT71(uVar5,1) << (*(byte *)(param_3 + 100) & 0x1f) & 6U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) {
          FUN_00ef4db0(auStack_c8,&local_88,param_3);
        }
        else {
          FUN_00ef4ed0(auStack_c8,&local_88,param_3);
        }
      }
      local_88 = (uint)*(byte *)(param_3 + 0x50);
      local_84 = (uint)*(byte *)(param_3 + 0x52);
      local_80 = 0;
      local_7c = 0;
      if (*(char *)(param_3 + 0x54) == '\x01') {
        FUN_00ef5a20(auStack_c8,&local_88,param_3);
      }
      else {
        FUN_00ef5940(auStack_c8,&local_88,param_3);
      }
      *local_98 = local_29 + local_2a + local_2b + local_2c + '\x01';
      *(undefined4 *)(param_3 + 0x40) = uVar2;
    }
  }
  return;
}

