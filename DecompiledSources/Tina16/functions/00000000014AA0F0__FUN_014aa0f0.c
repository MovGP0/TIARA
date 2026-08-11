/* Ghidra address: 014aa0f0 */
/* Ghidra symbol: FUN_014aa0f0 */


void FUN_014aa0f0(longlong *param_1,undefined8 param_2,short param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 local_1a8 [264];
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  short local_88;
  short local_86;
  undefined2 local_83;
  short local_81;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined8 local_7b;
  undefined8 local_73;
  undefined1 local_6b;
  undefined2 local_6a;
  short local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined8 local_64;
  undefined8 local_5c;
  undefined1 local_54;
  int local_53;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined8 local_4b;
  undefined8 local_43;
  short local_3b;
  char local_39;
  
  local_90 = 0;
  local_98 = 0;
  lVar6 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar6 = DAT_0210eae0;
  }
  if ((param_3 == 0x13) || (param_3 == 0x12)) {
    bVar1 = true;
    FUN_01d30f00(*param_1,&local_86,2);
    iVar9 = (int)local_86;
    if (-1 < iVar9 + -1) {
      do {
        FUN_01d30f00(*param_1,&local_53,0x1b);
        FUN_01d312f0(*param_1,&local_90);
        FUN_00414480(&local_98);
        if (param_3 == 0x13) {
          FUN_01d312f0(*param_1,&local_98);
        }
        if ((local_53 == -1) && (local_98 == 0)) {
          FUN_01d30f00(*param_1,&local_88,2);
          iVar8 = (int)local_88;
          if (-1 < iVar8 + -1) {
            do {
              FUN_01d30f00(*param_1,&local_a0,8);
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          *(double *)(lVar6 + 0x54f) = *(double *)(lVar6 + 0x54f) / (double)(int)local_3b;
          if (*(double *)(lVar6 + 0x54f) == 1.0) {
            *(undefined1 *)(lVar6 + 0x495) = 0;
          }
        }
        else {
          puVar2 = (undefined8 *)FUN_004095c0(0x23a);
          if (local_53 < 0) {
            *puVar2 = 0;
          }
          else {
            uVar3 = FUN_0198d420(lVar6,local_53);
            *puVar2 = uVar3;
          }
          *(undefined1 *)(puVar2 + 1) = local_4f;
          *(undefined1 *)((longlong)puVar2 + 9) = local_4e;
          *(undefined1 *)((longlong)puVar2 + 10) = local_4d;
          *(undefined1 *)((longlong)puVar2 + 0xb) = local_4c;
          *(undefined8 *)((longlong)puVar2 + 0x10c) = local_4b;
          *(undefined8 *)((longlong)puVar2 + 0x114) = local_43;
          *(short *)((longlong)puVar2 + 0x11c) = local_3b;
          *(char *)((longlong)puVar2 + 0x11e) = local_39;
          FUN_00416910(local_1a8,local_90,0xff);
          FUN_00415020((longlong)puVar2 + 0x22f,local_1a8,10);
          if (param_3 == 0x13) {
            FUN_00416910((longlong)puVar2 + 0xc,local_98,0xff);
          }
          else {
            *(undefined1 *)((longlong)puVar2 + 0xc) = 0;
          }
          FUN_004ae7e0(*(undefined8 *)(lVar6 + 0x470),puVar2);
          FUN_01d30f00(*param_1,&local_88,2);
          if (local_88 == 0) {
            *(undefined8 *)((longlong)puVar2 + 0x11f) = 0;
            if (local_39 == '\x02') {
              *(undefined1 *)((longlong)puVar2 + 0x11e) = 0;
            }
          }
          else {
            uVar3 = FUN_01d0efe0(&DAT_01d0ae90,1);
            *(undefined8 *)((longlong)puVar2 + 0x11f) = uVar3;
            iVar8 = (int)local_88;
            if (-1 < iVar8 + -1) {
              do {
                FUN_01d30f00(*param_1,&local_a0,8);
                FUN_01d0f0e0(*(undefined8 *)((longlong)puVar2 + 0x11f),local_a0);
                iVar8 = iVar8 + -1;
              } while (iVar8 != 0);
            }
          }
          if (bVar1) {
            puVar7 = puVar2;
            puVar4 = (undefined8 *)(lVar6 + 0x8c3);
            for (lVar5 = 0x24; lVar5 != 0; lVar5 = lVar5 + -1) {
              *puVar4 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar4 = puVar4 + 1;
            }
            *(undefined4 *)puVar4 = *(undefined4 *)puVar7;
            *(undefined2 *)((longlong)puVar4 + 4) = *(undefined2 *)((longlong)puVar7 + 4);
            *(undefined1 *)((longlong)puVar4 + 6) = *(undefined1 *)((longlong)puVar7 + 6);
            FUN_00415020(lVar6 + 0x9ea,(longlong)puVar2 + 0x22f,10);
            bVar1 = false;
          }
        }
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (param_3 == 0x11) {
    FUN_01d30f00(*param_1,&local_83,0x19);
    iVar9 = FUN_01d31a40(*param_1);
    if (iVar9 == 0) {
      if (local_81 == -1) {
        *(undefined8 *)(lVar6 + 0x54f) = 0x3ff0000000000000;
        *(undefined1 *)(lVar6 + 0x495) = 0;
      }
      else {
        *(undefined2 *)(lVar6 + 0x9df) = local_83;
        uVar3 = FUN_0198d420(lVar6,(longlong)local_81);
        *(undefined8 *)(lVar6 + 0x8c3) = uVar3;
        *(undefined1 *)(lVar6 + 0x8cb) = local_7f;
        *(undefined1 *)(lVar6 + 0x8cc) = local_7e;
        *(undefined1 *)(lVar6 + 0x8cd) = local_7d;
        *(undefined1 *)(lVar6 + 0x8ce) = local_7c;
        *(undefined8 *)(lVar6 + 0x9cf) = local_7b;
        *(undefined8 *)(lVar6 + 0x9d7) = local_73;
        *(undefined1 *)(lVar6 + 0x9e1) = local_6b;
        *(undefined8 *)(lVar6 + 0x9e2) = 0;
        *(undefined1 *)(lVar6 + 0x8cf) = 0;
        puVar4 = (undefined8 *)FUN_004095c0(0x23a);
        puVar2 = (undefined8 *)(lVar6 + 0x8c3);
        puVar7 = puVar4;
        for (lVar5 = 0x24; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined4 *)puVar7 = *(undefined4 *)puVar2;
        *(undefined2 *)((longlong)puVar7 + 4) = *(undefined2 *)((longlong)puVar2 + 4);
        *(undefined1 *)((longlong)puVar7 + 6) = *(undefined1 *)((longlong)puVar2 + 6);
        FUN_00415020((longlong)puVar4 + 0x22f,lVar6 + 0x9ea,10);
        FUN_004ae7e0(*(undefined8 *)(lVar6 + 0x470),puVar4);
      }
    }
  }
  else {
    FUN_01d30f00(*param_1,&local_6a,0x17);
    iVar9 = FUN_01d31a40(*param_1);
    if (iVar9 == 0) {
      if (local_68 == -1) {
        *(undefined8 *)(lVar6 + 0x54f) = 0x3ff0000000000000;
        *(undefined1 *)(lVar6 + 0x495) = 0;
      }
      else {
        *(undefined2 *)(lVar6 + 0x9df) = local_6a;
        uVar3 = FUN_0198d420(lVar6,(longlong)local_68);
        *(undefined8 *)(lVar6 + 0x8c3) = uVar3;
        *(undefined1 *)(lVar6 + 0x8cb) = local_66;
        *(undefined1 *)(lVar6 + 0x8cc) = local_65;
        *(undefined1 *)(lVar6 + 0x8cd) = local_66;
        *(undefined1 *)(lVar6 + 0x8ce) = local_65;
        *(undefined8 *)(lVar6 + 0x9cf) = local_64;
        *(undefined8 *)(lVar6 + 0x9d7) = local_5c;
        *(undefined1 *)(lVar6 + 0x9e1) = local_54;
        *(undefined8 *)(lVar6 + 0x9e2) = 0;
        *(undefined1 *)(lVar6 + 0x8cf) = 0;
        puVar4 = (undefined8 *)FUN_004095c0(0x23a);
        puVar2 = (undefined8 *)(lVar6 + 0x8c3);
        puVar7 = puVar4;
        for (lVar5 = 0x24; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar7 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined4 *)puVar7 = *(undefined4 *)puVar2;
        *(undefined2 *)((longlong)puVar7 + 4) = *(undefined2 *)((longlong)puVar2 + 4);
        *(undefined1 *)((longlong)puVar7 + 6) = *(undefined1 *)((longlong)puVar2 + 6);
        FUN_00415020((longlong)puVar4 + 0x22f,lVar6 + 0x9ea,10);
        FUN_004ae7e0(*(undefined8 *)(lVar6 + 0x470),puVar4);
      }
    }
  }
  FUN_00414560(&local_98,2);
  return;
}

