/* Ghidra address: 00dfc2c0 */
/* Ghidra symbol: FUN_00dfc2c0 */


void FUN_00dfc2c0(undefined8 param_1,longlong param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50 [2];
  undefined1 local_48;
  undefined8 local_40 [2];
  uint local_30;
  uint local_2c;
  undefined1 local_28 [3];
  byte bStack_25;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  uint local_1c;
  
  local_60 = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_58 = 0;
  *(undefined1 *)(param_2 + 0x92) = 1;
  *(undefined8 *)(param_2 + 0x34) = 0x6c65746e49;
  *(undefined2 *)(param_2 + 0x3c) = 0;
  FUN_00dfc150(param_1,param_2,param_3);
  if (3 < param_3) {
    FUN_00dfc120(param_1,4,0,local_28,local_20,local_20,local_20);
    *(byte *)(param_2 + 0x90) = (bStack_25 >> 2) + 1;
  }
  if (10 < param_3) {
    FUN_00dfc120(param_1,0xb,0,local_20,&local_2c,local_20,local_20);
    FUN_00dfc120(param_1,0xb,1,local_20,&local_30,local_20,local_20);
    local_2c = local_2c & 0xffff;
    local_30 = local_30 & 0xffff;
    if ((local_2c != 0) && (local_30 != 0)) {
      *(char *)(param_2 + 0x90) = (char)(local_30 / local_2c);
    }
  }
  FUN_00dfc120(param_1,0x80000000,0,&local_1c,local_20,local_20,local_20);
  if (0x80000000 < local_1c) {
    *(undefined1 *)(param_2 + 10) = 1;
    FUN_00dfc120(param_1,0x80000001,0,local_20,local_20,param_2 + 0xb4,param_2 + 0xb0);
  }
  if (0x80000001 < local_1c) {
    FUN_00dfc120(param_1,0x80000002,0,param_2 + 0x3e,param_2 + 0x42,param_2 + 0x46,param_2 + 0x4a);
  }
  if (0x80000002 < local_1c) {
    FUN_00dfc120(param_1,0x80000003,0,param_2 + 0x4e,param_2 + 0x52,param_2 + 0x56,param_2 + 0x5a);
  }
  if (0x80000003 < local_1c) {
    FUN_00dfc120(param_1,0x80000004,0,param_2 + 0x5e,param_2 + 0x62,param_2 + 0x66,param_2 + 0x6a);
  }
  if (0x80000005 < local_1c) {
    FUN_00dfc120(param_1,0x80000006,0,local_20,local_20,param_2 + 0x94,local_20);
  }
  if (0x80000007 < local_1c) {
    local_24._0_2_ = local_24._1_2_;
    FUN_00dfc120(param_1,0x80000008,0,local_24,local_20,local_20,local_20);
    *(undefined1 *)(param_2 + 0xb8) = local_24[0];
    *(char *)(param_2 + 0xb9) = SUB21(local_24._0_2_,1);
  }
  if (*(char *)(param_2 + 9) != '\0') {
    if (*(uint *)(param_2 + 0x94) != 0) {
      *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x94) >> 0x10;
      *(undefined1 *)(param_2 + 0x84) = *(undefined1 *)(param_2 + 0x94);
      *(byte *)(param_2 + 0x85) = (byte)(*(uint *)(param_2 + 0x94) >> 0xc) & 0xf;
    }
    iVar9 = 0x10;
    pcVar4 = (char *)(param_2 + 0x98);
    do {
      if (*pcVar4 != '\0') {
        iVar10 = 0x41;
        pcVar6 = &DAT_01ed9b80;
        do {
          if (*pcVar6 == *pcVar4) {
            cVar1 = pcVar6[1];
            if (cVar1 == '\x02') {
              *(int *)(param_2 + 0x78) = *(int *)(param_2 + 0x78) + *(int *)(pcVar6 + 4);
              *(char *)(param_2 + 0x7c) = pcVar6[9];
              *(char *)(param_2 + 0x7d) = pcVar6[8];
            }
            else if (cVar1 == '\x03') {
              *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + *(int *)(pcVar6 + 4);
              *(char *)(param_2 + 0x74) = pcVar6[9];
              *(char *)(param_2 + 0x75) = pcVar6[8];
            }
            else if (cVar1 == '\x04') {
              if (*(int *)(param_2 + 0x94) == 0) {
                *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + *(int *)(pcVar6 + 4);
                *(char *)(param_2 + 0x84) = pcVar6[9];
                *(char *)(param_2 + 0x85) = pcVar6[8];
              }
            }
            else if (cVar1 == '\x05') {
              *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + *(int *)(pcVar6 + 4);
              *(char *)(param_2 + 0x8c) = pcVar6[9];
              *(char *)(param_2 + 0x8d) = pcVar6[8];
              *(char *)(param_2 + 0x8e) = pcVar6[10];
            }
          }
          pcVar6 = pcVar6 + 0x18;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      pcVar4 = pcVar4 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if (*(char *)(param_2 + 10) != '\0') goto LAB_00dfce27;
  bVar2 = *(byte *)(param_2 + 0xc);
  if (bVar2 != 4) {
    if (bVar2 == 5) {
      pcVar4 = "Pentium";
      puVar7 = (undefined8 *)(param_2 + 0x3e);
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar7 = puVar7 + 1;
      }
    }
    else if (bVar2 == 6) {
      bVar2 = *(byte *)(param_2 + 0xe);
      if (bVar2 < 8) {
        if (bVar2 == 7) {
          if (*(int *)(param_2 + 0x80) == 0x400) {
            pcVar4 = "Pentium III Xeon";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          else if (*(int *)(param_2 + 0x80) == 0x800) {
            pcVar4 = "Pentium III Xeon";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            puVar7 = &DAT_00dfd236;
            puVar8 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          goto LAB_00dfce27;
        }
        if (bVar2 == 1) {
          pcVar4 = "Pentium Pro";
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *(undefined8 *)pcVar4;
            pcVar4 = pcVar4 + 8;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfce27;
        }
        if (bVar2 == 3) {
          pcVar4 = "Pentium II";
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *(undefined8 *)pcVar4;
            pcVar4 = pcVar4 + 8;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfce27;
        }
        if (bVar2 == 5) {
          iVar9 = *(int *)(param_2 + 0x80);
          if (iVar9 == 0) {
            pcVar4 = "Celeron";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          else if (iVar9 == 0x400) {
            pcVar4 = "Pentium II Xeon";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          else if (iVar9 == 0x800) {
            pcVar4 = "Pentium II Xeon";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            pcVar4 = "Pentium II";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          goto LAB_00dfce27;
        }
        if (bVar2 == 6) {
          if (*(int *)(param_2 + 0x80) == 0) {
            pcVar4 = "Celeron";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          else if (*(int *)(param_2 + 0x80) == 0x80) {
            pcVar4 = "Celeron";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            pcVar4 = "Pentium II";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          goto LAB_00dfce27;
        }
      }
      else {
        if (bVar2 == 8) {
          cVar1 = *(char *)(param_2 + 0xa8);
          if (cVar1 == '\x01') {
            pcVar4 = "Celeron";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          else if (cVar1 == '\x02') {
            puVar7 = &DAT_00dfd236;
            puVar8 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          else if (cVar1 == '\x03') {
            pcVar4 = "Pentium III Xeon";
            puVar7 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar7 = *(undefined8 *)pcVar4;
              pcVar4 = pcVar4 + 8;
              puVar7 = puVar7 + 1;
            }
          }
          else if (cVar1 == '\x04') {
            puVar7 = &DAT_00dfd236;
            puVar8 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          else {
            puVar7 = &DAT_00dfd236;
            puVar8 = (undefined8 *)(param_2 + 0x3e);
            for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
          }
          goto LAB_00dfce27;
        }
        if (bVar2 == 10) {
          pcVar4 = "Pentium III Xeon";
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar7 = *(undefined8 *)pcVar4;
            pcVar4 = pcVar4 + 8;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfce27;
        }
        if (bVar2 == 0xb) {
          puVar7 = &DAT_00dfd236;
          puVar8 = (undefined8 *)(param_2 + 0x3e);
          for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          goto LAB_00dfce27;
        }
      }
      local_50[0] = (uint)bVar2;
      local_48 = 0;
      FUN_00442f70(local_40,L"P6 (Model %d)",local_50,0);
      FUN_00415dd0(&local_58,local_40[0],0);
      FUN_004425e0(param_2 + 0x3e,local_58);
    }
    else if (bVar2 == 0xf) {
      cVar1 = *(char *)(param_2 + 0xa8);
      if (cVar1 == '\x01') {
        pcVar4 = "Celeron";
        puVar7 = (undefined8 *)(param_2 + 0x3e);
        for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *(undefined8 *)pcVar4;
          pcVar4 = pcVar4 + 8;
          puVar7 = puVar7 + 1;
        }
      }
      else if (cVar1 == '\b') {
        pcVar4 = "Pentium 4";
        puVar7 = (undefined8 *)(param_2 + 0x3e);
        for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *(undefined8 *)pcVar4;
          pcVar4 = pcVar4 + 8;
          puVar7 = puVar7 + 1;
        }
      }
      else if (cVar1 == '\x0e') {
        puVar7 = &DAT_00dfd2c0;
        puVar8 = (undefined8 *)(param_2 + 0x3e);
        for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        pcVar4 = "Pentium 4";
        puVar7 = (undefined8 *)(param_2 + 0x3e);
        for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *(undefined8 *)pcVar4;
          pcVar4 = pcVar4 + 8;
          puVar7 = puVar7 + 1;
        }
      }
    }
    else {
      local_50[0] = (uint)bVar2;
      local_48 = 0;
      FUN_00442f70(&local_60,&DAT_00dfd2fc,local_50,0);
      FUN_00415dd0(&local_68,local_60,0);
      FUN_004425e0(param_2 + 0x3e,local_68);
    }
    goto LAB_00dfce27;
  }
  bVar2 = *(byte *)(param_2 + 0xe);
  if (bVar2 < 5) {
    if (bVar2 == 4) {
      pcVar4 = "Intel 486 Processor";
      puVar7 = (undefined8 *)(param_2 + 0x3e);
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00dfce27;
    }
    if (bVar2 == 1) {
      pcVar4 = "Intel 486DX Processor";
      puVar7 = (undefined8 *)(param_2 + 0x3e);
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00dfce27;
    }
    if (bVar2 == 2) {
      pcVar4 = "Intel 486SX Processor";
      puVar7 = (undefined8 *)(param_2 + 0x3e);
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00dfce27;
    }
    if (bVar2 == 3) {
      pcVar4 = "Intel DX2 Processor";
      puVar7 = (undefined8 *)(param_2 + 0x3e);
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00dfce27;
    }
  }
  else {
    if (bVar2 == 5) {
      pcVar4 = "Intel SX2 Processor";
      puVar7 = (undefined8 *)(param_2 + 0x3e);
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00dfce27;
    }
    if (bVar2 == 7) {
      pcVar4 = "Write-Back Enhanced Intel DX2 Processor";
      puVar7 = (undefined8 *)(param_2 + 0x3e);
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00dfce27;
    }
    if (bVar2 == 8) {
      pcVar4 = "Intel DX4 Processor";
      puVar7 = (undefined8 *)(param_2 + 0x3e);
      for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *(undefined8 *)pcVar4;
        pcVar4 = pcVar4 + 8;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00dfce27;
    }
  }
  pcVar4 = "Intel 486 Processor";
  puVar7 = (undefined8 *)(param_2 + 0x3e);
  for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *(undefined8 *)pcVar4;
    pcVar4 = pcVar4 + 8;
    puVar7 = puVar7 + 1;
  }
LAB_00dfce27:
  *(bool *)(param_2 + 1) = (*(uint *)(param_2 + 0x14) & 0x800000) != 0;
  *(undefined1 *)(param_2 + 5) = 0;
  if ((*(uint *)(param_2 + 0x14) & 0x2000000) != 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 1;
  }
  if ((*(uint *)(param_2 + 0x14) & 0x4000000) != 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  }
  if ((*(uint *)(param_2 + 0xac) & 1) != 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 4;
  }
  if ((*(uint *)(param_2 + 0xac) & 0x200) != 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 8;
  }
  if ((*(uint *)(param_2 + 0xac) & 0x80000) != 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x10;
  }
  if ((*(uint *)(param_2 + 0xac) & 0x100000) != 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x20;
  }
  if ((*(char *)(param_2 + 10) == '\0') || ((*(uint *)(param_2 + 0xb0) & 0x20000000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 7) = uVar3;
  if ((*(char *)(param_2 + 10) == '\0') || ((*(uint *)(param_2 + 0xb0) & 0x100000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 8) = uVar3;
  FUN_004144d0(&local_68);
  FUN_00414480(&local_60);
  FUN_004144d0(&local_58);
  FUN_00414480(local_40);
  return;
}

