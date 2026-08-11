/* Ghidra address: 00f9aef0 */
/* Ghidra symbol: FUN_00f9aef0 */


void FUN_00f9aef0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  iVar7 = 0;
  do {
    FUN_00f99e10(param_1,iVar7,0,0);
    FUN_00f9a200(param_1,iVar7);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 8);
  *(undefined1 *)(param_1 + 0x7c1) = 1;
  FUN_00450070(&local_30,*(undefined8 *)(param_1 + 0xcc0),&DAT_00f9c098,&DAT_00f9c0ac,1);
  if (*(int *)(param_1 + 0xcb8) == 8) {
    FUN_00416cd0(&local_38,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\PIC18\\",
                 local_30,L".inc");
  }
  else {
    FUN_00416cd0(&local_38,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\",local_30,
                 L".inc");
  }
  FUN_00440a20(local_38,1);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x810) = plVar5;
  (**(code **)(*plVar5 + 0xd8))(plVar5,local_38);
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),*(undefined4 *)(param_1 + 0x860));
  uVar6 = FUN_00b89270();
  FUN_0041ddd0(&local_58,PTR_PTR_02002a30);
  FUN_00b8e650(uVar6,&local_50,L"HDLStrings.Msg_IT_Sense0",local_58);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),local_50);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"IT pin RB0");
  iVar7 = FUN_00f9a5f0(param_1,L"RAIE");
  iVar2 = FUN_00f9a5f0(param_1,L"RABIE");
  iVar3 = FUN_00f9a5f0(param_1,L"RBIE");
  if (*(int *)(param_1 + 0xcb8) == 8) {
    FUN_0043f750(&local_60,*(undefined4 *)(param_1 + 0x868));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_60);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),L"IT pin NONE");
    FUN_00414b50(&local_30,L"RPOR0");
    FUN_00f9aa60(param_1,&local_68,local_30);
    FUN_00414b50(&local_30,local_68);
    if (local_30 == 0) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),0);
      *(undefined1 *)(param_1 + 0x7c2) = 0;
      cVar1 = *(char *)(param_1 + 0x819);
      if (cVar1 == '\f') {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
        *(undefined1 *)(param_1 + 0x7c2) = 1;
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),1);
        (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
        if ((iVar3 != -1) || (iVar2 != -1)) {
          iVar7 = FUN_00f9a5f0(param_1,L"IOCB");
          if ((iVar7 == -1) && (iVar2 == -1)) {
            uVar8 = 4;
          }
          else {
            uVar8 = 0;
          }
          FUN_00f9a5f0(param_1,L"TRISB");
          if (uVar8 < 8) {
            do {
              if (iVar7 == -1) {
                FUN_0043f750(&local_b0,uVar8);
                FUN_00416ba0(&local_40,L"TRISB",local_b0);
              }
              else {
                FUN_0043f750(&local_a8,uVar8);
                FUN_00416ba0(&local_40,L"IOCB",local_a8);
              }
              uVar6 = FUN_00f9a5f0(param_1,local_40);
              FUN_00f9a200(param_1,uVar8,iVar7,
                           CONCAT71((int7)((ulonglong)uVar6 >> 8),(int)uVar6 != -1) & 0xffffffff);
              uVar8 = uVar8 + 1;
            } while (uVar8 != 8);
          }
          FUN_00f99c30(param_1,*(undefined4 *)(param_1 + 0x868),iVar7);
        }
      }
      else if (cVar1 == '\r') {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
        *(undefined1 *)(param_1 + 0x7c2) = 1;
        (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),1);
        FUN_0043f750(&local_b8,*(undefined4 *)(param_1 + 0x868));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_b8);
        (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
        if ((iVar7 != -1) || (iVar2 != -1)) {
          iVar7 = FUN_00f9a5f0(param_1,L"IOCA");
          if ((iVar7 == -1) && (iVar2 == -1)) {
            uVar8 = 4;
          }
          else {
            uVar8 = 0;
          }
          FUN_00f9a5f0(param_1,L"TRISA");
          if (uVar8 < 8) {
            do {
              if (iVar7 == -1) {
                FUN_0043f750(&local_c8,uVar8);
                FUN_00416ba0(&local_40,L"TRISA",local_c8);
              }
              else {
                FUN_0043f750(&local_c0,uVar8);
                FUN_00416ba0(&local_40,L"IOCA",local_c0);
              }
              uVar6 = FUN_00f9a5f0(param_1,local_40);
              FUN_00f99e10(param_1,uVar8,iVar7,
                           CONCAT71((int7)((ulonglong)uVar6 >> 8),(int)uVar6 != -1) & 0xffffffff);
              uVar8 = uVar8 + 1;
            } while (uVar8 != 8);
          }
          FUN_00f99ab0(param_1,*(undefined4 *)(param_1 + 0x868),iVar7);
        }
      }
      else if (cVar1 == '\x05') {
        FUN_00414b50(&local_30,L"INT0_PIN");
        FUN_00f9aa60(param_1,&local_d0,local_30);
        FUN_00414b50(&local_30,local_d0);
        if (local_30 != 0) {
          FUN_00416ba0(&local_d8,L"IT pin ",local_30);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_d8);
        }
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                  (*(longlong **)(param_1 + 0x6b0),*(uint *)(param_1 + 0x860) & 1);
      }
      else if (cVar1 == '\b') {
        FUN_00414b50(&local_30,L"INT1_PIN");
        FUN_00f9aa60(param_1,&local_e0,local_30);
        FUN_00414b50(&local_30,local_e0);
        if (local_30 != 0) {
          FUN_00416ba0(&local_e8,L"IT pin ",local_30);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_e8);
        }
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                  (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x860) & 2) >> 1);
      }
      else if (cVar1 == '\t') {
        FUN_00414b50(&local_30,L"INT2_PIN");
        FUN_00f9aa60(param_1,&local_f0,local_30);
        FUN_00414b50(&local_30,local_f0);
        if (local_30 != 0) {
          FUN_00416ba0(&local_f8,L"IT pin ",local_30);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_f8);
        }
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                  (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x860) & 4) >> 2);
      }
      else if (cVar1 == '\n') {
        FUN_00414b50(&local_30,L"INT3_PIN");
        FUN_00f9aa60(param_1,&local_100,local_30);
        FUN_00414b50(&local_30,local_100);
        if (local_30 != 0) {
          FUN_00416ba0(&local_108,L"IT pin ",local_30);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_108);
        }
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                  (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x860) & 8) >> 3);
      }
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
      *(undefined1 *)(param_1 + 0x7c2) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),1);
      cVar1 = *(char *)(param_1 + 0x819);
      if (cVar1 == '\f') {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
        if ((iVar3 != -1) || (iVar2 != -1)) {
          iVar7 = FUN_00f9a5f0(param_1,L"IOCB");
          if (iVar7 == -1) {
            uVar8 = 4;
          }
          else {
            uVar8 = 0;
          }
          FUN_00f9a5f0(param_1,L"TRISB");
          if (uVar8 < 8) {
            do {
              if (iVar7 == -1) {
                FUN_0043f750(&local_78,uVar8);
                FUN_00416ba0(&local_40,L"TRISB",local_78);
              }
              else {
                FUN_0043f750(&local_70,uVar8);
                FUN_00416ba0(&local_40,L"IOCB",local_70);
              }
              uVar6 = FUN_00f9a5f0(param_1,local_40);
              FUN_00f9a200(param_1,uVar8,iVar7,
                           CONCAT71((int7)((ulonglong)uVar6 >> 8),(int)uVar6 != -1) & 0xffffffff);
              uVar8 = uVar8 + 1;
            } while (uVar8 != 8);
          }
          FUN_00f99c30(param_1,*(undefined4 *)(param_1 + 0x868),iVar7);
        }
      }
      else if (cVar1 == '\r') {
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
        if ((iVar7 != -1) || (iVar2 != -1)) {
          iVar7 = FUN_00f9a5f0(param_1,L"IOCA");
          if (iVar7 == -1) {
            uVar8 = 4;
          }
          else {
            uVar8 = 0;
          }
          FUN_00f9a5f0(param_1,L"TRISA");
          if (uVar8 < 8) {
            do {
              if (iVar7 == -1) {
                FUN_0043f750(&local_88,uVar8);
                FUN_00416ba0(&local_40,L"TRISA",local_88);
              }
              else {
                FUN_0043f750(&local_80,uVar8);
                FUN_00416ba0(&local_40,L"IOCA",local_80);
              }
              uVar6 = FUN_00f9a5f0(param_1,local_40);
              FUN_00f99e10(param_1,uVar8,iVar7,
                           CONCAT71((int7)((ulonglong)uVar6 >> 8),(int)uVar6 != -1) & 0xffffffff);
              uVar8 = uVar8 + 1;
            } while (uVar8 != 8);
          }
          FUN_00f99ab0(param_1,*(undefined4 *)(param_1 + 0x868),iVar7);
        }
      }
      else if (cVar1 == '\x05') {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),&DAT_00f9c294);
        (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                  (*(longlong **)(param_1 + 0x6b0),*(uint *)(param_1 + 0x860) & 1);
      }
      else if (cVar1 == '\b') {
        FUN_0043f750(&local_90,*(uint *)(param_1 + 0x868) & 0x1f);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_90);
        (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                  (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x860) & 2) >> 1);
      }
      else if (cVar1 == '\t') {
        FUN_0043f750(&local_98,(*(uint *)(param_1 + 0x868) & 0x3e0) >> 5);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_98);
        (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                  (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x860) & 4) >> 2);
      }
      else if (cVar1 == '\n') {
        FUN_0043f750(&local_a0,(*(uint *)(param_1 + 0x868) & 0x7c00) >> 10);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_a0);
        (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
        (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
                  (*(longlong **)(param_1 + 0x6b0),(*(uint *)(param_1 + 0x860) & 8) >> 3);
      }
    }
  }
  else if (*(int *)(param_1 + 0xcb8) == 1) {
    if (*(char *)(param_1 + 0x819) == '\f') {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
      *(undefined1 *)(param_1 + 0x7c2) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),1);
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
      if ((iVar3 != -1) || (iVar2 != -1)) {
        iVar7 = FUN_00f9a5f0(param_1,L"IOCB");
        if (iVar7 == -1) {
          uVar8 = 4;
        }
        else {
          uVar8 = 0;
        }
        FUN_00f9a5f0(param_1,L"TRISB");
        if (uVar8 < 8) {
          do {
            if (iVar7 == -1) {
              FUN_0043f750(&local_118,uVar8);
              FUN_00416ba0(&local_40,L"TRISB",local_118);
            }
            else {
              FUN_0043f750(&local_110,uVar8);
              FUN_00416ba0(&local_40,L"IOCB",local_110);
            }
            uVar6 = FUN_00f9a5f0(param_1,local_40);
            if (((int)uVar6 == -1) && (iVar7 != -1)) {
              uVar4 = 0;
            }
            else {
              uVar4 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            }
            FUN_00f9a200(param_1,uVar8,iVar7,uVar4);
            uVar8 = uVar8 + 1;
          } while (uVar8 != 8);
        }
        FUN_00f99c30(param_1,*(undefined4 *)(param_1 + 0x868),iVar7);
      }
    }
    else if (*(char *)(param_1 + 0x819) == '\r') {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
      *(undefined1 *)(param_1 + 0x7c2) = 1;
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),1);
      (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),0);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),0);
      if ((iVar7 != -1) || (iVar2 != -1)) {
        iVar7 = FUN_00f9a5f0(param_1,L"IOCA");
        if (iVar7 == -1) {
          uVar8 = 4;
        }
        else {
          uVar8 = 0;
        }
        FUN_00f9a5f0(param_1,L"TRISA");
        if (uVar8 < 8) {
          do {
            if (iVar7 == -1) {
              FUN_0043f750(&local_128,uVar8);
              FUN_00416ba0(&local_40,L"TRISA",local_128);
            }
            else {
              FUN_0043f750(&local_120,uVar8);
              FUN_00416ba0(&local_40,L"IOCA",local_120);
            }
            uVar6 = FUN_00f9a5f0(param_1,local_40);
            FUN_00f99e10(param_1,uVar8,iVar7,
                         CONCAT71((int7)((ulonglong)uVar6 >> 8),(int)uVar6 != -1) & 0xffffffff);
            uVar8 = uVar8 + 1;
          } while (uVar8 != 8);
        }
        FUN_00f99ab0(param_1,*(undefined4 *)(param_1 + 0x868),iVar7);
      }
    }
    else {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),&LAB_00f9c340);
    }
  }
  FUN_00414560(&local_128,0x20);
  return;
}

