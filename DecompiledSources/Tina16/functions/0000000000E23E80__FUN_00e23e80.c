/* Ghidra address: 00e23e80 */
/* Ghidra symbol: FUN_00e23e80 */


longlong FUN_00e23e80(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
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
  undefined1 auStack_938 [32];
  undefined1 *local_918;
  int *local_910;
  uint local_908;
  uint local_904;
  longlong local_900;
  longlong local_8f8;
  undefined1 *local_8f0;
  undefined4 local_8d4;
  undefined8 local_8d0;
  longlong local_8c8;
  longlong local_8c0;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  longlong local_8a0;
  longlong local_898;
  undefined8 local_890;
  undefined8 local_888;
  undefined8 uStack_880;
  longlong local_878;
  longlong local_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  longlong local_850;
  longlong local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 uStack_830;
  longlong local_828;
  longlong local_820;
  longlong local_818;
  uint local_7fc;
  undefined8 local_7f8;
  longlong local_7f0;
  undefined4 local_7d4;
  undefined8 local_7d0;
  longlong local_7c8;
  longlong local_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 local_7a8;
  longlong local_7a0;
  longlong local_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  longlong local_778;
  longlong local_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  longlong local_750;
  longlong local_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  longlong local_728;
  longlong local_720;
  longlong local_718;
  uint local_6fc;
  undefined8 local_6f8;
  longlong local_6f0;
  longlong local_6e8;
  longlong local_6e0;
  uint local_6c4;
  undefined8 local_6c0;
  longlong local_6b8;
  longlong local_6b0;
  undefined8 *local_6a0;
  undefined8 *local_698;
  undefined8 *local_690;
  undefined8 *local_688 [2];
  longlong local_678;
  longlong local_670;
  uint local_664;
  uint local_660;
  uint local_65c;
  undefined8 local_658;
  undefined1 local_650 [8];
  double local_648;
  undefined8 local_640 [42];
  undefined8 local_4f0 [17];
  int local_468 [118];
  double local_290;
  undefined8 local_1f8;
  
  local_8f0 = auStack_938;
  local_670 = 0;
  local_678 = 0;
  local_688[0] = (undefined8 *)0x0;
  local_690 = (undefined8 *)0x0;
  local_698 = (undefined8 *)0x0;
  local_6a0 = (undefined8 *)0x0;
  puVar6 = local_4f0;
  for (lVar3 = 0x11; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_5;
    param_5 = param_5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar6 = local_640;
  for (lVar3 = 0x2a; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = *param_6;
    param_6 = param_6 + 1;
    puVar6 = puVar6 + 1;
  }
  piVar7 = local_468;
  for (lVar3 = 0x86; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)piVar7 = *param_7;
    param_7 = param_7 + 1;
    piVar7 = piVar7 + 2;
  }
  local_res8 = param_1;
  puVar1 = auStack_938;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_8f0;
  }
  local_8f0 = puVar1;
  FUN_01676510(local_res8,0,param_3,param_4);
  if (*(char *)(param_4 + 0xed7) == '\x01') {
    *(double *)(local_res8 + 0x58) = local_290 * (double)local_468[0];
    *(undefined8 *)(local_res8 + 0x60) = local_1f8;
    FUN_01b0fae0(local_res8,0,2);
    iVar2 = FUN_01b0faf0(local_res8,0);
    local_660 = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_01b0faa0(local_res8,0,local_660);
        local_660 = local_660 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01b0fa30(local_res8,0,0);
  }
  else {
    local_918 = local_650;
    local_910 = local_468;
    FUN_00e1fa90(0,0,0,&local_648);
    if (*(char *)(param_4 + 0xed7) == '\x02') {
      FUN_00419430(local_688,&DAT_01af6c10);
      FUN_00419260(local_688,&DAT_01af6c10,1,3);
      *local_688[0] = 0;
      local_688[0][1] = local_648;
      local_688[0][2] = local_648 + 3.0;
      FUN_004194b0(&local_670,local_688[0],&DAT_01af6c10);
      FUN_00419430(&local_690,&DAT_01af6c10);
      FUN_00419260(&local_690,&DAT_01af6c10,1,3);
      *local_690 = 0;
      local_690[1] = 0x4008000000000000;
      local_690[2] = 0x403e000000000000;
      FUN_004194b0(&local_678,local_690,&DAT_01af6c10);
    }
    else {
      FUN_00419430(&local_698,&DAT_01af6c10);
      FUN_00419260(&local_698,&DAT_01af6c10,1,5);
      *local_698 = 0;
      local_698[1] = local_648;
      local_698[2] = local_648 + 1.0;
      local_698[3] = local_648 + 3.0;
      local_698[4] = local_648 + 10.0;
      FUN_004194b0(&local_670,local_698,&DAT_01af6c10);
      FUN_00419430(&local_6a0,&DAT_01af6c10);
      FUN_00419260(&local_6a0,&DAT_01af6c10,1,6);
      *local_6a0 = 0;
      local_6a0[1] = 0x3ff0000000000000;
      local_6a0[2] = 0x4008000000000000;
      local_6a0[3] = 0x4024000000000000;
      local_6a0[4] = 0x403e000000000000;
      local_6a0[5] = 0x4059000000000000;
      FUN_004194b0(&local_678,local_6a0,&DAT_01af6c10);
    }
    local_6b0 = local_670;
    if (local_670 != 0) {
      local_6b0 = *(longlong *)(local_670 + -8);
    }
    iVar2 = (int)local_6b0;
    local_660 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_6b8 = *(longlong *)(local_res8 + 0x68);
        local_6c0 = FUN_0167dfb0(&PTR_FUN_0166b3d8,1);
        local_6c4 = FUN_00597e50(local_6b8 + 8,&local_6c0);
        local_6e0 = local_678;
        if (local_678 != 0) {
          local_6e0 = *(longlong *)(local_678 + -8);
        }
        iVar5 = (int)local_6e0;
        local_664 = 0;
        local_65c = local_6c4;
        if (-1 < iVar5 + -1) {
          do {
            FUN_00e23dc0(auStack_938,*(undefined8 *)(local_670 + (longlong)(int)local_660 * 8),
                         *(undefined8 *)(local_678 + (longlong)(int)local_664 * 8),local_65c);
            local_664 = local_664 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_660 = local_660 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01b0fae0(local_res8,0,*(int *)(*(longlong *)(local_res8 + 0x68) + 0x10) + -1);
    iVar2 = FUN_01b0faf0(local_res8,0);
    local_660 = -1;
    if (-2 < iVar2) {
      iVar2 = iVar2 + 2;
      do {
        FUN_01b0faa0(local_res8,0,local_660);
        local_660 = local_660 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_6e8 = *(longlong *)(local_res8 + 0x68);
    if (*(int *)(local_6e8 + 0x10) == 0) {
      FUN_00594f90();
    }
    FUN_01b0fae0(local_res8,1,*(int *)(**(longlong **)(local_6e8 + 8) + 0x10) + -1);
    iVar2 = FUN_01b0faf0(local_res8,1);
    local_660 = -1;
    if (-2 < iVar2) {
      iVar2 = iVar2 + 2;
      do {
        FUN_01b0faa0(local_res8,1,local_660);
        local_660 = local_660 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(local_res8 + 0x68) + 0x10);
    local_660 = 0;
    if (-1 < iVar2 + -2) {
      iVar2 = iVar2 + -1;
      do {
        local_6f0 = *(longlong *)(local_res8 + 0x70);
        local_6f8 = FUN_01680a00(&PTR_FUN_0166efa0,1);
        local_6fc = FUN_00597e50(local_6f0 + 8,&local_6f8);
        local_718 = *(longlong *)(local_res8 + 0x68);
        local_65c = local_6fc;
        if (*(uint *)(local_718 + 0x10) <= local_660) {
          FUN_00594f90();
        }
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(local_718 + 8) + (longlong)(int)local_660 * 8)
                        + 0x10);
        local_664 = 0;
        if (-1 < iVar5 + -1) {
          do {
            local_720 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_720 + 0x10) <= local_660) {
              FUN_00594f90();
            }
            local_728 = *(longlong *)(*(longlong *)(local_720 + 8) + (longlong)(int)local_660 * 8);
            local_908 = local_664;
            if (*(uint *)(local_728 + 0x10) <= local_664) {
              FUN_00594f90();
            }
            local_900 = (longlong)(int)local_664;
            puVar6 = (undefined8 *)(*(longlong *)(local_728 + 8) + local_900 * 0x18);
            local_740 = *puVar6;
            uStack_738 = puVar6[1];
            uStack_730 = puVar6[2];
            local_748 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_748 + 0x10) <= local_660) {
              FUN_00594f90();
            }
            local_750 = *(longlong *)(*(longlong *)(local_748 + 8) + (longlong)(int)local_660 * 8);
            if (*(uint *)(local_750 + 0x10) <= local_908) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_750 + 8) + local_900 * 0x18);
            local_768 = *puVar6;
            uStack_760 = puVar6[1];
            local_758 = puVar6[2];
            local_770 = *(longlong *)(local_res8 + 0x68);
            uVar4 = local_660 + 1;
            if (*(uint *)(local_770 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            local_778 = *(longlong *)(*(longlong *)(local_770 + 8) + (longlong)(int)uVar4 * 8);
            if (*(uint *)(local_778 + 0x10) <= local_908) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_778 + 8) + local_900 * 0x18);
            local_790 = *puVar6;
            uStack_788 = puVar6[1];
            uStack_780 = puVar6[2];
            local_798 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_798 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            local_7a0 = *(longlong *)(*(longlong *)(local_798 + 8) + (longlong)(int)uVar4 * 8);
            if (*(uint *)(local_7a0 + 0x10) <= local_908) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_7a0 + 8) + local_900 * 0x18);
            local_7b8 = *puVar6;
            uStack_7b0 = puVar6[1];
            local_7a8 = puVar6[2];
            local_658 = FUN_01676390(local_740,local_758,local_790,local_7a8);
            local_7c0 = *(longlong *)(local_res8 + 0x70);
            if (*(uint *)(local_7c0 + 0x10) <= local_65c) {
              FUN_00594f90();
            }
            local_7c8 = *(longlong *)(*(longlong *)(local_7c0 + 8) + (longlong)(int)local_65c * 8);
            local_7d0 = local_658;
            local_7d4 = FUN_00597e50(local_7c8 + 8,&local_7d0);
            local_664 = local_664 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_660 = local_660 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)(*(longlong *)(local_res8 + 0x68) + 0x10);
    local_660 = 0;
    if (-1 < iVar2 + -1) {
      do {
        local_7f0 = *(longlong *)(local_res8 + 0x78);
        local_7f8 = FUN_01680a00(&PTR_FUN_0166efa0,1);
        local_7fc = FUN_00597e50(local_7f0 + 8,&local_7f8);
        local_818 = *(longlong *)(local_res8 + 0x68);
        local_65c = local_7fc;
        if (*(uint *)(local_818 + 0x10) <= local_660) {
          FUN_00594f90();
        }
        iVar5 = *(int *)(*(longlong *)(*(longlong *)(local_818 + 8) + (longlong)(int)local_660 * 8)
                        + 0x10);
        local_664 = 0;
        if (-1 < iVar5 + -2) {
          iVar5 = iVar5 + -1;
          do {
            local_820 = *(longlong *)(local_res8 + 0x68);
            local_904 = local_660;
            if (*(uint *)(local_820 + 0x10) <= local_660) {
              FUN_00594f90();
            }
            local_8f8 = (longlong)(int)local_660;
            local_828 = *(longlong *)(*(longlong *)(local_820 + 8) + local_8f8 * 8);
            if (*(uint *)(local_828 + 0x10) <= local_664) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_828 + 8) + (longlong)(int)local_664 * 0x18);
            local_840 = *puVar6;
            local_838 = puVar6[1];
            uStack_830 = puVar6[2];
            local_848 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_848 + 0x10) <= local_904) {
              FUN_00594f90();
            }
            local_850 = *(longlong *)(*(longlong *)(local_848 + 8) + local_8f8 * 8);
            if (*(uint *)(local_850 + 0x10) <= local_664) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_850 + 8) + (longlong)(int)local_664 * 0x18);
            local_868 = *puVar6;
            uStack_860 = puVar6[1];
            local_858 = puVar6[2];
            local_870 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_870 + 0x10) <= local_904) {
              FUN_00594f90();
            }
            local_878 = *(longlong *)(*(longlong *)(local_870 + 8) + local_8f8 * 8);
            uVar4 = local_664 + 1;
            if (*(uint *)(local_878 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_878 + 8) + (longlong)(int)uVar4 * 0x18);
            local_890 = *puVar6;
            local_888 = puVar6[1];
            uStack_880 = puVar6[2];
            local_898 = *(longlong *)(local_res8 + 0x68);
            if (*(uint *)(local_898 + 0x10) <= local_904) {
              FUN_00594f90();
            }
            local_8a0 = *(longlong *)(*(longlong *)(local_898 + 8) + local_8f8 * 8);
            if (*(uint *)(local_8a0 + 0x10) <= uVar4) {
              FUN_00594f90();
            }
            puVar6 = (undefined8 *)(*(longlong *)(local_8a0 + 8) + (longlong)(int)uVar4 * 0x18);
            local_8b8 = *puVar6;
            uStack_8b0 = puVar6[1];
            local_8a8 = puVar6[2];
            local_658 = FUN_01676390(local_838,local_858,local_888,local_8a8);
            local_8c0 = *(longlong *)(local_res8 + 0x78);
            if (*(uint *)(local_8c0 + 0x10) <= local_65c) {
              FUN_00594f90();
            }
            local_8c8 = *(longlong *)(*(longlong *)(local_8c0 + 8) + (longlong)(int)local_65c * 8);
            local_8d0 = local_658;
            local_8d4 = FUN_00597e50(local_8c8 + 8,&local_8d0);
            local_664 = local_664 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_660 = local_660 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_00417840(&local_6a0,&DAT_01af6c10,4);
  FUN_00417840(&local_678,&DAT_01af6c10,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

