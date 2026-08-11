/* Ghidra address: 018c0110 */
/* Ghidra symbol: FUN_018c0110 */


undefined1 FUN_018c0110(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  undefined1 *local_90;
  longlong *local_88;
  longlong *local_70;
  undefined1 local_65;
  undefined1 local_49;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_20;
  
  local_90 = auStack_c8;
  local_98 = 0;
  local_65 = 1;
  lVar2 = FUN_0188d920();
  if (*(char *)(lVar2 + 8) == '\0') {
    uVar3 = FUN_0180bfb0();
    FUN_01809b60(uVar3,&local_98,L"clNoPrinters");
    FUN_0180dc80(local_98);
    local_65 = 0;
  }
  else {
    param_1[8] = 0x3ff0000000000000;
    if ((*(char *)(param_1[4] + 0x180) == '\0') || (*(longlong *)PTR_DAT_020041e8 == 0)) {
      local_88 = (longlong *)FUN_0196c780(&PTR_FUN_01937ca0,1);
      (**(code **)(*local_88 + 0x10))(local_88,*(undefined8 *)(param_1[4] + 0x228));
      local_49 = *(undefined1 *)(*(longlong *)(param_1[4] + 0x228) + 0x40);
      FUN_01972fd0(param_1[4]);
      if (*(char *)(*(longlong *)(param_1[4] + 0x228) + 0x32) != '\0') {
        local_70 = (longlong *)FUN_0181a5c0(&PTR_FUN_018b1b38,1,*(undefined8 *)PTR_DAT_02004030);
        local_70[0x102] = param_1[4];
        *(undefined1 *)(local_70 + 0x103) = local_49;
        (**(code **)(*local_70 + 0x2d0))(local_70);
        if ((int)local_70[0xa1] != 1) {
          *(undefined4 *)(param_1 + 7) = 0;
          local_65 = 0;
          FUN_018c0760(0,local_90);
          FUN_018c08a0(0,local_90);
          goto LAB_018c0739;
        }
        local_49 = (undefined1)local_70[0x103];
        uVar3 = FUN_0188d920();
        lVar2 = FUN_0188d190(uVar3);
        FUN_00414ad0(*(longlong *)(param_1[4] + 0x228) + 0x20,*(undefined8 *)(lVar2 + 0x60));
        *(undefined1 *)(*(longlong *)(param_1[4] + 0x228) + 0x40) = local_49;
        FUN_00410f20(local_70);
      }
      if (*(longlong *)(*(longlong *)(param_1[4] + 0x228) + 0x38) != 0) {
        uVar3 = FUN_0188d920();
        lVar2 = FUN_0188d190(uVar3);
        FUN_00414ad0(lVar2 + 0x48,*(undefined8 *)(*(longlong *)(param_1[4] + 0x228) + 0x38));
      }
      if (*(char *)(*(longlong *)(param_1[4] + 0x228) + 0x28) != '\0') {
        if (*(int *)(*(longlong *)(param_1[4] + 0x228) + 0x2c) == 0x100) {
          uVar3 = FUN_0188d920();
          plVar4 = (longlong *)FUN_0188d190(uVar3);
          uVar3 = FUN_0188d920();
          lVar2 = FUN_0188d190(uVar3);
          uVar3 = FUN_0188d920();
          lVar5 = FUN_0188d190(uVar3);
          local_a8 = 0;
          (**(code **)(*plVar4 + 0x50))
                    (plVar4,*(undefined4 *)(*(longlong *)(param_1[4] + 0x228) + 0x2c),
                     *(undefined8 *)(lVar2 + 0x80),*(undefined8 *)(lVar5 + 0x78));
        }
        else {
          uVar3 = FUN_0188d920();
          plVar4 = (longlong *)FUN_0188d190(uVar3);
          local_a8 = 0;
          (**(code **)(*plVar4 + 0x50))
                    (plVar4,*(undefined4 *)(*(longlong *)(param_1[4] + 0x228) + 0x2c),0,0);
        }
        uVar3 = FUN_0188d920();
        lVar2 = FUN_0188d190(uVar3);
        if (*(double *)(lVar2 + 0x80) == 0.0) {
          uVar3 = FUN_0188d920();
          lVar2 = FUN_0188d190(uVar3);
          local_38 = *(undefined8 *)(lVar2 + 0x30);
        }
        else {
          uVar3 = FUN_0188d920();
          lVar2 = FUN_0188d190(uVar3);
          local_38 = *(undefined8 *)(lVar2 + 0x80);
        }
        uVar3 = FUN_0188d920();
        lVar2 = FUN_0188d190(uVar3);
        if (*(double *)(lVar2 + 0x78) == 0.0) {
          uVar3 = FUN_0188d920();
          lVar2 = FUN_0188d190(uVar3);
          local_40 = *(undefined8 *)(lVar2 + 0x28);
        }
        else {
          uVar3 = FUN_0188d920();
          lVar2 = FUN_0188d190(uVar3);
          local_40 = *(undefined8 *)(lVar2 + 0x78);
        }
        local_48 = (double)*(int *)(*(longlong *)(param_1[4] + 0x228) + 0x44);
      }
      lVar2 = param_1[4];
      if (*(longlong *)(lVar2 + 0x3f8) != 0) {
        (**(code **)(lVar2 + 0x3f8))(*(undefined8 *)(lVar2 + 0x400),lVar2);
      }
      lVar2 = param_1[4];
      FUN_01973030(lVar2,lVar2,*(undefined8 *)(lVar2 + 0x480),
                   *(char *)(*(longlong *)(lVar2 + 0x1a8) + 9) == '\0');
      plVar4 = *(longlong **)(param_1[4] + 0x210);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x298))(plVar4);
        FUN_0064e770(*(undefined8 *)(param_1[4] + 0x210));
      }
      local_28 = FUN_004b6930(&PTR_FUN_00478280,1);
      local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      uVar3 = FUN_0188d920();
      lVar2 = FUN_0188d190(uVar3);
      if (*(char *)(lVar2 + 0x58) == '\0') {
        FUN_0180dc80(L"Printer selected is not valid");
      }
      else {
        uVar1 = (**(code **)*param_1)(param_1);
        FUN_0180e9b0(*(undefined8 *)(*(longlong *)(param_1[4] + 0x228) + 0x10),local_28,uVar1);
        FUN_018b7df0(param_1);
        FUN_018bfe60(auStack_c8);
      }
      plVar4 = *(longlong **)(param_1[4] + 0x210);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x2a0))(plVar4,1);
      }
      lVar2 = param_1[4];
      if (*(longlong *)(lVar2 + 0x2d8) != 0) {
        (**(code **)(lVar2 + 0x2d8))(*(undefined8 *)(lVar2 + 0x2e0),lVar2);
      }
      *(undefined4 *)(param_1 + 7) = 0;
      (**(code **)(**(longlong **)(param_1[4] + 0x228) + 0x10))
                (*(longlong **)(param_1[4] + 0x228),local_88);
      FUN_00410f20(local_28);
      FUN_00410f20(local_20);
      FUN_00410f20(local_88);
    }
    else {
      FUN_01972fd0(param_1[4]);
      FUN_0197b8d0(*(undefined8 *)PTR_DAT_020041e8,
                   *(undefined1 *)(*(longlong *)(param_1[4] + 0x228) + 0x32));
      *(undefined1 *)(*(longlong *)PTR_DAT_020041e8 + 0xc0) = 1;
      FUN_00414ad0(*(longlong *)PTR_DAT_020041e8 + 0x90,
                   *(undefined8 *)(*(longlong *)(param_1[4] + 0x228) + 0x10));
      local_65 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)PTR_DAT_020041e8);
    }
  }
LAB_018c0739:
  FUN_00414480(&local_98);
  return local_65;
}

