/* Ghidra address: 00dfd310 */
/* Ghidra symbol: FUN_00dfd310 */


void FUN_00dfd310(undefined8 param_1,longlong param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined8 local_48;
  uint local_40 [2];
  undefined1 local_38;
  undefined8 local_30;
  undefined2 local_28 [2];
  undefined4 local_24;
  undefined1 local_20 [4];
  uint local_1c;
  
  local_48 = 0;
  local_30 = 0;
  *(undefined1 *)(param_2 + 0x92) = 3;
  *(undefined8 *)(param_2 + 0x34) = 0x444d41;
  *(undefined2 *)(param_2 + 0x3c) = 0;
  if (param_3 != 0) {
    FUN_00dfc120(param_1,1,0,&local_24,local_28,param_2 + 0x9c,param_2 + 0x14);
    *(char *)(param_2 + 0xa0) = (char)local_28[0];
    *(char *)(param_2 + 0xa1) = local_28[0]._1_1_;
    *(char *)(param_2 + 0xa2) = local_28[1]._1_1_;
    bVar8 = (*(uint *)(param_2 + 0x14) & 0x10000000) != 0;
    *(bool *)(param_2 + 0x91) = bVar8;
    if ((bVar8) && (*(char *)(param_2 + 0x8f) = (char)local_28[1], (char)local_28[1] == '\0')) {
      *(undefined1 *)(param_2 + 0x8f) = 1;
    }
  }
  FUN_00dfc120(param_1,0x80000000,0,&local_1c,local_20,local_20,local_20);
  if (local_1c == 0) {
    FUN_00dfc150(param_1,param_2,param_3);
    cVar1 = *(char *)(param_2 + 0xc);
    if (cVar1 == '\x04') {
      pcVar5 = "Am486(R) or Am5x86";
      puVar6 = (undefined8 *)(param_2 + 0x3e);
      for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *(undefined8 *)pcVar5;
        pcVar5 = pcVar5 + 8;
        puVar6 = puVar6 + 1;
      }
    }
    else if (cVar1 == '\x05') {
      bVar2 = *(byte *)(param_2 + 0xe);
      if (bVar2 < 7) {
        if (bVar2 == 6) {
          puVar6 = (undefined8 *)&DAT_00dfdee2;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 0) {
          pcVar5 = "AMD-K5 (Model 0)";
          puVar6 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *(undefined8 *)pcVar5;
            pcVar5 = pcVar5 + 8;
            puVar6 = puVar6 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 1) {
          pcVar5 = "AMD-K5 (Model 1)";
          puVar6 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *(undefined8 *)pcVar5;
            pcVar5 = pcVar5 + 8;
            puVar6 = puVar6 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 2) {
          pcVar5 = "AMD-K5 (Model 2)";
          puVar6 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *(undefined8 *)pcVar5;
            pcVar5 = pcVar5 + 8;
            puVar6 = puVar6 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 3) {
          pcVar5 = "AMD-K5 (Model 3)";
          puVar6 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *(undefined8 *)pcVar5;
            pcVar5 = pcVar5 + 8;
            puVar6 = puVar6 + 1;
          }
          goto LAB_00dfdc27;
        }
      }
      else {
        if (bVar2 == 7) {
          puVar6 = (undefined8 *)&DAT_00dfdf12;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 8) {
          puVar6 = (undefined8 *)&DAT_00dfdf42;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 9) {
          puVar6 = (undefined8 *)&DAT_00dfdf72;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
      }
      FUN_0041ddd0(&local_30,&PTR_PTR_00dfbf30);
      local_40[0] = (uint)*(byte *)(param_2 + 0xe);
      local_38 = 0;
      FUN_00442db0(param_2 + 0x3e,local_30,local_40,0);
    }
    else {
      if (cVar1 != '\x06') {
        if (cVar1 != '\b') {
          pcVar5 = "Unknown AMD Chip";
          puVar6 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar6 = *(undefined8 *)pcVar5;
            pcVar5 = pcVar5 + 8;
            puVar6 = puVar6 + 1;
          }
        }
        goto LAB_00dfdc27;
      }
      bVar2 = *(byte *)(param_2 + 0xe);
      if (bVar2 < 7) {
        if (bVar2 == 6) {
          puVar6 = &DAT_00dfe062;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 1) {
          puVar6 = &DAT_00dfdfa2;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 2) {
          puVar6 = &DAT_00dfdfd2;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 3) {
          puVar6 = &DAT_00dfe002;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 4) {
          puVar6 = &DAT_00dfe032;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
      }
      else {
        if (bVar2 == 7) {
          puVar6 = &DAT_00dfe092;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 8) {
          puVar6 = &DAT_00dfe0c2;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
        if (bVar2 == 10) {
          puVar6 = &DAT_00dfe0f2;
          puVar7 = (undefined8 *)(param_2 + 0x3e);
          for (lVar4 = 6; lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          goto LAB_00dfdc27;
        }
      }
      FUN_0041ddd0(&local_48,&PTR_PTR_00dfbf30);
      local_40[0] = (uint)*(byte *)(param_2 + 0xe);
      local_38 = 0;
      FUN_00442db0(param_2 + 0x3e,local_48,local_40,0);
    }
  }
  else {
    *(undefined1 *)(param_2 + 10) = 1;
    if (0x80000000 < local_1c) {
      FUN_00dfc120(param_1,0x80000001,0,&local_24,local_28,param_2 + 0x98,param_2 + 0x94);
      *(byte *)(param_2 + 0xc) = (byte)(local_24 >> 8) & 0xf;
      *(char *)(param_2 + 0xe) = (char)((local_24 & 0xf0) >> 4);
      *(byte *)(param_2 + 0x10) = (byte)local_24 & 0xf;
      *(byte *)(param_2 + 0xf) = (byte)(local_24 >> 0x10) & 0xf;
      *(char *)(param_2 + 0xd) = (char)((local_24 & 0xff00000) >> 0x14);
      *(undefined2 *)(param_2 + 0xa3) = local_28[0];
    }
    if (0x80000001 < local_1c) {
      FUN_00dfc120(param_1,0x80000002,0,param_2 + 0x3e,param_2 + 0x42,param_2 + 0x46,param_2 + 0x4a)
      ;
    }
    if (0x80000002 < local_1c) {
      FUN_00dfc120(param_1,0x80000003,0,param_2 + 0x4e,param_2 + 0x52,param_2 + 0x56,param_2 + 0x5a)
      ;
    }
    if (0x80000003 < local_1c) {
      FUN_00dfc120(param_1,0x80000004,0,param_2 + 0x5e,param_2 + 0x62,param_2 + 0x66,param_2 + 0x6a)
      ;
    }
    if (0x80000004 < local_1c) {
      *(undefined1 *)(param_2 + 9) = 1;
      FUN_00dfc120(param_1,0x80000005,0,param_2 + 0xa5,param_2 + 0xa9,param_2 + 0xad,param_2 + 0xb1)
      ;
    }
    if (0x80000005 < local_1c) {
      FUN_00dfc120(param_1,0x80000006,0,param_2 + 0xb5,param_2 + 0xbb,param_2 + 0xbd,param_2 + 0xc1)
      ;
    }
    if (*(char *)(param_2 + 9) != '\0') {
      *(uint *)(param_2 + 0x70) = (uint)*(byte *)(param_2 + 0xb0);
      *(undefined1 *)(param_2 + 0x74) = *(undefined1 *)(param_2 + 0xad);
      *(undefined1 *)(param_2 + 0x75) = *(undefined1 *)(param_2 + 0xaf);
      *(uint *)(param_2 + 0x78) = (uint)*(byte *)(param_2 + 0xb4);
      *(undefined1 *)(param_2 + 0x7c) = *(undefined1 *)(param_2 + 0xb1);
      *(undefined1 *)(param_2 + 0x7d) = *(undefined1 *)(param_2 + 0xb3);
      *(undefined1 *)(param_2 + 0x84) = *(undefined1 *)(param_2 + 0xbd);
      *(byte *)(param_2 + 0x85) = (byte)(*(uint *)(param_2 + 0xbd) >> 0xc) & 0xf;
      *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0xbd) >> 0x10;
      *(undefined1 *)(param_2 + 0x8c) = *(undefined1 *)(param_2 + 0xc1);
      *(byte *)(param_2 + 0x8d) = (byte)(*(uint *)(param_2 + 0xc1) >> 0xc) & 0xf;
      *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0xc1) >> 0x13;
    }
    if (0x80000006 < local_1c) {
      FUN_00dfc120(param_1,0x80000007,0,local_20,local_20,local_20,param_2 + 0xc5);
    }
    if (0x80000007 < local_1c) {
      local_24._0_2_ = local_24._1_2_;
      FUN_00dfc120(param_1,0x80000008,0,local_20,&local_24,local_28,local_20);
      *(byte *)(param_2 + 0xc9) = (byte)local_24;
      *(char *)(param_2 + 0xca) = (char)((ushort)(undefined2)local_24 >> 8);
      *(char *)(param_2 + 0x90) = (char)local_28[0] + '\x01';
    }
  }
