/* Ghidra address: 018345d0 */
/* Ghidra symbol: FUN_018345d0 */


void FUN_018345d0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  
  local_60 = auStack_88;
  local_68 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_01820b90(*(undefined8 *)(param_1 + 0x30));
  FUN_00414ad0(param_1 + 0x20,param_2);
  FUN_01822860(&local_68,param_2);
  local_20 = FUN_004ba3c0(&PTR_FUN_0047d288,1,local_68);
  FUN_0181ed90(*(undefined8 *)(param_1 + 0x10),local_20);
  FUN_00410f20(local_20);
  uVar6 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  *(undefined8 *)(param_1 + 0x48) = uVar6;
  local_48 = FUN_0181e580(uVar6,L"parser");
  local_40 = FUN_0181e580(local_48,L"keywords");
  iVar3 = FUN_0181e3e0();
  local_24 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar5 = FUN_0181e3c0(local_40,local_24);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x78);
      (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(lVar5 + 0x18));
      local_24 = local_24 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = FUN_0181e3e0();
  local_24 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar5 = FUN_0181e3c0(local_48,local_24);
      FUN_0043e1a0(&local_30,*(undefined8 *)(lVar5 + 0x18));
      uVar6 = FUN_0181e3c0(local_48,local_24);
      FUN_0181e5f0(uVar6,&local_38,L"text");
      iVar4 = FUN_00416db0(local_30,L"identchars");
      if (iVar4 == 0) {
        FUN_01820fc0(*(undefined8 *)(param_1 + 0x30),local_38);
      }
      else {
        iVar4 = FUN_00416db0(local_30,L"commentline1");
        if (iVar4 == 0) {
          FUN_00414ad0(*(longlong *)(param_1 + 0x30) + 0x40,local_38);
        }
        else {
          iVar4 = FUN_00416db0(local_30,L"commentline2");
          if (iVar4 == 0) {
            FUN_00414ad0(*(longlong *)(param_1 + 0x30) + 0x48,local_38);
          }
          else {
            iVar4 = FUN_00416db0(local_30,L"commentblock1");
            if (iVar4 == 0) {
              FUN_01820cc0(*(undefined8 *)(param_1 + 0x30),local_38);
            }
            else {
              iVar4 = FUN_00416db0(local_30,L"commentblock2");
              if (iVar4 == 0) {
                FUN_01820dd0(*(undefined8 *)(param_1 + 0x30),local_38);
              }
              else {
                iVar4 = FUN_00416db0(local_30,L"stringquotes");
                if (iVar4 == 0) {
                  FUN_00414ad0(*(longlong *)(param_1 + 0x30) + 0xa0,local_38);
                }
                else {
                  iVar4 = FUN_00416db0(local_30,L"hexsequence");
                  if (iVar4 == 0) {
                    FUN_00414ad0(*(longlong *)(param_1 + 0x30) + 0x50,local_38);
                  }
                  else {
                    iVar4 = FUN_00416db0(local_30,L"specstrchar");
                    if (iVar4 == 0) {
                      iVar4 = FUN_00416db0(local_38,&DAT_01834c30);
                      if (iVar4 == 0) {
                        *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0xc0) = 1;
                      }
                    }
                    else {
                      iVar4 = FUN_00416db0(local_30,L"declarevars");
                      if (iVar4 == 0) {
                        iVar4 = FUN_00416db0(local_38,&DAT_01834c64);
                        if (iVar4 == 0) {
                          *(undefined1 *)(param_1 + 0x28) = 0;
                        }
                      }
                      else {
                        iVar4 = FUN_00416db0(local_30,L"skipeol");
                        if (iVar4 == 0) {
                          iVar4 = FUN_00416db0(local_38,&DAT_01834c64);
                          if (iVar4 == 0) {
                            *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0x98) = 0;
                          }
                        }
                        else {
                          iVar4 = FUN_00416db0(local_30,L"skipchar");
                          if (iVar4 == 0) {
                            FUN_00414ad0(*(longlong *)(param_1 + 0x30) + 0x90,local_38);
                          }
                          else {
                            iVar4 = FUN_00416db0(local_30,L"casesensitive");
                            if ((iVar4 == 0) &&
                               (iVar4 = FUN_00416db0(local_38,&DAT_01834c30), iVar4 == 0)) {
                              *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 8) = 1;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_24 = local_24 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (*(char *)(*(longlong *)(param_1 + 0x38) + 0xa0) != '\0') {
    local_24 = 0x80;
    do {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x30) + 0x58 +
                       ((longlong)(ulonglong)(byte)local_24 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << ((ulonglong)(byte)local_24 & 7);
      local_24 = local_24 + 1;
    } while (local_24 != 0x100);
  }
  FUN_00414480(&local_68);
  FUN_00414560(&local_38,2);
  return;
}

