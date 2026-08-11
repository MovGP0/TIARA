/* Ghidra address: 010e9cb0 */
/* Ghidra symbol: FUN_010e9cb0 */


void FUN_010e9cb0(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [56];
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [56];
  undefined1 local_c0 [56];
  undefined1 local_88 [48];
  undefined1 local_58 [21];
  undefined8 local_43;
  longlong local_38;
  longlong local_30 [2];
  
  local_178 = 0;
  local_180 = 0;
  local_168 = 0;
  local_170 = 0;
  local_158 = 0;
  local_160 = 0;
  local_150 = 0;
  local_148 = 0;
  local_108 = 0;
  local_100 = 0;
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x68))(plVar3);
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar2 = FUN_00609e10(*(longlong *)(param_1 + 0x58));
      FUN_005fdab0(*(undefined8 *)(lVar2 + 0x80),0xffffff);
      plVar3 = (longlong *)FUN_00609e10(*(undefined8 *)(param_1 + 0x58));
      FUN_00498350(local_58,0,0,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
      (**(code **)(*plVar3 + 0xa8))(plVar3,local_58);
      (**(code **)(**(longlong **)(param_1 + 0x58) + 0x80))(*(longlong **)(param_1 + 0x58),0);
    }
    local_30[0] = 0;
    local_38 = 0;
    *(byte *)(param_1 + 0x20) = param_2;
    lVar2 = *(longlong *)(param_1 + 0x110);
    if ((*(char *)(lVar2 + 0x31) == '\x04') || (*(char *)(lVar2 + 0x31) == '\x05')) {
      local_43 = 0x5d6d4264235b2007;
    }
    else {
      local_43 = CONCAT17(local_43._7_1_,0x5d4264235b2006);
    }
    uVar4 = (ulonglong)param_2;
    if (uVar4 < 7) {
      if (uVar4 == 6) {
        *(undefined1 *)(param_1 + 0xa0) = 0;
        FUN_00f1b8c0(0,L"Real part ",0,0,2,*(undefined8 *)(param_1 + 0x78),
                     *(undefined8 *)(param_1 + 0x80),0,L"Imag part ",0,0,2,
                     *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),0,1,local_30,
                     *(undefined8 *)(param_1 + 0x50));
      }
      else if (uVar4 < 2) {
        if (uVar4 == 0) {
          *(undefined1 *)(param_1 + 0xa0) = 2;
          FUN_00414ff0(local_88,lVar2 + 8);
          FUN_00415110(local_88,&DAT_010eacec,0x2b);
          FUN_00414ff0(local_c0,local_88);
          FUN_00415110(local_c0,lVar2 + 0x32,0x35);
          FUN_00414ff0(local_f8,local_c0);
          FUN_00415110(local_f8,&DAT_010eacf0,0x36);
          FUN_004169a0(&local_100,local_f8);
          FUN_00f1b8c0(0,L"Frequency [#Hz]",*(undefined1 *)(param_1 + 0x88),1,1,
                       *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0,local_100,2
                       ,1,1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),0,1,
                       local_30,*(undefined8 *)(param_1 + 0x50));
        }
        else if (uVar4 == 1) {
          *(undefined1 *)(param_1 + 0xa0) = 0;
          FUN_00414ff0(local_88,lVar2 + 8);
          FUN_00415110(local_88,&DAT_010eacec,0x2b);
          FUN_00414ff0(local_c0,local_88);
          FUN_00415110(local_c0,lVar2 + 0x32,0x35);
          FUN_00414ff0(local_f8,local_c0);
          FUN_00415110(local_f8,&DAT_010eacf0,0x36);
          FUN_004169a0(&local_108,local_f8);
          FUN_00f1b8c0(0,L"Frequency [#Hz]",*(undefined1 *)(param_1 + 0x88),1,1,
                       *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0,local_108,0
                       ,1,1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),0,1,
                       local_30,*(undefined8 *)(param_1 + 0x50));
        }
      }
      else if (uVar4 - 2 < 2) {
        *(undefined1 *)(param_1 + 0xa0) = 1;
        FUN_00414ff0(local_140,lVar2 + 8);
        FUN_00415110(local_140,&local_43,0x32);
        FUN_004169a0(&local_148,local_140);
        FUN_00f1b8c0(0,L"Frequency [#Hz]",*(undefined1 *)(param_1 + 0x88),1,1,
                     *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0,local_148,1,1
                     ,1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),0,1,local_30
                     ,*(undefined8 *)(param_1 + 0x50));
      }
      else if (uVar4 == 4) {
        *(undefined1 *)(param_1 + 0xa0) = 0;
        FUN_00f1b8c0(0,L"Frequency [#Hz]",*(undefined1 *)(param_1 + 0x88),1,1,
                     *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0,
                     L"Phase [#deg]",0,1,2,*(undefined8 *)(param_1 + 0x90),
                     *(undefined8 *)(param_1 + 0x98),0,1,local_30,*(undefined8 *)(param_1 + 0x50));
      }
      else if (uVar4 == 5) {
        *(undefined1 *)(param_1 + 0xa0) = 1;
        FUN_00414ff0(local_140,lVar2 + 8);
        FUN_00415110(local_140,&local_43,0x32);
        FUN_004169a0(&local_150,local_140);
        FUN_00f1b8c0(0,L"Frequency [#Hz]",*(undefined1 *)(param_1 + 0x88),1,1,
                     *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0,local_150,1,1
                     ,1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),0,1,local_30
                     ,*(undefined8 *)(param_1 + 0x50));
        *(undefined1 *)(param_1 + 0xb8) = 0;
        FUN_00f1b8c0(0,L"Frequency [#Hz]",*(undefined1 *)(param_1 + 0x88),1,1,
                     *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0,
                     L"Phase [#deg]",0,1,1,*(undefined8 *)(param_1 + 0xa8),
                     *(undefined8 *)(param_1 + 0xb0),0,1,&local_38,*(undefined8 *)(param_1 + 0x50));
      }
    }
    else if (uVar4 == 7) {
      *(undefined1 *)(param_1 + 0xa0) = 0;
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_158,0x129);
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_160,0x128);
      FUN_00f1b8c0(0,local_158,*(undefined1 *)(param_1 + 0x88),1,1,*(undefined8 *)(param_1 + 0x78),
                   *(undefined8 *)(param_1 + 0x80),0,local_160,*(undefined1 *)(param_1 + 0xa0),1,2,
                   *(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),0,1,local_30,
                   *(undefined8 *)(param_1 + 0x50));
    }
    else if (uVar4 == 8) {
      *(undefined1 *)(param_1 + 0xa0) = 3;
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_168,0x11d);
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_170,0x11e);
      FUN_00f1b8c0(6,local_168,3,0,1,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80)
                   ,5,local_170,*(undefined1 *)(param_1 + 0xa0),0,0,*(undefined8 *)(param_1 + 0x90),
                   *(undefined8 *)(param_1 + 0x98),0xc,1,local_30,*(undefined8 *)(param_1 + 0x50));
    }
    else if (uVar4 == 9) {
      *(undefined1 *)(param_1 + 0xa0) = 3;
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_178,0x11d);
      uVar5 = FUN_00b89270();
      FUN_00b8e520(uVar5,&local_180,0x11e);
      FUN_00f1b8c0(5,local_178,3,0,2,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80)
                   ,0,local_180,*(undefined1 *)(param_1 + 0xa0),0,2,*(undefined8 *)(param_1 + 0x90),
                   *(undefined8 *)(param_1 + 0x98),0,1,local_30,*(undefined8 *)(param_1 + 0x50));
    }
    else if (uVar4 == 10) {
      *(undefined1 *)(param_1 + 0xa0) = 0;
      FUN_00f1b8c0(1,L"Time [#s]",0,1,2,*(undefined8 *)(param_1 + 0x78),
                   *(undefined8 *)(param_1 + 0x80),0,&DAT_010ead90,0,1,2,0,0x3ff0000000000000,0,0,
                   local_30,*(undefined8 *)(param_1 + 0x50));
    }
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
    (**(code **)(*plVar3 + 0x80))(plVar3,L"Analysis Result 1",local_30[0]);
    if (local_38 != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
      (**(code **)(*plVar3 + 0x80))(plVar3,L"Analysis Result 2",local_38);
    }
    FUN_010e8460(param_1,local_58,2);
    FUN_01acf9e0(*(undefined8 *)(param_1 + 0x50),local_58);
    FUN_01ad0490(*(undefined8 *)(param_1 + 0x50));
    FUN_01acfa60(*(undefined8 *)(param_1 + 0x50));
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0xd8);
    iVar1 = (**(code **)(*plVar3 + 0x28))();
    iVar6 = 0;
    if (-1 < iVar1 + -1) {
      do {
        lVar2 = (**(code **)(*plVar3 + 0x30))(plVar3,iVar6);
        if (*(byte *)(lVar2 + 0x58) < 8) {
          bVar7 = ((int)CONCAT71((int7)((ulonglong)lVar2 >> 8),1) <<
                   (*(byte *)(lVar2 + 0x58) & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar7 = false;
        }
        if (bVar7) {
          uVar5 = (**(code **)(*plVar3 + 0x30))(plVar3,iVar6);
          FUN_00f1d150(uVar5,0,2);
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_01acfc60(*(undefined8 *)(param_1 + 0x50));
    FUN_01aceb90(*(undefined8 *)(param_1 + 0x50),1);
  }
  FUN_00414560(&local_180,8);
  FUN_00414560(&local_108,2);
  return;
}