LAB_00dfdc27:
  *(bool *)(param_2 + 1) = (*(uint *)(param_2 + 0x14) & 0x800000) != 0;
  if ((*(char *)(param_2 + 10) == '\0') || ((*(uint *)(param_2 + 0x94) & 0x400000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 2) = uVar3;
  if ((*(char *)(param_2 + 10) == '\0') || ((*(uint *)(param_2 + 0x94) & 0x80000000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 3) = uVar3;
  if ((*(char *)(param_2 + 10) == '\0') || ((*(uint *)(param_2 + 0x94) & 0x40000000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 4) = uVar3;
  *(undefined1 *)(param_2 + 5) = 0;
  if ((*(uint *)(param_2 + 0x14) & 0x2000000) != 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 1;
  }
  if ((*(uint *)(param_2 + 0x14) & 0x4000000) != 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  }
  if ((*(uint *)(param_2 + 0x9c) & 1) != 0) {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 4;
  }
  if (*(char *)(param_2 + 10) != '\0') {
    if ((*(uint *)(param_2 + 0x98) & 0x40) != 0) {
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x10;
    }
    if ((*(uint *)(param_2 + 0x98) & 0x800) != 0) {
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 0x40;
    }
  }
  if ((*(char *)(param_2 + 10) == '\0') || ((*(uint *)(param_2 + 0x94) & 0x20000000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 7) = uVar3;
  if ((*(char *)(param_2 + 10) == '\0') || ((*(uint *)(param_2 + 0x94) & 0x100000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_2 + 8) = uVar3;
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  return;
}

