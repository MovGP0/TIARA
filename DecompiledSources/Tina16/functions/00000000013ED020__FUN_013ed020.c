/* Ghidra address: 013ed020 */
/* Ghidra symbol: FUN_013ed020 */


void FUN_013ed020(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = FUN_019a4600();
  iVar7 = 0;
  iVar8 = *(int *)(*(longlong *)(lVar2 + 0x470) + 0x10);
  if (-1 < iVar8 + -1) {
LAB_013ed053:
    lVar2 = FUN_019a4600();
    uVar3 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x470),iVar7);
    *(undefined8 *)(param_1 + 0x10a8) = uVar3;
    *(int *)(param_1 + 0x109c) = iVar7;
    if ((**(longlong **)(param_1 + 0x10a8) != DAT_02108480) ||
       (((DAT_02108488 != '\x01' ||
         (*(byte *)(*(longlong *)(param_1 + 0x10a8) + 8) - 1 != *(int *)(param_1 + 0x1088))) &&
        ((DAT_02108488 != '\x02' ||
         (*(byte *)(*(longlong *)(param_1 + 0x10a8) + 9) - 1 != *(int *)(param_1 + 0x1088)))))))
    goto LAB_013ed124;
    *(undefined1 *)(param_1 + 0x1098) = 1;
    lVar2 = FUN_019a4600();
    puVar4 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar2 + 0x470),iVar7);
    puVar5 = (undefined8 *)(param_1 + 0xb76);
    for (lVar2 = 0x24; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)puVar5 = *(undefined4 *)puVar4;
    *(undefined2 *)((longlong)puVar5 + 4) = *(undefined2 *)((longlong)puVar4 + 4);
    *(undefined1 *)((longlong)puVar5 + 6) = *(undefined1 *)((longlong)puVar4 + 6);
  }
code_r0x013ed143:
  lVar2 = FUN_019a4600();
  iVar7 = 0;
  iVar8 = *(int *)(*(longlong *)(lVar2 + 0x468) + 0x10);
  if (-1 < iVar8 + -1) {
    do {
      lVar2 = FUN_019a4600();
      uVar3 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x468),iVar7);
      *(undefined8 *)(param_1 + 0x10b0) = uVar3;
      *(int *)(param_1 + 0x10a0) = iVar7;
      if ((**(longlong **)(param_1 + 0x10b0) == DAT_02108480) &&
         (((DAT_02108488 == '\x01' &&
           (*(byte *)(*(longlong *)(param_1 + 0x10b0) + 8) - 1 == *(int *)(param_1 + 0x1088))) ||
          ((DAT_02108488 == '\x02' &&
           (*(byte *)(*(longlong *)(param_1 + 0x10b0) + 9) - 1 == *(int *)(param_1 + 0x1088))))))) {
        *(undefined1 *)(param_1 + 0x1099) = 1;
        lVar2 = FUN_019a4600();
        puVar4 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar2 + 0x468),iVar7);
        *(undefined8 *)(param_1 + 0xcc4) = *puVar4;
        *(undefined8 *)(param_1 + 0xccc) = puVar4[1];
        *(undefined8 *)(param_1 + 0xcd4) = puVar4[2];
        *(undefined4 *)(param_1 + 0xcdc) = *(undefined4 *)(puVar4 + 3);
        break;
      }
      *(undefined8 *)(param_1 + 0x10b0) = 0;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  lVar2 = FUN_019a4600();
  iVar7 = 0;
  iVar8 = *(int *)(*(longlong *)(lVar2 + 0x478) + 0x10);
  if (-1 < iVar8 + -1) {
    do {
      lVar2 = FUN_019a4600();
      uVar3 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x478),iVar7);
      *(undefined8 *)(param_1 + 0x10b8) = uVar3;
      *(int *)(param_1 + 0x10a4) = iVar7;
      if (**(longlong **)(param_1 + 0x10b8) == DAT_02108480) {
        *(undefined1 *)(param_1 + 0x109a) = 1;
        lVar2 = FUN_019a4600();
        puVar4 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(lVar2 + 0x478),iVar7);
        *(undefined8 *)(param_1 + 0xcb3) = *puVar4;
        *(undefined8 *)(param_1 + 0xcbb) = puVar4[1];
        *(undefined1 *)(param_1 + 0xcc3) = *(undefined1 *)(puVar4 + 2);
        lVar2 = FUN_019a4600();
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x478),iVar7);
        *(undefined1 *)(param_1 + 0x10d8) = *(undefined1 *)(lVar2 + 0x11);
        cVar1 = *(char *)(param_1 + 0xcbb);
        if (cVar1 == '\0') {
          FUN_013ee4e0(param_1,*(undefined8 *)(param_1 + 0x6f0));
        }
        else if (cVar1 == '\x01') {
          FUN_013ee4e0(param_1,*(undefined8 *)(param_1 + 0x708));
        }
        else if (cVar1 == '\x02') {
          FUN_013ee4e0(param_1,*(undefined8 *)(param_1 + 0x700));
        }
        else if (cVar1 == '\x03') {
          FUN_013ee4e0(param_1,*(undefined8 *)(param_1 + 0x6f8));
        }
        break;
      }
      *(undefined8 *)(param_1 + 0x10b8) = 0;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((*(int *)(param_1 + 0x1080) == 1) && (*(int *)(param_1 + 0x1084) == 1)) {
    if (*(char *)(param_1 + 0x109a) == '\0') {
      puVar4 = (undefined8 *)FUN_004095c0(0x10);
      *puVar4 = 0x4014000000000000;
      puVar4[1] = 0;
      uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(param_1 + 0x10c0) = uVar3;
      FUN_004ae7e0(uVar3,puVar4);
      uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(param_1 + 0x10c8) = uVar3;
      *(undefined1 *)(param_1 + 0x743) = 0;
      uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(param_1 + 0x10d0) = uVar3;
      *(undefined1 *)(param_1 + 0x744) = 0;
    }
    else {
      uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(param_1 + 0x10c0) = uVar3;
      iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10b8) + 0x13) + 0x10);
      iVar7 = 0;
      if (-1 < iVar8 + -1) {
        do {
          puVar4 = (undefined8 *)FUN_004095c0(0x10);
          puVar5 = (undefined8 *)
                   FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x13),iVar7);
          *puVar4 = *puVar5;
          puVar4[1] = puVar5[1];
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10c0),puVar4);
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(param_1 + 0x10c8) = uVar3;
      iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10b8) + 0x1b) + 0x10);
      iVar7 = 0;
      if (-1 < iVar8 + -1) {
        do {
          puVar6 = (undefined8 *)FUN_004095c0(0x29);
          puVar4 = (undefined8 *)
                   FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x1b),iVar7);
          puVar5 = puVar6;
          for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10c8),puVar6);
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      *(undefined8 *)(param_1 + 0x10d0) = uVar3;
      iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10b8) + 0x23) + 0x10);
      iVar7 = 0;
      if (-1 < iVar8 + -1) {
        do {
          puVar6 = (undefined8 *)FUN_004095c0(0x29);
          puVar4 = (undefined8 *)
                   FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x10b8) + 0x23),iVar7);
          puVar5 = puVar6;
          for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
          }
          *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10d0),puVar6);
          iVar7 = iVar7 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  return;
LAB_013ed124:
  *(undefined8 *)(param_1 + 0x10a8) = 0;
  iVar7 = iVar7 + 1;
  iVar8 = iVar8 + -1;
  if (iVar8 == 0) goto code_r0x013ed143;
  goto LAB_013ed053;
}

