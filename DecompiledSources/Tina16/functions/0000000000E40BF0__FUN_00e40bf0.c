/* Ghidra address: 00e40bf0 */
/* Ghidra symbol: FUN_00e40bf0 */


longlong FUN_00e40bf0(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  longlong local_res8;
  undefined1 auStack_9b8 [32];
  undefined1 *local_998;
  int *local_990;
  uint local_988;
  uint local_984;
  longlong local_980;
  longlong local_978;
  undefined1 *local_970;
  undefined4 local_954;
  undefined8 local_950;
  longlong local_948;
  longlong local_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 local_928;
  longlong local_920;
  longlong local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 uStack_900;
  longlong local_8f8;
  longlong local_8f0;
  undefined8 local_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  longlong local_8d0;
  longlong local_8c8;
  undefined8 local_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  longlong local_8a8;
  longlong local_8a0;
  longlong local_898;
  uint local_87c;
  undefined8 local_878;
  longlong local_870;
  undefined4 local_854;
  undefined8 local_850;
  longlong local_848;
  longlong local_840;
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  longlong local_820;
  longlong local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  longlong local_7f8;
  longlong local_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  longlong local_7d0;
  longlong local_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  longlong local_7a8;
  longlong local_7a0;
  longlong local_798;
  uint local_77c;
  undefined8 local_778;
  longlong local_770;
  longlong local_768;
  longlong local_760;
  uint local_744;
  undefined8 local_740;
  longlong local_738;
  longlong local_730;
  undefined8 *local_720;
  undefined8 *local_718;
  undefined8 *local_710;
  undefined8 *local_708 [2];
  longlong local_6f8;
  longlong local_6f0;
  uint local_6e4;
  uint local_6e0;
  uint local_6dc;
  undefined8 local_6d8;
  undefined1 local_6d0 [8];
  double local_6c8;
  undefined8 local_6c0 [50];
  undefined8 local_530 [17];
  int local_4a8 [104];
  double local_308;
  undefined8 local_1f8;
  
  local_970 = auStack_9b8;
  local_6f0 = 0;
  local_6f8 = 0;
  local_708[0] = (undefined8 *)0x0;
  local_710 = (undefined8 *)0x0;
  local_718 = (undefined8 *)0x0;
  local_720 = (undefined8 *)0x0;
  puVar6 = local_530;
  for (lVar3 = 0x11; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_6c0;
  for (lVar3 = 0x32; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_6;
    param_6 = param_6 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar7 = local_4a8;
  for (lVar3 = 0x8e; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)piVar7 = *param_7;
    param_7 = param_7 + 1;
    piVar7 = piVar7 + 2;
  }
  local_res8 = param_1;
  puVar1 = auStack_9b8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_970;
  }
  local_970 = puVar1;
  FUN_01676510(local_res8,0,param_3,param_4);
  if (*(char *)(param_4 + 0xed7) == '\x01') {
    *(double *)(local_res8 + 0x58) = local_308 * (double)local_4a8[0];
    *(undefined8 *)(local_res8 + 0x60) = local_1f8;
    FUN_01b0fae0(local_res8,0,2);
    iVar2 = FUN_01b0faf0(local_res8,0);
    local_6e0 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_01b0faa0(local_res8,0,local_6e0);
        local_6e0 = local_6e0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01b0fa30(local_res8,0,0);
  }
  else {
    local_998 = local_6d0;
    local_990 = local_4a8;
    FUN_00e3b2d0(0,0,0,&local_6c8);
    if (*(char *)(param_4 + 0xed7) == '\x02') {
      FUN_00419430(local_708,&DAT_01af6c10);
      FUN_00419260(local_708,&DAT_01af6c10,1,3);
      *local_708[0] = 0;
      local_708[0][1] = local_6c8;
      local_708[0][2] = local_6c8 + 3.0;
      FUN_004194b0(&local_6f0,local_708[0],&DAT_01af6c10);
      FUN_00419430(&local_710,&DAT_01af6c10);
      FUN_00419260(&local_710,&DAT_01af6c10,1,3);
      *local_710 = 0;
      local_710[1] = 0x4008000000000000;
      local_710[2] = 0x403e000000000000;
      FUN_004194b0(&local_6f8,local_710,&DAT_01af6c10);
    }
    else {
      FUN_00419430(&local_718,&DAT_01af6c10);
      FUN_00419260(&local_718,&DAT_01af6c10,1,5);
      *local_718 = 0;
      local_718[1] = local_6c8;
      local_718[2] = local_6c8 + 1.0;
      local_718[3] = local_6c8 + 3.0;
      local_718[4] = local_6c8 + 10.0;
      FUN_004194b0(&local_6f0,local_718,&DAT_01af6c10);
      FUN_00419430(&local_720,&DAT_01af6c10);
      FUN_00419260(&local_720,&DAT_01af6c10,1,6);
      *local_720 = 0;
      local_720[1] = 0x3ff0000000000000;
      local_720[2] = 0x4008000000000000;
      local_720[3] = 0x4024000000000000;
      local_720[4] = 0x403e000000000000;
      local_720[5] = 0x4059000000000000;
      FUN_004194b0(&local_6f8,local_720,&DAT_01af6c10);
    }
    local_730 = local_6f0;
    if (local_6f0 != 0) {
      local_730 = *(longlong *)(local_6f0 + -8);
    }
    iVar2 = (int)local_730;
    local_6e0 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_738 = *(longlong *)(local_res8 + 0x68);
        local_740 = FUN_0167dfb0(&PTR_FUN_0166b3d8,1);
        local_744 = FUN_00597e50(local_738 + 8,&local_740);
        local_760 = local_6f8;
        if (local_6f8 != 0) {
          local_760 = *(longlong *)(local_6f8 + -8);
        }
        iVar5 = (int)local_760;
        local_6e4 = 0;
        local_6dc = local_744;
        if (-1 < iVar5 + -1) {
          do {
            FUN_00e40b30(auStack_9b8,*(undefined8 *)(local_6f0 + (longlong)(int)local_6e0 * 8),
                         *(undefined8 *)(local_6f8 + (longlong)(int)local_6e4 * 8),local_6dc);
            local_6e4 = local_6e4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_6e0 = local_6e0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01b0fae0(local_res8,0,*(int *)(*(longlong *)(local_res8 + 0x68) + 0x10) + -1);
    iVar2 = FUN_01b0faf0(local_res8,0);
    local_6e0 = -1;
    if (-2 < iVar2) {
      iVar2 = iVar2 + 2;
      do {
        FUN_01b0faa0(local_res8,0,local_6e0);
        local_6e0 = local_6e0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_768 = *(longlong *)(local_res8 + 0x68);
    if (*(int *)(local_768 + 0x10) == 0) {
      FUN_00594f90();
    }
    FUN_01b0fae0(local_res8,1,*(int *)(**(longlong **)(local_768 + 8) + 0x10) + -1);
    iVar2 = FUN_01b0faf0(local_res8,1);
    local_6e0 = -1;
    if (-2 < iVar2) {
      iVar2 = iVar2 + 2;
      do {
        FUN_01b0faa0(local_res8,1,local_6e0);
        local_6e0 = local_6e0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(local_res8 + 0x68) + 0x10);
    local_6e0 = 0;
    if (-1 < iVar2 + -2) {
      iVar2 = iVar2 + -1;
      do {
        local_770 = *(longlong *)(local_res8 + 0x70);
        local_778 = FUN_01680a00(&PTR_FUN_0166efa0,1);
        local_77c = FUN_00597e50(local_770 + 8,&local_778);
        local_798 = *(longlong *)(local_res8 + 0x68);
        local_6dc = local_77c;
        if (*(uint *)(local_798 + 0x10) <= local_6e0) {
          FUN_00594f90();
        }
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(local_798 + 8) + (longlong)(int)local_6e0 * 8)
                        + 0x10);
        local_6e4 = 0;
        if (-1 < iVar5 + -1) {
          do {
            local_7a0 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_7a0 + 0x10) <= local_6e0) {
              FUN_00594f90();
            }
            local_7a8 = *(longlong *)(*(longlong *)(local_7a0 + 8) + (longlong)(int)local_6e0 * 8);
            local_988 = local_6e4;
            if (*(uint *)(local_7a8 + 0x10) <= local_6e4) {
              FUN_00594f90();
            }
            local_980 = (longlong)(int)local_6e4;
            puVar6 = (undefined8 *)(*(longlong *)(local_7a8 + 8) + local_980 * 0x18);
            local_7c0 = *puVar6;
            uStack_7b8 = puVar6[1];
            uStack_7b0 = puVar6[2];
            local_7c8 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_7c8 + 0x10) <= local_6e0) {
              FUN_00594f90();
            }
            local_7d0 = *(longlong *)(*(longlong *)(local_7c8 + 8) + (longlong)(int)local_6e0 * 8);
            if (*(uint *)(local_7d0 + 0x10) <= local_988) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_7d0 + 8) + local_980 * 0x18);
            local_7e8 = *puVar6;
            uStack_7e0 = puVar6[1];
            local_7d8 = puVar6[2];
            local_7f0 = *(longlong *)(local_res8 + 0x68);
            uVar4 = local_6e0 + 1;
            if (*(uint *)(local_7f0 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            local_7f8 = *(longlong *)(*(longlong *)(local_7f0 + 8) + (longlong)(int)uVar4 * 8);
            if (*(uint *)(local_7f8 + 0x10) <= local_988) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_7f8 + 8) + local_980 * 0x18);
            local_810 = *puVar6;
            uStack_808 = puVar6[1];
            uStack_800 = puVar6[2];
            local_818 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_818 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            local_820 = *(longlong *)(*(longlong *)(local_818 + 8) + (longlong)(int)uVar4 * 8);
            if (*(uint *)(local_820 + 0x10) <= local_988) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_820 + 8) + local_980 * 0x18);
            local_838 = *puVar6;
            uStack_830 = puVar6[1];
            local_828 = puVar6[2];
            local_6d8 = FUN_01676390(local_7c0,local_7d8,local_810,local_828);
            local_840 = *(longlong *)(local_res8 + 0x70);
            if (*(uint *)(local_840 + 0x10) <= local_6dc) {
              FUN_00594f90();
            }
            local_848 = *(longlong *)(*(longlong *)(local_840 + 8) + (longlong)(int)local_6dc * 8);
            local_850 = local_6d8;
            local_854 = FUN_00597e50(local_848 + 8,&local_850);
            local_6e4 = local_6e4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_6e0 = local_6e0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(local_res8 + 0x68) + 0x10);
    local_6e0 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_870 = *(longlong *)(local_res8 + 0x78);
        local_878 = FUN_01680a00(&PTR_FUN_0166efa0,1);
        local_87c = FUN_00597e50(local_870 + 8,&local_878);
        local_898 = *(longlong *)(local_res8 + 0x68);
        local_6dc = local_87c;
        if (*(uint *)(local_898 + 0x10) <= local_6e0) {
          FUN_00594f90();
        }
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(local_898 + 8) + (longlong)(int)local_6e0 * 8)
                        + 0x10);
        local_6e4 = 0;
        if (-1 < iVar5 + -2) {
          iVar5 = iVar5 + -1;
          do {
            local_8a0 = *(longlong *)(local_res8 + 0x68);
            local_984 = local_6e0;
            if (*(uint *)(local_8a0 + 0x10) <= local_6e0) {
              FUN_00594f90();
            }
            local_978 = (longlong)(int)local_6e0;
            local_8a8 = *(longlong *)(*(longlong *)(local_8a0 + 8) + local_978 * 8);
            if (*(uint *)(local_8a8 + 0x10) <= local_6e4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_8a8 + 8) + (longlong)(int)local_6e4 * 0x18);
            local_8c0 = *puVar6;
            local_8b8 = puVar6[1];
            uStack_8b0 = puVar6[2];
            local_8c8 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_8c8 + 0x10) <= local_984) {
              FUN_00594f90();
            }
            local_8d0 = *(longlong *)(*(longlong *)(local_8c8 + 8) + local_978 * 8);
            if (*(uint *)(local_8d0 + 0x10) <= local_6e4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_8d0 + 8) + (longlong)(int)local_6e4 * 0x18);
            local_8e8 = *puVar6;
            uStack_8e0 = puVar6[1];
            local_8d8 = puVar6[2];
            local_8f0 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_8f0 + 0x10) <= local_984) {
              FUN_00594f90();
            }
            local_8f8 = *(longlong *)(*(longlong *)(local_8f0 + 8) + local_978 * 8);
            uVar4 = local_6e4 + 1;
            if (*(uint *)(local_8f8 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_8f8 + 8) + (longlong)(int)uVar4 * 0x18);
            local_910 = *puVar6;
            local_908 = puVar6[1];
            uStack_900 = puVar6[2];
            local_918 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_918 + 0x10) <= local_984) {
              FUN_00594f90();
            }
            local_920 = *(longlong *)(*(longlong *)(local_918 + 8) + local_978 * 8);
            if (*(uint *)(local_920 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_920 + 8) + (longlong)(int)uVar4 * 0x18);
            local_938 = *puVar6;
            uStack_930 = puVar6[1];
            local_928 = puVar6[2];
            local_6d8 = FUN_01676390(local_8b8,local_8d8,local_908,local_928);
            local_940 = *(longlong *)(local_res8 + 0x78);
            if (*(uint *)(local_940 + 0x10) <= local_6dc) {
              FUN_00594f90();
            }
            local_948 = *(longlong *)(*(longlong *)(local_940 + 8) + (longlong)(int)local_6dc * 8);
            local_950 = local_6d8;
            local_954 = FUN_00597e50(local_948 + 8,&local_950);
            local_6e4 = local_6e4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_6e0 = local_6e0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00417840(&local_720,&DAT_01af6c10,4);
  FUN_00417840(&local_6f8,&DAT_01af6c10,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

