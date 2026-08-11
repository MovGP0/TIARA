/* Ghidra address: 00e343f0 */
/* Ghidra symbol: FUN_00e343f0 */


longlong FUN_00e343f0(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
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
  undefined1 auStack_9a8 [32];
  undefined1 *local_988;
  int *local_980;
  uint local_978;
  uint local_974;
  longlong local_970;
  longlong local_968;
  undefined1 *local_960;
  undefined4 local_944;
  undefined8 local_940;
  longlong local_938;
  longlong local_930;
  undefined8 local_928;
  undefined8 uStack_920;
  undefined8 local_918;
  longlong local_910;
  longlong local_908;
  undefined8 local_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  longlong local_8e8;
  longlong local_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  longlong local_8c0;
  longlong local_8b8;
  undefined8 local_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  longlong local_898;
  longlong local_890;
  longlong local_888;
  uint local_86c;
  undefined8 local_868;
  longlong local_860;
  undefined4 local_844;
  undefined8 local_840;
  longlong local_838;
  longlong local_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  longlong local_810;
  longlong local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  longlong local_7e8;
  longlong local_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  longlong local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  longlong local_798;
  longlong local_790;
  longlong local_788;
  uint local_76c;
  undefined8 local_768;
  longlong local_760;
  longlong local_758;
  longlong local_750;
  uint local_734;
  undefined8 local_730;
  longlong local_728;
  longlong local_720;
  undefined8 *local_710;
  undefined8 *local_708;
  undefined8 *local_700;
  undefined8 *local_6f8 [2];
  longlong local_6e8;
  longlong local_6e0;
  uint local_6d4;
  uint local_6d0;
  uint local_6cc;
  undefined8 local_6c8;
  undefined1 local_6c0 [8];
  double local_6b8;
  undefined8 local_6b0 [49];
  undefined8 local_528 [17];
  int local_4a0 [108];
  double local_2f0;
  undefined8 local_1d0;
  
  local_960 = auStack_9a8;
  local_6e0 = 0;
  local_6e8 = 0;
  local_6f8[0] = (undefined8 *)0x0;
  local_700 = (undefined8 *)0x0;
  local_708 = (undefined8 *)0x0;
  local_710 = (undefined8 *)0x0;
  puVar6 = local_528;
  for (lVar3 = 0x11; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_6b0;
  for (lVar3 = 0x31; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_6;
    param_6 = param_6 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar7 = local_4a0;
  for (lVar3 = 0x8d; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)piVar7 = *param_7;
    param_7 = param_7 + 1;
    piVar7 = piVar7 + 2;
  }
  local_res8 = param_1;
  puVar1 = auStack_9a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_960;
  }
  local_960 = puVar1;
  FUN_01676510(local_res8,0,param_3,param_4);
  if (*(char *)(param_4 + 0xed7) == '\x01') {
    *(double *)(local_res8 + 0x58) = local_2f0 * (double)local_4a0[0];
    *(undefined8 *)(local_res8 + 0x60) = local_1d0;
    FUN_01b0fae0(local_res8,0,2);
    iVar2 = FUN_01b0faf0(local_res8,0);
    local_6d0 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_01b0faa0(local_res8,0,local_6d0);
        local_6d0 = local_6d0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01b0fa30(local_res8,0,0);
  }
  else {
    local_988 = local_6c0;
    local_980 = local_4a0;
    FUN_00e2dcf0(0,0,0,&local_6b8);
    if (*(char *)(param_4 + 0xed7) == '\x02') {
      FUN_00419430(local_6f8,&DAT_01af6c10);
      FUN_00419260(local_6f8,&DAT_01af6c10,1,3);
      *local_6f8[0] = 0;
      local_6f8[0][1] = local_6b8;
      local_6f8[0][2] = local_6b8 + 3.0;
      FUN_004194b0(&local_6e0,local_6f8[0],&DAT_01af6c10);
      FUN_00419430(&local_700,&DAT_01af6c10);
      FUN_00419260(&local_700,&DAT_01af6c10,1,3);
      *local_700 = 0;
      local_700[1] = 0x4008000000000000;
      local_700[2] = 0x403e000000000000;
      FUN_004194b0(&local_6e8,local_700,&DAT_01af6c10);
    }
    else {
      FUN_00419430(&local_708,&DAT_01af6c10);
      FUN_00419260(&local_708,&DAT_01af6c10,1,5);
      *local_708 = 0;
      local_708[1] = local_6b8;
      local_708[2] = local_6b8 + 1.0;
      local_708[3] = local_6b8 + 3.0;
      local_708[4] = local_6b8 + 10.0;
      FUN_004194b0(&local_6e0,local_708,&DAT_01af6c10);
      FUN_00419430(&local_710,&DAT_01af6c10);
      FUN_00419260(&local_710,&DAT_01af6c10,1,6);
      *local_710 = 0;
      local_710[1] = 0x3ff0000000000000;
      local_710[2] = 0x4008000000000000;
      local_710[3] = 0x4024000000000000;
      local_710[4] = 0x403e000000000000;
      local_710[5] = 0x4059000000000000;
      FUN_004194b0(&local_6e8,local_710,&DAT_01af6c10);
    }
    local_720 = local_6e0;
    if (local_6e0 != 0) {
      local_720 = *(longlong *)(local_6e0 + -8);
    }
    iVar2 = (int)local_720;
    local_6d0 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_728 = *(longlong *)(local_res8 + 0x68);
        local_730 = FUN_0167dfb0(&PTR_FUN_0166b3d8,1);
        local_734 = FUN_00597e50(local_728 + 8,&local_730);
        local_750 = local_6e8;
        if (local_6e8 != 0) {
          local_750 = *(longlong *)(local_6e8 + -8);
        }
        iVar5 = (int)local_750;
        local_6d4 = 0;
        local_6cc = local_734;
        if (-1 < iVar5 + -1) {
          do {
            FUN_00e34330(auStack_9a8,*(undefined8 *)(local_6e0 + (longlong)(int)local_6d0 * 8),
                         *(undefined8 *)(local_6e8 + (longlong)(int)local_6d4 * 8),local_6cc);
            local_6d4 = local_6d4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_6d0 = local_6d0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01b0fae0(local_res8,0,*(int *)(*(longlong *)(local_res8 + 0x68) + 0x10) + -1);
    iVar2 = FUN_01b0faf0(local_res8,0);
    local_6d0 = -1;
    if (-2 < iVar2) {
      iVar2 = iVar2 + 2;
      do {
        FUN_01b0faa0(local_res8,0,local_6d0);
        local_6d0 = local_6d0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_758 = *(longlong *)(local_res8 + 0x68);
    if (*(int *)(local_758 + 0x10) == 0) {
      FUN_00594f90();
    }
    FUN_01b0fae0(local_res8,1,*(int *)(**(longlong **)(local_758 + 8) + 0x10) + -1);
    iVar2 = FUN_01b0faf0(local_res8,1);
    local_6d0 = -1;
    if (-2 < iVar2) {
      iVar2 = iVar2 + 2;
      do {
        FUN_01b0faa0(local_res8,1,local_6d0);
        local_6d0 = local_6d0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(local_res8 + 0x68) + 0x10);
    local_6d0 = 0;
    if (-1 < iVar2 + -2) {
      iVar2 = iVar2 + -1;
      do {
        local_760 = *(longlong *)(local_res8 + 0x70);
        local_768 = FUN_01680a00(&PTR_FUN_0166efa0,1);
        local_76c = FUN_00597e50(local_760 + 8,&local_768);
        local_788 = *(longlong *)(local_res8 + 0x68);
        local_6cc = local_76c;
        if (*(uint *)(local_788 + 0x10) <= local_6d0) {
          FUN_00594f90();
        }
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(local_788 + 8) + (longlong)(int)local_6d0 * 8)
                        + 0x10);
        local_6d4 = 0;
        if (-1 < iVar5 + -1) {
          do {
            local_790 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_790 + 0x10) <= local_6d0) {
              FUN_00594f90();
            }
            local_798 = *(longlong *)(*(longlong *)(local_790 + 8) + (longlong)(int)local_6d0 * 8);
            local_978 = local_6d4;
            if (*(uint *)(local_798 + 0x10) <= local_6d4) {
              FUN_00594f90();
            }
            local_970 = (longlong)(int)local_6d4;
            puVar6 = (undefined8 *)(*(longlong *)(local_798 + 8) + local_970 * 0x18);
            local_7b0 = *puVar6;
            uStack_7a8 = puVar6[1];
            uStack_7a0 = puVar6[2];
            local_7b8 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_7b8 + 0x10) <= local_6d0) {
              FUN_00594f90();
            }
            local_7c0 = *(longlong *)(*(longlong *)(local_7b8 + 8) + (longlong)(int)local_6d0 * 8);
            if (*(uint *)(local_7c0 + 0x10) <= local_978) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_7c0 + 8) + local_970 * 0x18);
            local_7d8 = *puVar6;
            uStack_7d0 = puVar6[1];
            local_7c8 = puVar6[2];
            local_7e0 = *(longlong *)(local_res8 + 0x68);
            uVar4 = local_6d0 + 1;
            if (*(uint *)(local_7e0 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            local_7e8 = *(longlong *)(*(longlong *)(local_7e0 + 8) + (longlong)(int)uVar4 * 8);
            if (*(uint *)(local_7e8 + 0x10) <= local_978) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_7e8 + 8) + local_970 * 0x18);
            local_800 = *puVar6;
            uStack_7f8 = puVar6[1];
            uStack_7f0 = puVar6[2];
            local_808 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_808 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            local_810 = *(longlong *)(*(longlong *)(local_808 + 8) + (longlong)(int)uVar4 * 8);
            if (*(uint *)(local_810 + 0x10) <= local_978) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_810 + 8) + local_970 * 0x18);
            local_828 = *puVar6;
            uStack_820 = puVar6[1];
            local_818 = puVar6[2];
            local_6c8 = FUN_01676390(local_7b0,local_7c8,local_800,local_818);
            local_830 = *(longlong *)(local_res8 + 0x70);
            if (*(uint *)(local_830 + 0x10) <= local_6cc) {
              FUN_00594f90();
            }
            local_838 = *(longlong *)(*(longlong *)(local_830 + 8) + (longlong)(int)local_6cc * 8);
            local_840 = local_6c8;
            local_844 = FUN_00597e50(local_838 + 8,&local_840);
            local_6d4 = local_6d4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_6d0 = local_6d0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(local_res8 + 0x68) + 0x10);
    local_6d0 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_860 = *(longlong *)(local_res8 + 0x78);
        local_868 = FUN_01680a00(&PTR_FUN_0166efa0,1);
        local_86c = FUN_00597e50(local_860 + 8,&local_868);
        local_888 = *(longlong *)(local_res8 + 0x68);
        local_6cc = local_86c;
        if (*(uint *)(local_888 + 0x10) <= local_6d0) {
          FUN_00594f90();
        }
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(local_888 + 8) + (longlong)(int)local_6d0 * 8)
                        + 0x10);
        local_6d4 = 0;
        if (-1 < iVar5 + -2) {
          iVar5 = iVar5 + -1;
          do {
            local_890 = *(longlong *)(local_res8 + 0x68);
            local_974 = local_6d0;
            if (*(uint *)(local_890 + 0x10) <= local_6d0) {
              FUN_00594f90();
            }
            local_968 = (longlong)(int)local_6d0;
            local_898 = *(longlong *)(*(longlong *)(local_890 + 8) + local_968 * 8);
            if (*(uint *)(local_898 + 0x10) <= local_6d4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_898 + 8) + (longlong)(int)local_6d4 * 0x18);
            local_8b0 = *puVar6;
            local_8a8 = puVar6[1];
            uStack_8a0 = puVar6[2];
            local_8b8 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_8b8 + 0x10) <= local_974) {
              FUN_00594f90();
            }
            local_8c0 = *(longlong *)(*(longlong *)(local_8b8 + 8) + local_968 * 8);
            if (*(uint *)(local_8c0 + 0x10) <= local_6d4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_8c0 + 8) + (longlong)(int)local_6d4 * 0x18);
            local_8d8 = *puVar6;
            uStack_8d0 = puVar6[1];
            local_8c8 = puVar6[2];
            local_8e0 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_8e0 + 0x10) <= local_974) {
              FUN_00594f90();
            }
            local_8e8 = *(longlong *)(*(longlong *)(local_8e0 + 8) + local_968 * 8);
            uVar4 = local_6d4 + 1;
            if (*(uint *)(local_8e8 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_8e8 + 8) + (longlong)(int)uVar4 * 0x18);
            local_900 = *puVar6;
            local_8f8 = puVar6[1];
            uStack_8f0 = puVar6[2];
            local_908 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_908 + 0x10) <= local_974) {
              FUN_00594f90();
            }
            local_910 = *(longlong *)(*(longlong *)(local_908 + 8) + local_968 * 8);
            if (*(uint *)(local_910 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_910 + 8) + (longlong)(int)uVar4 * 0x18);
            local_928 = *puVar6;
            uStack_920 = puVar6[1];
            local_918 = puVar6[2];
            local_6c8 = FUN_01676390(local_8a8,local_8c8,local_8f8,local_918);
            local_930 = *(longlong *)(local_res8 + 0x78);
            if (*(uint *)(local_930 + 0x10) <= local_6cc) {
              FUN_00594f90();
            }
            local_938 = *(longlong *)(*(longlong *)(local_930 + 8) + (longlong)(int)local_6cc * 8);
            local_940 = local_6c8;
            local_944 = FUN_00597e50(local_938 + 8,&local_940);
            local_6d4 = local_6d4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_6d0 = local_6d0 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00417840(&local_710,&DAT_01af6c10,4);
  FUN_00417840(&local_6e8,&DAT_01af6c10,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

