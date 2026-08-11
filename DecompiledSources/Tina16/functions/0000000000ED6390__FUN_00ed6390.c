/* Ghidra address: 00ed6390 */
/* Ghidra symbol: FUN_00ed6390 */


void FUN_00ed6390(longlong param_1,byte param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auStack_658 [32];
  undefined *local_638;
  ulonglong *local_630;
  undefined8 local_628;
  undefined1 *local_620;
  undefined1 local_618;
  longlong local_600;
  int local_5f8;
  byte local_5f1;
  longlong local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined2 local_5a8 [4];
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined4 local_560 [2];
  undefined2 local_558;
  undefined1 uStack_556;
  undefined1 local_550 [8];
  undefined1 local_548 [267];
  undefined1 local_43d;
  undefined4 local_43c;
  longlong local_438;
  byte local_430 [256];
  undefined1 local_330 [256];
  ulonglong local_230 [32];
  byte local_130;
  char local_12f;
  longlong local_30;
  
  local_5e8 = 0;
  local_5d0 = 0;
  local_5e0 = 0;
  local_5d8 = 0;
  local_5b8 = 0;
  local_5c8 = 0;
  local_5c0 = 0;
  local_5b0 = 0;
  local_5a0 = 0;
  local_598 = 0;
  local_590 = 0;
  local_588 = 0;
  local_580 = 0;
  local_578 = 0;
  local_570 = 0;
  local_568 = 0;
  local_30 = *(longlong *)(param_1 + 0x18);
  bVar8 = false;
  *(undefined4 *)(local_30 + 0x990) = 1;
  local_600 = param_3;
  local_5f1 = param_2;
  local_5f0 = param_1;
  FUN_016b9d20(local_30);
  FUN_016b9d80(local_30);
  local_230[0] = local_230[0] & 0xffffffffffffff00;
  FUN_016bd200(local_30,&local_438);
  uVar5 = FUN_00b95c80(local_30 + 0xa80);
  *(undefined8 *)(local_438 + 0x20) = uVar5;
  FUN_016d0140(local_30,0);
  if (local_5f1 < 0x4e) {
    if (local_5f1 == 0x4d) {
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_638 = &DAT_00eda838;
      local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
      FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
      uVar5 = FUN_00b95c80(&local_130);
      *(undefined8 *)(local_438 + 0x10) = uVar5;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"L|W|AD|AS|PD|PS|NRD|NRS|NRG|NRB|M",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdfc0(local_30,&local_130,0);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,&DAT_00eda89c,&DAT_00eda808);
      if (cVar1 != '\0') {
        local_560[0] = 0x46464f03;
        FUN_016bdec0(local_30,local_560,&local_130);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,&DAT_00eda884,&DAT_00eda808);
      if (cVar1 != '\0') {
        local_560[0] = 0x31434903;
        FUN_016bdfc0(local_30,local_560,0);
        local_560[0] = 0x32434903;
        FUN_016bdfc0(local_30,local_560,0);
        local_560[0] = 0x33434903;
        FUN_016bdfc0(local_30,local_560,0);
      }
      goto LAB_00eda66d;
    }
    if (local_5f1 < 0x48) {
      if (local_5f1 == 0x47) {
LAB_00ed6c02:
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,L"POLY",&DAT_00eda808);
        if (cVar1 == '\0') {
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,L"VALUE",&DAT_00eda808);
          if (cVar1 == '\0') {
            local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
            local_630 = (ulonglong *)&local_130;
            cVar1 = FUN_016babb0(local_30,1,L"TABLE",&DAT_00eda808);
            if (cVar1 == '\0') {
              local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
              local_630 = (ulonglong *)&local_130;
              cVar1 = FUN_016babb0(local_30,1,L"LAPLACE",&DAT_00eda808);
              if (cVar1 == '\0') {
                local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
                local_630 = (ulonglong *)&local_130;
                cVar1 = FUN_016babb0(local_30,1,L"FREQ",&DAT_00eda808);
                if (cVar1 == '\0') {
                  iVar2 = FUN_00414f50(&local_130,&DAT_00eda9aa,(ulonglong)local_130 + 1);
                  if (iVar2 == 0) {
                    FUN_016a4020(*(undefined8 *)(local_30 + 0x10),1,&local_130,0xffffffff);
                  }
                  else {
                    local_230[0] = local_230[0] & 0xffffffffffffff00;
                    local_550[0] = 0;
                    local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
                    local_630 = (ulonglong *)0x0;
                    local_628 = 0;
                    local_620 = local_550;
                    local_618 = 0;
                    FUN_016bd780(local_30,local_548,0,local_600);
                    local_550[0] = 0;
                    local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
                    local_630 = (ulonglong *)0x0;
                    local_628 = 0;
                    local_620 = local_550;
                    local_618 = 0;
                    FUN_016bd780(local_30,local_548,0,local_600);
                    local_558 = 0x2302;
                    uStack_556 = 0x31;
                    FUN_016bdfc0(local_30,&local_558,0);
                  }
                }
                else {
                  local_230[0] = CONCAT35(local_230[0]._5_3_,0x5145524604);
                  local_558 = 0x2302;
                  uStack_556 = 0x31;
                  FUN_016be240(local_30,&local_558);
                  FUN_016c1090(local_30,local_438);
                  local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
                  local_630 = (ulonglong *)&local_130;
                  FUN_016babb0(local_30,1,L"MAG|DB",&DAT_00eda808);
                  local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
                  local_630 = (ulonglong *)&local_130;
                  FUN_016babb0(local_30,1,L"DEG|RAD",&DAT_00eda808);
                  local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
                  local_630 = (ulonglong *)&local_130;
                  FUN_016babb0(local_30,1,&DAT_00eda984,&DAT_00eda808);
                  while ((cVar1 = FUN_016b9d70(local_30), cVar1 == '\0' &&
                         (iVar2 = FUN_00414f50(&local_130,&DAT_00eda9a4,(ulonglong)local_130 + 1),
                         iVar2 != 0))) {
                    local_550[0] = 0;
                    FUN_016be360(local_30,local_550);
                    local_550[0] = 0;
                    FUN_016be360(local_30,local_550);
                    local_550[0] = 0;
                    FUN_016be360(local_30,local_550);
                    local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
                    local_630 = (ulonglong *)&local_130;
                    FUN_016babb0(local_30,1,L"DELAY",&DAT_00eda808);
                  }
                }
              }
              else {
                local_230[0] = 0x4543414c50414c07;
                local_558 = 0x2302;
                uStack_556 = 0x31;
                FUN_016be240(local_30,&local_558);
                FUN_016c1090(local_30,local_438);
                local_558 = 0x2302;
                uStack_556 = 0x32;
                FUN_016be240(local_30,&local_558);
              }
            }
            else {
              local_230[0] = CONCAT26(local_230[0]._6_2_,0x454c42415405);
              local_558 = 0x2302;
              uStack_556 = 0x31;
              FUN_016be240(local_30,&local_558);
              FUN_016c1090(local_30,local_438);
              while (cVar1 = FUN_016b9d70(local_30), cVar1 == '\0') {
                local_550[0] = 0;
                FUN_016be360(local_30,local_550);
                local_550[0] = 0;
                FUN_016be360(local_30,local_550);
              }
            }
          }
          else {
            local_230[0] = CONCAT26(local_230[0]._6_2_,0x45554c415605);
            local_558 = 0x2302;
            uStack_556 = 0x31;
            FUN_016be240(local_30,&local_558);
            FUN_016c1090(local_30,local_438);
          }
        }
        else {
          local_230[0] = CONCAT35(local_230[0]._5_3_,0x594c4f5004);
          iVar2 = FUN_016baff0(local_30,1,0x7f);
          if (0 < iVar2) {
            do {
              local_550[0] = 0;
              local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
              local_630 = (ulonglong *)0x0;
              local_628 = 0;
              local_620 = local_550;
              local_618 = 0;
              FUN_016bd780(local_30,local_548,0,local_600);
              local_550[0] = 0;
              local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
              local_630 = (ulonglong *)0x0;
              local_628 = 0;
              local_620 = local_550;
              local_618 = 0;
              FUN_016bd780(local_30,local_548,0,local_600);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          local_550[0] = 0;
          FUN_016be360(local_30,local_550);
          while (cVar1 = FUN_016b9d70(local_30), cVar1 == '\0') {
            local_550[0] = 0;
            FUN_016be360(local_30,local_550);
          }
        }
        uVar5 = FUN_00b95c80(local_230);
        *(undefined8 *)(local_438 + 0x10) = uVar5;
        goto LAB_00eda66d;
      }
      if (local_5f1 < 0x45) {
        if (local_5f1 == 0x44) {
          local_550[0] = 0;
          local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
          local_630 = (ulonglong *)0x0;
          local_628 = 0;
          local_620 = local_550;
          local_618 = 0;
          FUN_016bd780(local_30,local_548,0,local_600);
          local_550[0] = 0;
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)0x0;
          local_628 = 0;
          local_620 = local_550;
          local_618 = 0;
          FUN_016bd780(local_30,local_548,0,local_600);
          local_638 = &DAT_00eda838;
          local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
          FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
          uVar5 = FUN_00b95c80(&local_130);
          *(undefined8 *)(local_438 + 0x10) = uVar5;
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,L"AREA",&DAT_00eda808);
          if (cVar1 == '\0') {
            FUN_016be0b0(local_30,&DAT_00eda86e);
          }
          else {
            FUN_016be0b0(local_30,&DAT_00eda86e);
          }
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,&DAT_00eda89c,&DAT_00eda808);
          if (cVar1 != '\0') {
            local_560[0] = 0x46464f03;
            FUN_016bdec0(local_30,local_560,&local_130);
          }
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,&DAT_00eda884,&DAT_00eda808);
          if (cVar1 != '\0') {
            local_560[0] = 0x31434903;
            FUN_016bdfc0(local_30,local_560,0);
          }
          goto LAB_00eda66d;
        }
        if (local_5f1 == 0x42) {
          local_550[0] = 0;
          local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
          local_630 = (ulonglong *)0x0;
          local_628 = 0;
          local_620 = local_550;
          local_618 = 0;
          FUN_016bd780(local_30,local_548,0,local_600);
          local_550[0] = 0;
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)0x0;
          local_628 = 0;
          local_620 = local_550;
          local_618 = 0;
          FUN_016bd780(local_30,local_548,0,local_600);
          FUN_016b9cc0(local_30,0);
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,&DAT_00eda800,&DAT_00eda808);
          if (cVar1 == '\0') {
            FUN_016b9cc0(local_30,1);
            local_550[0] = 0;
            local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
            local_630 = (ulonglong *)0x0;
            local_628 = 0;
            local_620 = local_550;
            local_618 = 0;
            FUN_016bd780(local_30,local_548,0,local_600);
            local_638 = &DAT_00eda838;
            local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
            FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
            uVar5 = FUN_00b95c80(&local_130);
            *(undefined8 *)(local_438 + 0x10) = uVar5;
            local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
            local_630 = (ulonglong *)&local_130;
            cVar1 = FUN_016babb0(local_30,1,L"AREA",&DAT_00eda808);
            if (cVar1 == '\0') {
              FUN_016be0b0(local_30,&DAT_00eda86e);
            }
            else {
              FUN_016be0b0(local_30,&DAT_00eda86e);
            }
          }
          else {
            FUN_016b9cc0(local_30,1);
            FUN_016be190(local_30,&local_130);
            FUN_016c1090(local_30,local_438);
            uVar5 = FUN_00b95c80(&local_130);
            *(undefined8 *)(local_438 + 0x10) = uVar5;
          }
          goto LAB_00eda66d;
        }
        if (local_5f1 == 0x43) goto LAB_00ed687e;
      }
      else {
        if (local_5f1 == 0x45) goto LAB_00ed6c02;
        if (local_5f1 == 0x46) goto LAB_00ed7316;
      }
    }
    else if (local_5f1 < 0x4b) {
      if (local_5f1 == 0x4a) {
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_638 = &DAT_00eda838;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x10) = uVar5;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,L"AREA",&DAT_00eda808);
        if (cVar1 == '\0') {
          FUN_016be0b0(local_30,&DAT_00eda86e);
        }
        else {
          FUN_016be0b0(local_30,&DAT_00eda86e);
        }
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,&DAT_00eda89c,&DAT_00eda808);
        if (cVar1 != '\0') {
          local_560[0] = 0x46464f03;
          FUN_016bdec0(local_30,local_560,&local_130);
        }
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,&DAT_00eda884,&DAT_00eda808);
        if (cVar1 != '\0') {
          local_560[0] = 0x31434903;
          FUN_016bdfc0(local_30,local_560,0);
          local_560[0] = 0x32434903;
          FUN_016bdfc0(local_30,local_560,0);
        }
        goto LAB_00eda66d;
      }
      if (local_5f1 == 0x48) {
LAB_00ed7316:
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,L"POLY",&DAT_00eda808);
        if (cVar1 == '\0') {
          local_230[0] = local_230[0] & 0xffffffffffffff00;
          local_638 = &DAT_00eda9c4;
          local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
          FUN_016ba960(local_30,&local_130,0,&DAT_00eda9c0);
          FUN_004169a0(&local_570,&local_130);
          (**(code **)(**(longlong **)(local_438 + 0x58) + 0x78))
                    (*(longlong **)(local_438 + 0x58),local_570);
          local_558 = 0x2302;
          uStack_556 = 0x31;
          FUN_016bdfc0(local_30,&local_558,0);
        }
        else {
          local_230[0] = CONCAT35(local_230[0]._5_3_,0x594c4f5004);
          iVar2 = FUN_016baff0(local_30,1,0x7f);
          if (0 < iVar2) {
            do {
              local_638 = &DAT_00eda9c4;
              local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
              FUN_016ba960(local_30,&local_130,0,&DAT_00eda9c0);
              FUN_004169a0(&local_568,&local_130);
              (**(code **)(**(longlong **)(local_438 + 0x58) + 0x78))
                        (*(longlong **)(local_438 + 0x58),local_568);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          local_550[0] = 0;
          FUN_016be360(local_30,local_550);
          while (cVar1 = FUN_016b9d70(local_30), cVar1 == '\0') {
            local_550[0] = 0;
            FUN_016be360(local_30,local_550);
          }
        }
        uVar5 = FUN_00b95c80(local_230);
        *(undefined8 *)(local_438 + 0x10) = uVar5;
        goto LAB_00eda66d;
      }
      if (local_5f1 == 0x49) goto LAB_00ed7587;
    }
    else {
      if (local_5f1 == 0x4b) {
        local_638 = &DAT_00eda9c4;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&PTR_DAT_00edaaa0);
        if (local_12f != 'L') {
          FUN_016a4020(*(undefined8 *)(local_30 + 0x10),1,&local_130,0xffffffff);
        }
        FUN_004169a0(&local_590,&local_130);
        (**(code **)(**(longlong **)(local_438 + 0x58) + 0x78))
                  (*(longlong **)(local_438 + 0x58),local_590);
        while( true ) {
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,0,&DAT_00edaab4,&DAT_00eda9c4);
          if (cVar1 == '\0') break;
          FUN_004169a0(&local_598,&local_130);
          (**(code **)(**(longlong **)(local_438 + 0x58) + 0x78))(*(longlong **)(local_438 + 0x58));
        }
        local_558 = 0x2302;
        uStack_556 = 0x31;
        FUN_016bdfc0(local_30,&local_558,0);
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,0,&DAT_00eda834,&DAT_00eda838);
        if (cVar1 != '\0') {
          uVar5 = FUN_00b95c80(&local_130);
          *(undefined8 *)(local_438 + 0x10) = uVar5;
          local_558 = 0x2302;
          uStack_556 = 0x32;
          FUN_016be0b0(local_30,&local_558);
        }
        goto LAB_00eda66d;
      }
      if (local_5f1 == 0x4c) {
LAB_00ed687e:
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_558 = 0x2302;
        uStack_556 = 0x31;
        cVar1 = FUN_016be0b0(local_30,&local_558);
        if (cVar1 == '\0') {
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,0,&DAT_00eda834,&DAT_00eda838);
          if (cVar1 != '\0') {
            uVar5 = FUN_00b95c80(&local_130);
            *(undefined8 *)(local_438 + 0x10) = uVar5;
          }
          local_558 = 0x2302;
          uStack_556 = 0x31;
          FUN_016bdfc0(local_30,&local_558,0);
        }
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,&DAT_00eda884,&DAT_00eda808);
        bVar8 = false;
        if (cVar1 != '\0') {
          local_560[0] = 0x31434903;
          FUN_016bdfc0(local_30,local_560,0);
          bVar8 = false;
        }
        goto LAB_00eda66d;
      }
    }
  }
  else if (local_5f1 < 0x55) {
    if (local_5f1 == 0x54) {
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"Z0|ZO|LEN",&DAT_00edabe4);
      if (cVar1 == '\0') {
        local_638 = &DAT_00eda838;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x10) = uVar5;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,&DAT_00eda884,&DAT_00eda808);
        if (cVar1 == '\0') {
          local_560[0] = 0x4e454c03;
          FUN_016be0b0(local_30,local_560);
        }
        else {
          local_560[0] = 0x31564903;
          FUN_016bdfc0(local_30,local_560,0);
          local_560[0] = 0x31434903;
          FUN_016bdfc0(local_30,local_560,0);
          local_560[0] = 0x32564903;
          FUN_016bdfc0(local_30,local_560,0);
          local_560[0] = 0x32434903;
          FUN_016bdfc0(local_30,local_560,0);
        }
      }
      else {
        iVar2 = FUN_00414f50(&local_130,&DAT_00edac0c,(ulonglong)local_130 + 1);
        if (iVar2 == 0) {
          FUN_016b9df0(local_30);
          local_638 = &DAT_00eda808;
          local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
          FUN_016ba960(local_30,&local_130,1,&DAT_00edac1c);
          local_560[0] = 0x4e454c03;
          FUN_016bdfc0(local_30,local_560,0);
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,L"R|L|G|C",&DAT_00eda808);
          if (cVar1 != '\0') {
            FUN_016bdfc0(local_30,&local_130,0);
          }
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,L"R|L|G|C",&DAT_00eda808);
          if (cVar1 != '\0') {
            FUN_016bdfc0(local_30,&local_130,0);
          }
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,L"R|L|G|C",&DAT_00eda808);
          if (cVar1 != '\0') {
            FUN_016bdfc0(local_30,&local_130,0);
          }
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,L"R|L|G|C",&DAT_00eda808);
          if (cVar1 != '\0') {
            FUN_016bdfc0(local_30,&local_130,0);
          }
        }
        else {
          FUN_016b9df0(local_30);
          local_638 = &DAT_00edabe4;
          local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
          FUN_016ba960(local_30,&local_130,1,L"Z0|ZO");
          local_558 = 0x5a02;
          uStack_556 = 0x30;
          FUN_016bdfc0(local_30,&local_558,0);
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,&DAT_00edac68,&DAT_00eda808);
          if (cVar1 == '\0') {
            local_638 = &DAT_00eda808;
            local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
            FUN_016ba960(local_30,&local_130,1,&DAT_00edac80);
            local_5a8[0] = 0x4601;
            FUN_016bdfc0(local_30,local_5a8,0);
            local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
            local_630 = (ulonglong *)&local_130;
            cVar1 = FUN_016babb0(local_30,1,&DAT_00edac94,&DAT_00eda808);
            if (cVar1 != '\0') {
              local_558 = 0x4e02;
              uStack_556 = 0x4c;
              FUN_016bdfc0(local_30,&local_558,0);
            }
          }
          else {
            local_558 = 0x5402;
            uStack_556 = 0x44;
            FUN_016bdfc0(local_30,&local_558,0);
          }
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,1,&DAT_00eda884,&DAT_00eda808);
          if (cVar1 != '\0') {
            local_560[0] = 0x31564903;
            FUN_016bdfc0(local_30,local_560,0);
            local_560[0] = 0x31434903;
            FUN_016bdfc0(local_30,local_560,0);
            local_560[0] = 0x32564903;
            FUN_016bdfc0(local_30,local_560,0);
            local_560[0] = 0x32434903;
            FUN_016bdfc0(local_30,local_560,0);
          }
        }
      }
      goto LAB_00eda66d;
    }
    if (local_5f1 < 0x52) {
      if (local_5f1 == 0x51) {
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        cVar1 = FUN_016ba100(local_30,0x5b);
        if (cVar1 == '\0') {
          local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,0,&DAT_00edab54,&DAT_00eda838);
          if (cVar1 == '\0') {
            FUN_016b9dd0(local_30,&local_43c,&local_43d);
            local_638 = &DAT_00eda9c4;
            local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
            FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
            local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
            local_630 = local_230;
            FUN_016babb0(local_30,0,&DAT_00eda834,&DAT_00edab58);
            FUN_016b9e10(local_30,local_43c,local_43d);
            if ((char)local_230[0] != '\0') {
              FUN_004169a0(&local_5a0,local_230);
              cVar1 = FUN_00ed62c0(auStack_658,local_5a0);
              if (((cVar1 == '\0') &&
                  (iVar2 = FUN_00414f50(local_230,&DAT_00eda8a4,(local_230[0] & 0xff) + 1),
                  iVar2 != 0)) &&
                 ((iVar2 = FUN_00414f50(local_230,&DAT_00edab78,(local_230[0] & 0xff) + 1),
                  iVar2 != 0 &&
                  (((iVar2 = FUN_00414f50(local_230,&DAT_00edab7b,(local_230[0] & 0xff) + 1),
                    iVar2 != 0 &&
                    (iVar2 = FUN_00414f50(local_230,&DAT_00edab80,(local_230[0] & 0xff) + 1),
                    iVar2 != 0)) &&
                   (iVar2 = FUN_00414f50(local_230,&DAT_00eda86e,(local_230[0] & 0xff) + 1),
                   iVar2 != 0)))))) {
                local_550[0] = 0;
                local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
                local_630 = (ulonglong *)0x0;
                local_628 = 0;
                local_620 = local_550;
                local_618 = 0;
                FUN_016bd780(local_30,local_548,0,local_600);
                local_638 = &DAT_00eda838;
                local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
                FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
                goto LAB_00ed8b27;
              }
            }
            local_638 = &DAT_00eda838;
            local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
            FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
          }
          else {
            FUN_016b9df0(local_30);
            local_550[0] = 0;
            local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
            local_630 = (ulonglong *)0x0;
            local_628 = 0;
            local_620 = local_550;
            local_618 = 0;
            FUN_016bd780(local_30,local_548,0,local_600);
            local_638 = &DAT_00eda838;
            local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
            FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
          }
        }
        else {
          local_550[0] = 0;
          local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
          local_630 = (ulonglong *)0x0;
          local_628 = 0;
          local_620 = local_550;
          local_618 = 0;
          FUN_016bd780(local_30,local_548,0,local_600);
          FUN_016b9f90(local_30,0x5d);
          local_638 = &DAT_00eda838;
          local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
          FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        }
LAB_00ed8b27:
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x10) = uVar5;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,L"AREA",&DAT_00eda808);
        if (cVar1 == '\0') {
          FUN_016be0b0(local_30,&DAT_00eda86e);
        }
        else {
          FUN_016be0b0(local_30,&DAT_00eda86e);
        }
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,&DAT_00eda89c,&DAT_00eda808);
        if (cVar1 != '\0') {
          local_560[0] = 0x46464f03;
          FUN_016bdec0(local_30,local_560,&local_130);
        }
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,&DAT_00eda884,&DAT_00eda808);
        if (cVar1 != '\0') {
          local_560[0] = 0x31434903;
          FUN_016bdfc0(local_30,local_560,0);
          local_560[0] = 0x32434903;
          FUN_016bdfc0(local_30,local_560,0);
        }
        goto LAB_00eda66d;
      }
      if (local_5f1 == 0x4e) {
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_638 = &DAT_00eda838;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x10) = uVar5;
        local_638 = &DAT_00eda808;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,1,L"DGTLNET");
        local_638 = &DAT_00eda9c4;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        FUN_016bdec0(local_30,&DAT_00edab28,&local_130);
        local_638 = &DAT_00eda838;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x60) = uVar5;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,&DAT_00edab3c,&DAT_00eda808);
        if (cVar1 != '\0') {
          local_558 = 0x4902;
          uStack_556 = 0x53;
          FUN_016bdfc0(local_30,&local_558,0);
        }
        goto LAB_00eda66d;
      }
      if (local_5f1 == 0x4f) {
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_638 = &DAT_00eda838;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x10) = uVar5;
        local_638 = &DAT_00eda808;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,1,L"DGTLNET");
        local_638 = &DAT_00eda9c4;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        FUN_016bdec0(local_30,&DAT_00edab28,&local_130);
        local_638 = &DAT_00eda838;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x60) = uVar5;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,&DAT_00edab3c,&DAT_00eda808);
        if (cVar1 != '\0') {
          local_558 = 0x4902;
          uStack_556 = 0x53;
          FUN_016bdfc0(local_30,&local_558,0);
        }
        goto LAB_00eda66d;
      }
    }
    else {
      if (local_5f1 == 0x52) {
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_558 = 0x2302;
        uStack_556 = 0x31;
        cVar1 = FUN_016be0b0(local_30,&local_558);
        if (cVar1 == '\0') {
          local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
          local_630 = (ulonglong *)&local_130;
          cVar1 = FUN_016babb0(local_30,0,&DAT_00eda834,&DAT_00eda838);
          if (cVar1 != '\0') {
            uVar5 = FUN_00b95c80(&local_130);
            *(undefined8 *)(local_438 + 0x10) = uVar5;
          }
          local_558 = 0x2302;
          uStack_556 = 0x31;
          FUN_016bdfc0(local_30,&local_558,0);
        }
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,&DAT_00edab90,&DAT_00eda808);
        if (cVar1 != '\0') {
          local_560[0] = 0x31435403;
          FUN_016bdfc0(local_30,local_560,0);
          local_560[0] = 0x32435403;
          FUN_016be0b0(local_30,local_560);
        }
        goto LAB_00eda66d;
      }
      if (local_5f1 == 0x53) {
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        local_638 = &DAT_00eda838;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x10) = uVar5;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,L"ON|OFF",&DAT_00eda808);
        if (cVar1 != '\0') {
          FUN_016bdec0(local_30,&DAT_00edabba,&local_130);
        }
        goto LAB_00eda66d;
      }
    }
  }
  else if (local_5f1 < 0x58) {
    if (local_5f1 == 0x57) {
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_638 = &DAT_00eda9c4;
      local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
      FUN_016ba960(local_30,&local_130,0,&DAT_00eda9c0);
      FUN_004169a0(&local_5e8,&local_130);
      (**(code **)(**(longlong **)(local_438 + 0x58) + 0x78))
                (*(longlong **)(local_438 + 0x58),local_5e8);
      local_638 = &DAT_00eda838;
      local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
      FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
      uVar5 = FUN_00b95c80(&local_130);
      *(undefined8 *)(local_438 + 0x10) = uVar5;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"ON|OFF",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016bdec0(local_30,&DAT_00edabba,&local_130);
      }
      goto LAB_00eda66d;
    }
    if (local_5f1 == 0x55) {
      iVar2 = 1;
      iVar4 = 1;
      local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,
                           L"INV3|AND3|NAND3|OR3|NOR3|XOR3|NXOR3|INV3A|AND3A|NAND3A|OR3A|NOR3A|XOR3A|NXOR3A|NBTG|PBTG|PULLUP|PULLDN|DLYLINE|ROM|RAM|CONSTRAINT|FSTIM|PLAND|PLOR|PLXOR|PLNAND|PLNOR|PLNXOR|PLANDC|PLORC|PLXORC|PLNANDC|PLNORC|PLNXORC|ADC|DAC|AO|OA|AOI|OAI"
                           ,&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016a4020(*(undefined8 *)(local_30 + 0x10),1,&local_130,0xffffffff);
      }
      local_638 = &DAT_00edabe4;
      local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
      FUN_016ba960(local_30,&local_130,1,
                   L"BUF|INV|XOR|NXOR|AND|NAND|OR|NOR|BUFA|INVA|XORA|NXORA|ANDA|NANDA|ORA|NORA|BUF3|BUF3A|JKFF|DFF|SRFF|DLTCH|STIM|LOGICEXP|PINDLY"
                  );
      iVar3 = FUN_00414f50(&local_130,&DAT_00edaf90,(ulonglong)local_130 + 1);
      bVar7 = iVar3 == 0;
      FUN_00414ff0(local_430,&local_130);
      uVar5 = FUN_00b95c80(&local_130);
      *(undefined8 *)(local_438 + 0x58) = uVar5;
      cVar1 = FUN_016ba860(local_30,&local_130,
                           L"AND|NAND|OR|NOR|BUFA|INVA|XORA|NXORA|ANDA|NANDA|ORA|NORA|BUF3A|JKFF|DFF|SRFF|DLTCH|STIM|LOGICEXP|PINDLY"
                          );
      if (cVar1 != '\0') {
        iVar2 = FUN_016baff0(local_30,1,0x7fffffff);
      }
      cVar1 = FUN_016ba860(local_30,&local_130,L"XOR|NXOR");
      if (cVar1 != '\0') {
        iVar2 = 2;
      }
      cVar1 = FUN_016ba860(local_30,&local_130,L"ANDA|NANDA|ORA|NORA|STIM|LOGICEXP");
      if (cVar1 != '\0') {
        iVar4 = FUN_016baff0(local_30,1,0x7fffffff);
      }
      cVar1 = FUN_016ba860(local_30,&local_130,L"PINDLY");
      if (cVar1 != '\0') {
        iVar4 = FUN_016baff0(local_30,0,0x7fffffff);
      }
      cVar1 = FUN_016ba860(local_30,&local_130,L"PINDLY");
      if (cVar1 != '\0') {
        local_5f8 = FUN_016baff0(local_30,0,0x7fffffff);
      }
      iVar3 = FUN_00414f50(&local_130,&DAT_00edaf90,(ulonglong)local_130 + 1);
      if ((iVar3 == 0) && ((iVar2 != 1 || (iVar4 != 1)))) {
        FUN_016a4020(*(undefined8 *)(local_30 + 0x10),1,&DAT_00edaf90,0xffffffff);
      }
      local_550[0] = 0;
      if ((*(char *)(local_30 + 0x9a9) == '\0') || (bVar7)) {
        local_618 = 0;
      }
      else {
        local_618 = 1;
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_550[0] = 0;
      if ((*(char *)(local_30 + 0x9a9) == '\0') || (bVar7)) {
        local_618 = 0;
      }
      else {
        local_618 = 1;
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      FUN_016bd780(local_30,local_548,0,local_600);
      *(int *)(local_438 + 0x68) = iVar2;
      *(int *)(local_438 + 0x6c) = iVar4;
      *(int *)(local_438 + 0x70) = local_5f8;
      cVar1 = FUN_016ba860(local_30,&local_130,L"JKFF|DFF|SRFF|DLTCH");
      if (cVar1 == '\0') {
        cVar1 = FUN_016ba860(local_30,&local_130,L"LOGICEXP");
        if (cVar1 != '\0') {
          iVar2 = iVar2 + iVar4;
        }
        cVar1 = FUN_016ba860(local_30,&local_130,L"PINDLY");
        if (cVar1 != '\0') {
          iVar2 = iVar2 * 2 + iVar4 + local_5f8;
        }
        cVar1 = FUN_016ba860(local_30,&local_130,L"BUFA|INVA|XORA|NXORA|BUF3A");
        if (cVar1 != '\0') {
          iVar2 = iVar2 * 2;
        }
        cVar1 = FUN_016ba860(local_30,&local_130,L"ANDA|NANDA|ORA|NORA");
        if (cVar1 != '\0') {
          iVar2 = iVar2 * iVar4 + iVar4;
        }
        cVar1 = FUN_016ba860(local_30,&local_130,L"BUF|INV|XOR|NXOR|AND|NAND|OR|NOR|BUF3A");
        if (cVar1 != '\0') {
          iVar2 = iVar2 + 1;
        }
        iVar4 = FUN_00414f50(&local_130,&DAT_00edb232,(ulonglong)local_130 + 1);
        if (iVar4 == 0) {
          iVar2 = iVar2 + 2;
        }
        if (0 < iVar2) {
          do {
            local_550[0] = 0;
            if ((*(char *)(local_30 + 0x9a9) == '\0') || (bVar7)) {
              local_618 = 0;
            }
            else {
              local_618 = 1;
            }
            local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
            local_630 = (ulonglong *)0x0;
            local_628 = 0;
            local_620 = local_550;
            FUN_016bd780(local_30,local_548,0,local_600);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        iVar4 = FUN_00414f50(&local_130,&DAT_00edb134,(ulonglong)local_130 + 1);
        if ((iVar4 == 0) ||
           (iVar4 = FUN_00414f50(&local_130,&DAT_00edb13a,(ulonglong)local_130 + 1), iVar4 == 0)) {
          iVar2 = iVar2 * 3;
        }
        else {
          iVar2 = iVar2 * 4;
        }
        iVar2 = iVar2 + 3;
        if (0 < iVar2) {
          do {
            local_550[0] = 0;
            if ((*(char *)(local_30 + 0x9a9) == '\0') || (bVar7)) {
              local_618 = 0;
            }
            else {
              local_618 = 1;
            }
            local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
            local_630 = (ulonglong *)0x0;
            local_628 = 0;
            local_620 = local_550;
            FUN_016bd780(local_30,local_548,0,local_600);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      iVar2 = FUN_00414f50(&local_130,&DAT_00edaf90,(ulonglong)local_130 + 1);
      if (iVar2 == 0) {
        local_638 = &DAT_00eda838;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00edb244);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x60) = uVar5;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,L"IO_LEVEL",&DAT_00eda808);
        if (cVar1 != '\0') {
          FUN_016bdf20(local_30,&DAT_00edb266,0,4);
        }
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,L"TIMESTEP",&DAT_00eda808);
        if (cVar1 != '\0') {
          FUN_016bdfc0(local_30,&DAT_00edb28e,0);
        }
        FUN_016c00d0(local_30);
      }
      else {
        iVar2 = FUN_00414f50(local_430,&DAT_00edb297,(ulonglong)local_430[0] + 1);
        if (iVar2 != 0) {
          local_638 = &DAT_00eda838;
          local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
          FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
          uVar5 = FUN_00b95c80(&local_130);
          *(undefined8 *)(local_438 + 0x10) = uVar5;
        }
        local_638 = &DAT_00eda838;
        local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
        FUN_016ba960(local_30,&local_130,0,&DAT_00edb244);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x60) = uVar5;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,L"MNTYMXDLY",&DAT_00eda808);
        if (cVar1 != '\0') {
          FUN_016bdf20(local_30,&DAT_00edb2c0,0,4);
        }
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)&local_130;
        cVar1 = FUN_016babb0(local_30,1,L"IO_LEVEL",&DAT_00eda808);
        if (cVar1 != '\0') {
          FUN_016bdf20(local_30,&DAT_00edb266,0,4);
        }
        iVar2 = FUN_00414f50(local_430,&DAT_00edb2ca,(ulonglong)local_430[0] + 1);
        bVar8 = iVar2 == 0;
        if (bVar8) {
          local_638 = &DAT_00edb2ee;
          local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
          FUN_016ba960(local_30,local_548,1,L"LOGIC:");
          FUN_016ba340(local_30,&local_5b0);
          FUN_00415dd0(local_438 + 0x78,local_5b0,0);
          FUN_016c2f90(local_30,local_438,local_600);
        }
        iVar2 = FUN_00414f50(local_430,&DAT_00edb297,(ulonglong)local_430[0] + 1);
        if (iVar2 == 0) {
          FUN_016c3410(local_30,local_438,local_600);
          bVar8 = true;
        }
      }
      goto LAB_00eda66d;
    }
    if (local_5f1 == 0x56) {
LAB_00ed7587:
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638._1_7_ << 8);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_550[0] = 0;
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)0x0;
      local_628 = 0;
      local_620 = local_550;
      local_618 = 0;
      FUN_016bd780(local_30,local_548,0,local_600);
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,&DAT_00eda9f0,&DAT_00eda808);
      if (cVar1 == '\0') {
        local_558 = 0x2302;
        uStack_556 = 0x31;
        cVar1 = FUN_016be0b0(local_30,&local_558);
        if (cVar1 != '\0') {
          local_230[0] = CONCAT53(local_230[0]._3_5_,0x434402);
        }
      }
      else {
        local_558 = 0x2302;
        uStack_556 = 0x31;
        FUN_016bdfc0(local_30,&local_558,0);
        local_230[0] = CONCAT53(local_230[0]._3_5_,0x434402);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,&PTR_DAT_00edaa08,&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_004154b0(&local_578,local_230,0);
        FUN_004155b0(&local_578,&DAT_00edaa1c);
        FUN_00415560(local_230,local_578,0xff);
        local_558 = 0x2302;
        uStack_556 = 0x32;
        FUN_016bdfc0(local_30,&local_558,0);
        local_558 = 0x2302;
        uStack_556 = 0x33;
        FUN_016be0b0(local_30,&local_558);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"STIMULUS",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016a4020(*(undefined8 *)(local_30 + 0x10),1,&local_130,0xffffffff);
      }
      local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"EXP|PULSE|PWL|SFFM|SIN",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_004154b0(&local_580,local_230,0);
        FUN_004155b0(&local_580,&DAT_00edaa8c);
        FUN_00415560(local_230,local_580,0xff);
        uVar5 = FUN_00b95c80(&local_130);
        *(undefined8 *)(local_438 + 0x18) = uVar5;
        FUN_016be470(local_30,&local_130,1);
      }
      FUN_004169a0(&local_588,local_230);
      iVar2 = FUN_004170c0(&PTR_DAT_00edaa08,local_588,1);
      if ((0 < iVar2) && (*(char *)(local_30 + 0xa80) == '\0')) {
        *(int *)(local_30 + 0x99c) = *(int *)(local_30 + 0x99c) + 1;
      }
      uVar5 = FUN_00b95c80(local_230);
      *(undefined8 *)(local_438 + 0x10) = uVar5;
      goto LAB_00eda66d;
    }
  }
  else {
    if (local_5f1 == 0x58) {
      FUN_016ba220(local_30,local_230,&DAT_00eda838,1);
      FUN_016ba220(local_30,&local_130,&DAT_00eda838,0);
      while (((local_130 != 0 &&
              (iVar2 = FUN_00414f50(&local_130,&DAT_00edb30e,(ulonglong)local_130 + 1), iVar2 != 0))
             && (iVar2 = FUN_00414f50(&local_130,&DAT_00edb315,(ulonglong)local_130 + 1), iVar2 != 0
                ))) {
        FUN_016b9df0(local_30);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        FUN_016ba220(local_30,local_230,&DAT_00eda838,1);
        FUN_016ba220(local_30,&local_130,&DAT_00eda838,0);
      }
      uVar5 = FUN_00b95c80(local_230);
      *(undefined8 *)(local_438 + 0x10) = uVar5;
      iVar2 = FUN_00414f50(local_230,&DAT_00edb31a,(local_230[0] & 0xff) + 1);
      if ((iVar2 == 0) && (0 < *(int *)(*(longlong *)(local_30 + 0xa30) + 0x10))) {
        lVar6 = FUN_01d347d0(*(undefined8 *)(local_30 + 0xa30),0);
        FUN_00414ff0(local_330,*(undefined8 *)(lVar6 + 8));
        if (local_600 != 0) {
          FUN_004154b0(&local_5c0,local_330,0);
          FUN_004156b0(&local_5b8,"DIGIFPWR=$G_DPWR;",local_5c0);
          FUN_00416880(&local_5c8,local_5b8);
          iVar2 = (**(code **)(**(longlong **)(local_600 + 0x430) + 0xb0))
                            (*(longlong **)(local_600 + 0x430),local_5c8);
          if (iVar2 == -1) {
            FUN_004154b0(&local_5d8,local_330,0);
            FUN_004156b0(&local_5d0,"DIGIFPWR=$G_DPWR;",local_5d8);
            FUN_00416880(&local_5e0,local_5d0);
            (**(code **)(**(longlong **)(local_600 + 0x430) + 0x78))
                      (*(longlong **)(local_600 + 0x430),local_5e0);
          }
        }
      }
      FUN_016b9df0(local_30);
      FUN_016ba220(local_30,local_548,&DAT_00eda838,1);
      local_638._0_1_ = 0x3a;
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"PARAMS",&DAT_00eda808);
      if (cVar1 != '\0') {
        local_638._0_1_ = 0x3a;
        local_630 = (ulonglong *)&local_130;
        FUN_016babb0(local_30,1,L"PARAMS",&DAT_00eda808);
        FUN_016ba220(local_30,&local_130,&DAT_00edabe4,1);
        FUN_016b9df0(local_30);
        if (local_130 != 0) {
          local_638._0_1_ = 0xe4;
          local_638._1_7_ = 0xedab;
          local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
          FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
          FUN_016bdfc0(local_30,&local_130,0);
          FUN_016ba220(local_30,&local_130,&DAT_00edabe4,1);
          while (local_130 != 0) {
            iVar2 = FUN_00414f50(&local_130,&DAT_00edb315,(ulonglong)local_130 + 1);
            if (iVar2 == 0) break;
            FUN_016b9df0(local_30);
            local_638._0_1_ = 0xe4;
            local_638._1_7_ = 0xedab;
            local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
            FUN_016ba960(local_30,&local_130,0,&DAT_00eda834);
            FUN_016bdfc0(local_30,&local_130,0);
            FUN_016ba220(local_30,&local_130,&DAT_00edabe4,1);
          }
          FUN_016b9df0(local_30);
        }
      }
      local_638 = (undefined *)CONCAT71(local_638._1_7_,0x3a);
      local_630 = (ulonglong *)&local_130;
      cVar1 = FUN_016babb0(local_30,1,L"TEXT",&DAT_00eda808);
      if (cVar1 != '\0') {
        FUN_016a4020(*(undefined8 *)(local_30 + 0x10),1,&DAT_00edb315,0xffffffff);
      }
      goto LAB_00eda66d;
    }
    if (local_5f1 == 0x59) {
      FUN_016ba220(local_30,local_230,&DAT_00eda9c4,1);
      FUN_016ba220(local_30,&local_130,&DAT_00eda9c4,0);
      while (local_130 != 0) {
        FUN_016b9df0(local_30);
        local_550[0] = 0;
        local_638 = (undefined *)((ulonglong)local_638 & 0xffffffffffffff00);
        local_630 = (ulonglong *)0x0;
        local_628 = 0;
        local_620 = local_550;
        local_618 = 0;
        FUN_016bd780(local_30,local_548,0,local_600);
        FUN_016ba220(local_30,local_230,&DAT_00eda9c4,1);
        FUN_016ba220(local_30,&local_130,&DAT_00eda9c4,0);
      }
      FUN_016b9df0(local_30);
      local_638 = &DAT_00edb376;
      local_630 = (ulonglong *)((ulonglong)local_630 & 0xffffffffffffff00);
      FUN_016ba960(local_30,&local_130,0,&DAT_00edb244);
      uVar5 = FUN_00b95c80(&local_130);
      *(undefined8 *)(local_438 + 0x10) = uVar5;
      goto LAB_00eda66d;
    }
  }
  FUN_016a4020(*(undefined8 *)(local_30 + 0x10),3,*(undefined8 *)(local_438 + 8),0xffffffff);
LAB_00eda66d:
  *(undefined8 *)(local_438 + 0x30) = *(undefined8 *)(local_30 + 0xa30);
  *(undefined8 *)(local_438 + 0x40) = *(undefined8 *)(local_30 + 0xa40);
  if (bVar8) {
    FUN_01d34d10(*(undefined8 *)(local_30 + 0x9b8),local_438);
  }
  else {
    FUN_016bd0d0(local_30,local_438);
  }
  FUN_00414560(&local_5e8,2);
  FUN_00414590(&local_5d8,2);
  FUN_00414480(&local_5c8);
  FUN_00414590(&local_5c0,2);
  FUN_00414480(&local_5b0);
  FUN_00414560(&local_5a0,4);
  FUN_00414590(&local_580,2);
  FUN_00414560(&local_570,2);
  return;
}

