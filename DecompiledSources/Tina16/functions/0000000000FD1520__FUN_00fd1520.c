/* Ghidra address: 00fd1520 */
/* Ghidra symbol: FUN_00fd1520 */


void FUN_00fd1520(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  byte local_119;
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
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar2 = *(int *)(param_1 + 0x7e0);
  if ((iVar2 == 1) || (iVar2 == 8)) {
    if (iVar2 == 8) {
      FUN_00450070(&local_20,*(undefined8 *)(param_1 + 0x7e8),&DAT_00fd4358,&DAT_00fd436c,1);
      FUN_00416cd0(&local_28,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\pic18\\",
                   local_20,L".inc");
      FUN_00440a20(local_28,1);
      plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      *(longlong **)(param_1 + 2000) = plVar3;
      (**(code **)(*plVar3 + 0xd8))(plVar3,local_28);
      if (*(char *)(param_1 + 0x7f1) == '\x0f') {
        iVar2 = FUN_00fd5790(param_1,&DAT_00fd43d8);
        if ((iVar2 == -1) && (iVar2 = FUN_00fd5790(param_1,L"PR3L"), iVar2 == -1)) {
          local_119 = 0;
        }
        else {
          local_119 = 1;
        }
      }
      if (*(char *)(param_1 + 0x7f1) == '\x10') {
        iVar2 = FUN_00fd5790(param_1,&DAT_00fd4404);
        if ((iVar2 == -1) && (iVar2 = FUN_00fd5790(param_1,L"PR4L"), iVar2 == -1)) {
          local_119 = 0;
        }
        else {
          local_119 = 1;
        }
      }
      if (*(char *)(param_1 + 0x7f1) == '\x11') {
        iVar2 = FUN_00fd5790(param_1,&DAT_00fd4430);
        if ((iVar2 == -1) && (iVar2 = FUN_00fd5790(param_1,L"PR5L"), iVar2 == -1)) {
          local_119 = 0;
        }
        else {
          local_119 = 1;
        }
      }
    }
    cVar1 = *(char *)(param_1 + 0x7f1);
    if ((((cVar1 == '\x05') || (cVar1 == '\b')) || (cVar1 == '\t')) ||
       (((cVar1 == '\n' || (cVar1 == '\f')) || (cVar1 == '\r')))) {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00f98d58,1,*(undefined8 *)PTR_DAT_02004030);
      (**(code **)(*(longlong *)plVar3[0xd6] + 0x268))
                ((longlong *)plVar3[0xd6],*(undefined4 *)(param_1 + 0x838));
      FUN_00f9add0(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      if (*(char *)(param_1 + 0x7f1) == '\r') {
        FUN_0064de00(plVar3,L"PIC PORTA CHANGED");
      }
      if (*(char *)(param_1 + 0x7f1) == '\f') {
        FUN_0064de00(plVar3,L"PIC PORTB CHANGED");
      }
      if (*(char *)(param_1 + 0x7f1) == '\x05') {
        FUN_0064de00(plVar3,L"PIC EXT0");
      }
      if (*(char *)(param_1 + 0x7f1) == '\b') {
        FUN_0064de00(plVar3,L"PIC EXT1");
      }
      if (*(char *)(param_1 + 0x7f1) == '\t') {
        FUN_0064de00(plVar3,L"PIC EXT2");
      }
      if (*(char *)(param_1 + 0x7f1) == '\n') {
        FUN_0064de00(plVar3,L"PIC EXT3");
      }
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x103,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    else if (cVar1 == '\x01') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00f9cb28,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_00f9d790(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      if (*(int *)(param_1 + 0x7e0) == 8) {
        FUN_0064dbe0(plVar3[0xd9],0);
        FUN_0064dbe0(plVar3[0xe6],1);
      }
      else {
        FUN_0064dbe0(plVar3[0xd9],1);
        FUN_0064dbe0(plVar3[0xe6],0);
      }
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xf2,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    else if (cVar1 == '\x1f') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00f98108,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_00f989c0(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xdf,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x7f1);
      if ((((cVar1 == '\x02') || (cVar1 == '\v')) ||
          ((cVar1 == '\x0e' || ((*(char *)(param_1 + 0x7f1) == '\x0f' && (local_119 == 0)))))) ||
         (((*(char *)(param_1 + 0x7f1) == '\x10' && (local_119 == 0)) ||
          ((*(char *)(param_1 + 0x7f1) == '\x11' && (local_119 == 0)))))) {
        plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00f9ff68,1,*(undefined8 *)PTR_DAT_02004030);
        FUN_00fa1430(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                     *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
        if (*(char *)(param_1 + 0x7f1) == '\x02') {
          FUN_0064de00(plVar3,L"TIMER1");
        }
        if (*(char *)(param_1 + 0x7f1) == '\x0f') {
          FUN_0064de00(plVar3,L"TIMER3");
        }
        if (*(char *)(param_1 + 0x7f1) == '\x10') {
          FUN_0064de00(plVar3,L"TIMER4");
        }
        if (*(char *)(param_1 + 0x7f1) == '\x11') {
          FUN_0064de00(plVar3,L"TIMER5");
        }
        cVar1 = *(char *)(param_1 + 0x7f1);
        if ((cVar1 == '\v') || (cVar1 == '\x0e')) {
          if (cVar1 == '\x0e') {
            FUN_0064dbe0(plVar3[0xdf],1);
          }
          if (*(char *)(param_1 + 0x7f1) == '\v') {
            FUN_0064dbe0(plVar3[0xdf],1);
            FUN_0064dbe0(plVar3[0xe0],1);
          }
        }
        else {
          FUN_0064cc50(plVar3,0x124);
          FUN_0064cb90(plVar3[0xda],0xe0);
          FUN_0064cb90(plVar3[0xdb],0xe0);
          FUN_0064cb90(plVar3[0xdc],0xe0);
          FUN_0064dbe0(plVar3[0xf9],0);
          FUN_0064cbf0(plVar3,400);
        }
        if (*(int *)(param_1 + 0x7e0) == 8) {
          FUN_0064dbe0(plVar3[0xf8],1);
          FUN_0064dbe0(plVar3[0xe1],0);
          FUN_0064dbe0(plVar3[0xe2],0);
        }
        else {
          FUN_0064dbe0(plVar3[0xf8],0);
          FUN_0064dbe0(plVar3[0xe1],1);
          FUN_0064dbe0(plVar3[0xe2],1);
        }
        iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
        if (iVar2 == 1) {
          FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x11e,&DAT_00f68330);
        }
        FUN_00410f20(plVar3);
      }
      else {
        cVar1 = *(char *)(param_1 + 0x7f1);
        if ((((cVar1 == '\x03') || ((local_119 & cVar1 == '\x0f') != 0)) ||
            ((local_119 & cVar1 == '\x10') != 0)) || ((local_119 & cVar1 == '\x11') != 0)) {
          plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fa6298,1,*(undefined8 *)PTR_DAT_02004030);
          if (*(char *)(param_1 + 0x7f1) == '\x03') {
            FUN_0064de00(plVar3,L"TIMER2");
          }
          if (*(char *)(param_1 + 0x7f1) == '\x0f') {
            FUN_0064de00(plVar3,L"TIMER3");
          }
          if (*(char *)(param_1 + 0x7f1) == '\x10') {
            FUN_0064de00(plVar3,L"TIMER4");
          }
          if (*(char *)(param_1 + 0x7f1) == '\x11') {
            FUN_0064de00(plVar3,L"TIMER5");
          }
          FUN_0064cbf0(plVar3,0x147);
          FUN_0064cb90(plVar3[0xd9],0x11c);
          FUN_0064cb90(plVar3[0xda],0x11c);
          FUN_0064cb90(plVar3[0xdb],0x11c);
          FUN_0064cc50(plVar3,0x168);
          FUN_00fa7550(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                       *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
          iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
          if (iVar2 == 1) {
            FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x116,&DAT_00f68330);
          }
          FUN_00410f20(plVar3);
        }
        else if (cVar1 == '\x04') {
          plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fabdb8,1,*(undefined8 *)PTR_DAT_02004030);
          FUN_00fac6b0(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                       *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
          iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
          if (iVar2 == 1) {
            FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xe6,&DAT_00f68330);
          }
          FUN_00410f20(plVar3);
        }
        else if ((*(char *)(param_1 + 0x7f1) == '\x06') || (*(char *)(param_1 + 0x7f1) == '\a')) {
          plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00face58,1,*(undefined8 *)PTR_DAT_02004030);
          FUN_00faddb0(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                       *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
          cVar1 = *(char *)(param_1 + 0x7f1);
          if (cVar1 == '\x06') {
            FUN_0064de00(plVar3,L"PIC UART Receiver");
            FUN_0064dbe0(plVar3[0xd6],0);
            FUN_0064dbe0(plVar3[0xe5],0);
            FUN_0064dbe0(plVar3[0xde],0);
          }
          if (cVar1 == '\a') {
            FUN_0064de00(plVar3,L"PIC UART Transmitter");
            FUN_0064dbe0(plVar3[0xdd],0);
            FUN_0064dbe0(plVar3[0xe6],0);
            FUN_0064dbe0(plVar3[0xdf],0);
          }
          iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
          if (iVar2 == 1) {
            FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x100,&DAT_00f68330);
          }
          FUN_00410f20(plVar3);
        }
      }
    }
    goto LAB_00fd42ec;
  }
  if (iVar2 == 2) {
    cVar1 = *(char *)(param_1 + 0x7f1);
    if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fc0e58,1,*(undefined8 *)PTR_DAT_02004030);
      (**(code **)(*(longlong *)plVar3[0xd6] + 0x268))
                ((longlong *)plVar3[0xd6],*(undefined4 *)(param_1 + 0xbb0));
      FUN_00fc16a0(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xe6,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    else if (cVar1 == '\x06') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fc1988,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_00fc2500(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xeb,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    else if (cVar1 == '\x05') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fc3988,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_00fc4680(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xfb,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    else if (cVar1 == '\x04') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fc62d8,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_00fc6f10(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xfa,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    else if (cVar1 == '\x03') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fc62d8,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_00fc6f10(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xfa,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    else if (cVar1 == '\a') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fc8428,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_00fc8f30(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xe9,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    else if ((*(char *)(param_1 + 0x7f1) == '\b') || (*(char *)(param_1 + 0x7f1) == '\t')) {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fc9918,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_00fca700(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      cVar1 = *(char *)(param_1 + 0x7f1);
      if (cVar1 == '\b') {
        FUN_0064de00(plVar3,L"8051 UART Receiver");
        FUN_0064dbe0(plVar3[0xdc],0);
        FUN_0064dbe0(plVar3[0xe6],0);
        FUN_0064dbe0(plVar3[0xe9],0);
        FUN_0064dbe0(plVar3[0xe1],0);
        FUN_0064dbe0(plVar3[0xe3],0);
        FUN_0064dbe0(plVar3[0xec],0);
      }
      if (cVar1 == '\t') {
        FUN_0064de00(plVar3,L"8051 UART Transmitter");
        FUN_0064dbe0(plVar3[0xdd],0);
        FUN_0064dbe0(plVar3[0xe7],0);
        FUN_0064dbe0(plVar3[0xea],0);
        FUN_0064dbe0(plVar3[0xe2],0);
        FUN_0064dbe0(plVar3[0xe4],0);
        FUN_0064dbe0(plVar3[0xeb],0);
      }
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x10a,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
    }
    goto LAB_00fd42ec;
  }
  if (iVar2 != 4) goto LAB_00fd42ec;
  cVar1 = *(char *)(param_1 + 0x7f1);
  if ((((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x11')) &&
     (((cVar1 != '\x12' && (cVar1 != '\x13')) &&
      ((cVar1 != '\x14' && ((cVar1 != '\x15' && (cVar1 != '\x16')))))))) {
    if (cVar1 == '\t') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fb02a8,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0043e130(&local_d8,*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = FUN_004170c0(L"ATMEGA",local_d8,1);
      if (iVar2 == 0) {
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),0,L"Stop, Timer/Counter0 is stopped.");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),1,&DAT_00fd51fc);
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),2,L"CK/8");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),3,L"CK/64");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),4,L"CK/256");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),5,L"CK/1024");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),6,L"External Pin T0, falling edge");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),7,L"External Pin T0, rising edge");
      }
      else {
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),0,L"No clock source (Timer/counter stopped)"
                  );
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),1,L"clkT0S/(No prescaling)");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),2,L"clkT0S/8 (From prescaler)");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),3,L"clkT0S/32 (From prescaler)");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),4,L"clkT0S/64 (From prescaler)");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),5,L"clkT0S/128 (From prescaler)");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),6,L"clkT0S/256 (From prescaler)");
        (**(code **)(**(longlong **)(plVar3[0xdc] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xdc] + 0x4f0),7,L"clkT0S/1024 (From prescaler)");
      }
      FUN_00fb0e70(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xef,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
      goto LAB_00fd42ec;
    }
    if (cVar1 == '\b') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fb9448,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0064de00(plVar3,L"Timer1 OVF dialog");
      FUN_0043e130(&local_e0,*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = FUN_004170c0(L"ATTINY26",local_e0,1);
      if (iVar2 == 0) {
        FUN_0064de00(plVar3[0xd7],L"Reload value (TCNT1L,TCNT1H)");
        FUN_0064dbe0(plVar3[0xe7],0);
        FUN_0064dbe0(plVar3[0xde],1);
      }
      else {
        FUN_0064de00(plVar3[0xd7],L"Reload value (TCNT1)");
        FUN_0064dbe0(plVar3[0xe7],1);
        FUN_0064dbe0(plVar3[0xde],0);
      }
      FUN_0064dbe0(plVar3[0xeb],0);
      FUN_0064dbe0(plVar3[0xdd],0);
      FUN_0064dbe0(plVar3[0xfc],1);
      FUN_0064dbe0(plVar3[0xe0],0);
      FUN_0064dbe0(plVar3[0xe3],0);
      FUN_0064dbe0(plVar3[0xe4],0);
      FUN_0064dbe0(plVar3[0xe5],0);
      FUN_0064dbe0(plVar3[0xfd],1);
      FUN_0064dbe0(plVar3[0xfe],1);
      FUN_0064dbe0(plVar3[0xff],1);
      FUN_0064dbe0(plVar3[0xe1],0);
      FUN_0064dbe0(plVar3[0xe2],0);
      FUN_0064dbe0(plVar3[0xe6],0);
      FUN_0064dbe0(plVar3[0xdc],0);
      FUN_0064dbe0(plVar3[0xdf],0);
      FUN_0064dbe0(plVar3[0x100],1);
      FUN_0064dbe0(plVar3[0x101],1);
      FUN_0064dbe0(plVar3[0x102],1);
      FUN_0064dbe0(plVar3[0xe8],0);
      FUN_0064dbe0(plVar3[0xe9],0);
      FUN_0064dbe0(plVar3[0xea],0);
      FUN_0064dbe0(plVar3[0xec],0);
      FUN_0064dbe0(plVar3[0xed],0);
      FUN_0064dbe0(plVar3[0xee],0);
      FUN_0064dbe0(plVar3[0xf6],0);
      FUN_0064dbe0(plVar3[0xf7],0);
      FUN_0064dbe0(plVar3[0xf8],0);
      FUN_0064dbe0(plVar3[0xfb],0);
      FUN_00fba580(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x114,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
      goto LAB_00fd42ec;
    }
    if (cVar1 == '\x06') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fb9448,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0064de00(plVar3,L"Timer1 COMPA dialog");
      FUN_0043e130(&local_e8,*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = FUN_004170c0(L"ATTINY26",local_e8,1);
      if (iVar2 == 0) {
        FUN_0064dbe0(plVar3[0xde],1);
        FUN_0064dbe0(plVar3[0xe7],0);
      }
      else {
        FUN_0064dbe0(plVar3[0xde],0);
        FUN_0064dbe0(plVar3[0xe7],1);
      }
      FUN_0064dbe0(plVar3[0xeb],0);
      FUN_0064dbe0(plVar3[0xdd],1);
      FUN_0064dbe0(plVar3[0xfc],1);
      FUN_0064dbe0(plVar3[0xe0],0);
      FUN_0064dbe0(plVar3[0xe3],1);
      FUN_0064dbe0(plVar3[0xe4],0);
      FUN_0064dbe0(plVar3[0xe5],0);
      FUN_0064dbe0(plVar3[0xfd],1);
      FUN_0064dbe0(plVar3[0xfe],1);
      FUN_0064dbe0(plVar3[0xff],1);
      FUN_0064dbe0(plVar3[0xe1],1);
      FUN_0064dbe0(plVar3[0xe2],0);
      FUN_0064dbe0(plVar3[0xe6],0);
      FUN_0064dbe0(plVar3[0xdc],1);
      FUN_0064dbe0(plVar3[0xdf],0);
      FUN_0064dbe0(plVar3[0x100],1);
      FUN_0064dbe0(plVar3[0x101],1);
      FUN_0064dbe0(plVar3[0x102],1);
      FUN_0064dbe0(plVar3[0xe8],1);
      FUN_0064dbe0(plVar3[0xe9],1);
      FUN_0064dbe0(plVar3[0xea],0);
      FUN_00fba580(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      FUN_0064dbe0(plVar3[0xec],0);
      FUN_0064dbe0(plVar3[0xed],0);
      FUN_0064dbe0(plVar3[0xee],1);
      FUN_0064dbe0(plVar3[0xf6],1);
      FUN_0064dbe0(plVar3[0xf7],0);
      FUN_0064dbe0(plVar3[0xf8],0);
      FUN_0064dbe0(plVar3[0xfb],0);
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x114,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
      goto LAB_00fd42ec;
    }
    if (cVar1 == '\a') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fb9448,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0064de00(plVar3,L"Timer1 COMPB dialog");
      FUN_0043e130(&local_f0,*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = FUN_004170c0(L"ATTINY26",local_f0,1);
      if (iVar2 == 0) {
        FUN_0064dbe0(plVar3[0xde],1);
        FUN_0064dbe0(plVar3[0xe7],0);
      }
      else {
        FUN_0064dbe0(plVar3[0xde],0);
        FUN_0064dbe0(plVar3[0xe7],1);
      }
      FUN_0064dbe0(plVar3[0xeb],0);
      FUN_0064dbe0(plVar3[0xdd],0);
      FUN_0064dbe0(plVar3[0xfc],1);
      FUN_0064dbe0(plVar3[0xe0],1);
      FUN_0064dbe0(plVar3[0xe3],0);
      FUN_0064dbe0(plVar3[0xe4],1);
      FUN_0064dbe0(plVar3[0xe5],0);
      FUN_0064dbe0(plVar3[0xfd],1);
      FUN_0064dbe0(plVar3[0xfe],1);
      FUN_0064dbe0(plVar3[0xff],1);
      FUN_0064dbe0(plVar3[0xe1],0);
      FUN_0064dbe0(plVar3[0xe2],1);
      FUN_0064dbe0(plVar3[0xe6],0);
      FUN_0064dbe0(plVar3[0xdc],0);
      FUN_0064dbe0(plVar3[0xdf],1);
      FUN_0064dbe0(plVar3[0x100],1);
      FUN_0064dbe0(plVar3[0x101],1);
      FUN_0064dbe0(plVar3[0x102],1);
      FUN_0064dbe0(plVar3[0xe8],1);
      FUN_0064dbe0(plVar3[0xe9],0);
      FUN_0064dbe0(plVar3[0xea],1);
      FUN_00fba580(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      FUN_0064dbe0(plVar3[0xec],0);
      FUN_0064dbe0(plVar3[0xed],0);
      FUN_0064dbe0(plVar3[0xee],1);
      FUN_0064dbe0(plVar3[0xf6],0);
      FUN_0064dbe0(plVar3[0xf7],1);
      FUN_0064dbe0(plVar3[0xf8],0);
      FUN_0064dbe0(plVar3[0xfb],0);
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x114,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
      goto LAB_00fd42ec;
    }
    if (cVar1 == '\x05') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fb9448,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0064de00(plVar3,L"Timer1 Caption dialog");
      FUN_0043e130(&local_f8,*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = FUN_004170c0(L"ATTINY26",local_f8,1);
      if (iVar2 == 0) {
        FUN_0064dbe0(plVar3[0xde],1);
        FUN_0064dbe0(plVar3[0xe7],0);
      }
      else {
        FUN_0064dbe0(plVar3[0xde],0);
        FUN_0064dbe0(plVar3[0xe7],1);
      }
      FUN_0064dbe0(plVar3[0xeb],0);
      FUN_0064dbe0(plVar3[0xdd],0);
      FUN_0064dbe0(plVar3[0xfc],1);
      FUN_0064dbe0(plVar3[0xe0],0);
      FUN_0064dbe0(plVar3[0xe3],0);
      FUN_0064dbe0(plVar3[0xe4],0);
      FUN_0064dbe0(plVar3[0xe5],1);
      FUN_0064dbe0(plVar3[0xfd],0);
      FUN_0064dbe0(plVar3[0xfe],1);
      FUN_0064dbe0(plVar3[0xff],1);
      FUN_0064dbe0(plVar3[0xe1],0);
      FUN_0064dbe0(plVar3[0xe2],0);
      FUN_0064dbe0(plVar3[0xe6],1);
      FUN_0064dbe0(plVar3[0xdc],0);
      FUN_0064dbe0(plVar3[0xdf],0);
      FUN_0064dbe0(plVar3[0x100],1);
      FUN_0064dbe0(plVar3[0x101],1);
      FUN_0064dbe0(plVar3[0x102],1);
      FUN_0064dbe0(plVar3[0xe8],0);
      FUN_0064dbe0(plVar3[0xe9],0);
      FUN_0064dbe0(plVar3[0xea],0);
      FUN_00fba580(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      FUN_0064dbe0(plVar3[0xec],1);
      FUN_0064dbe0(plVar3[0xed],1);
      FUN_0064dbe0(plVar3[0xee],0);
      FUN_0064dbe0(plVar3[0xf6],0);
      FUN_0064dbe0(plVar3[0xf7],0);
      FUN_0064dbe0(plVar3[0xf8],1);
      FUN_0064dbe0(plVar3[0xfb],0);
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x114,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
      goto LAB_00fd42ec;
    }
    if (cVar1 == '\x04') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fbd098,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0064de00(plVar3,L"Timer2 OVF dialog");
      FUN_0064dbe0(plVar3[0xdd],0);
      FUN_0064dbe0(plVar3[0xdf],0);
      FUN_0064dbe0(plVar3[0xe3],0);
      FUN_0064dbe0(plVar3[0xe2],0);
      FUN_0064dbe0(plVar3[0xe1],0);
      FUN_0064dbe0(plVar3[0xdc],0);
      FUN_0064dbe0(plVar3[0xde],0);
      FUN_0064dbe0(plVar3[0xe4],0);
      FUN_0064dbe0(plVar3[0xe5],0);
      FUN_0064dbe0(plVar3[0xe6],0);
      FUN_0064cbf0(plVar3,0x1e3);
      FUN_0064cc50(plVar3,0x104);
      FUN_0064cb90(plVar3[0xd9],0xa0);
      FUN_0064cb90(plVar3[0xda],0xa0);
      FUN_0064cb90(plVar3[0xdb],0xa0);
      FUN_00fbdd90(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xfa,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
      goto LAB_00fd42ec;
    }
    if (cVar1 == '\x03') {
      plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fbd098,1,*(undefined8 *)PTR_DAT_02004030);
      FUN_0064de00(plVar3,L"Timer2 COMP dialog");
      FUN_0064dbe0(plVar3[0xdd],1);
      FUN_0064dbe0(plVar3[0xdf],1);
      FUN_0064dbe0(plVar3[0xe3],0);
      FUN_0064dbe0(plVar3[0xe2],1);
      FUN_0064dbe0(plVar3[0xe1],1);
      FUN_0064dbe0(plVar3[0xdc],1);
      FUN_0064dbe0(plVar3[0xde],1);
      FUN_0064dbe0(plVar3[0xe4],0);
      FUN_0064dbe0(plVar3[0xe5],1);
      FUN_0064dbe0(plVar3[0xe6],1);
      FUN_00fbdd90(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                   *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
      if (iVar2 == 1) {
        FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xfa,&DAT_00f68330);
      }
      FUN_00410f20(plVar3);
      goto LAB_00fd42ec;
    }
    if (cVar1 != '#') {
      if ((*(char *)(param_1 + 0x7f1) == '\v') || (*(char *)(param_1 + 0x7f1) == '\r')) {
        plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fbf398,1,*(undefined8 *)PTR_DAT_02004030);
        FUN_00fc0010(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                     *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
        cVar1 = *(char *)(param_1 + 0x7f1);
        if (cVar1 == '\v') {
          FUN_0064de00(plVar3,L"AVR UART Receiver");
        }
        if (cVar1 == '\r') {
          FUN_0064de00(plVar3,L"AVR UART Transmitter");
        }
        iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
        if (iVar2 == 1) {
          FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x106,&DAT_00f68330);
        }
        FUN_00410f20(plVar3);
      }
      goto LAB_00fd42ec;
    }
    plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00fb2688,1,*(undefined8 *)PTR_DAT_02004030);
    FUN_0064dbe0(plVar3[0xe1],0);
    FUN_0064dbe0(plVar3[0xe4],0);
    FUN_0064dbe0(plVar3[0xdc],0);
    FUN_0064dbe0(plVar3[0xe6],0);
    FUN_0064dbe0(plVar3[0xff],0);
    FUN_0064dbe0(plVar3[0xda],0);
    FUN_0064dbe0(plVar3[0xf5],0);
    FUN_0064dbe0(plVar3[0xf6],0);
    FUN_0064dbe0(plVar3[0xe2],0);
    FUN_0064dbe0(plVar3[0xf2],0);
    FUN_0064dbe0(plVar3[0xf3],0);
    FUN_0064dbe0(plVar3[0xf4],0);
    FUN_0064dbe0(plVar3[0xf9],0);
    FUN_0043e130(&local_100,*(undefined8 *)(param_1 + 0x7e8));
    iVar2 = FUN_004170c0(L"ATTINY26",local_100,1);
    if (iVar2 == 0) {
      FUN_0043e130(&local_108,*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = FUN_004170c0(L"ATTINY24",local_108,1);
      if (iVar2 == 0) {
        FUN_0043e130(&local_110,*(undefined8 *)(param_1 + 0x7e8));
        iVar2 = FUN_004170c0(L"ATMEGA",local_110,1);
        if (iVar2 == 0) {
          FUN_0043e130(&local_118,*(undefined8 *)(param_1 + 0x7e8));
          iVar2 = FUN_004170c0(&DAT_00fd4940,local_118,1);
          if (iVar2 == 0) {
            FUN_0064dbe0(plVar3[0xdc],1);
            FUN_0064dbe0(plVar3[0xda],1);
            FUN_0064dbe0(plVar3[0xe2],1);
            FUN_0064dbe0(plVar3[0xe6],1);
            FUN_0064dbe0(plVar3[0xf8],0);
            FUN_0064dbe0(plVar3[0xf7],0);
            FUN_0064dbe0(plVar3[0xff],0);
            goto LAB_00fd4198;
          }
        }
        FUN_0064dbe0(plVar3[0xdc],1);
        FUN_0064dbe0(plVar3[0xf5],1);
        FUN_0064dbe0(plVar3[0xe6],1);
        FUN_0064dbe0(plVar3[0xff],0);
      }
      else {
        FUN_0064dbe0(plVar3[0xe4],1);
        FUN_0064dbe0(plVar3[0xf6],1);
        FUN_0064dbe0(plVar3[0xf2],1);
        FUN_0064dbe0(plVar3[0xe6],1);
        FUN_0064dbe0(plVar3[0xff],0);
      }
    }
    else {
      FUN_0064dbe0(plVar3[0xe1],1);
      FUN_0064dbe0(plVar3[0xf6],1);
      FUN_0064dbe0(plVar3[0xf2],1);
      FUN_0064dbe0(plVar3[0xe6],1);
      FUN_0064dbe0(plVar3[0xff],0);
    }
LAB_00fd4198:
    FUN_00fb3d10(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
                 *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
    iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
    if (iVar2 == 1) {
      FUN_00417c40(param_1 + 0x7f0,plVar3 + 0x119,&DAT_00f68330);
    }
    FUN_00410f20(plVar3);
    goto LAB_00fd42ec;
  }
  plVar3 = (longlong *)FUN_007fc180(&PTR_FUN_00faec08,1,*(undefined8 *)PTR_DAT_02004030);
  uVar4 = FUN_00b89270();
  FUN_0041ddd0(&local_38,PTR_PTR_02002a30);
  FUN_00b8e650(uVar4,&local_30,L"HDLStrings.Msg_IT_Sense0",local_38);
  FUN_0064de00(plVar3[0xd8],local_30);
  if (*(char *)(param_1 + 0x7f1) == '\x01') {
    FUN_0064de00(plVar3,L"AVR EXT0");
  }
  FUN_0043e130(&local_40,*(undefined8 *)(param_1 + 0x7e8));
  iVar2 = FUN_004170c0(L"ATTINY",local_40,1);
  if (iVar2 == 0) {
    FUN_0043e130(&local_48,*(undefined8 *)(param_1 + 0x7e8));
    iVar2 = FUN_004170c0(L"ATMEGA",local_48,1);
    if (iVar2 == 0) {
      FUN_0043e130(&local_50,*(undefined8 *)(param_1 + 0x7e8));
      iVar2 = FUN_004170c0(&DAT_00fd4940,local_50,1);
      if (iVar2 == 0) {
        FUN_0064de00(plVar3[0xd7],L"IT pin PD2");
        (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xd6] + 0x4f0),0,
                   L"The low level of INT0 generates an interrupt request. ");
        (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xd6] + 0x4f0),1,L"Reserved ");
        (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xd6] + 0x4f0),2,
                   L"The falling edge of INT0 generates an interrupt request.");
        (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                  (*(longlong **)(plVar3[0xd6] + 0x4f0),3,
                   L"The rising edge of INT0 generates an interrupt request. ");
        goto LAB_00fd2df0;
      }
    }
    if (*(char *)(param_1 + 0x7f1) == '\x01') {
      FUN_0064de00(plVar3,L"AVR EXT0");
      FUN_0064de00(plVar3[0xd7],L"IT pin PD0");
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_60,PTR_PTR_02002a30);
      FUN_00b8e650(uVar4,&local_58,L"HDLStrings.Msg_IT_Sense0",local_60);
      FUN_0064de00(plVar3[0xd8],local_58);
    }
    if (*(char *)(param_1 + 0x7f1) == '\x02') {
      FUN_0064de00(plVar3,L"AVR EXT1");
      FUN_0064de00(plVar3[0xd7],L"IT pin PD1");
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_70,PTR_PTR_02001198);
      FUN_00b8e650(uVar4,&local_68,L"HDLStrings.Msg_IT_Sense1",local_70);
      FUN_0064de00(plVar3[0xd8],local_68);
    }
    if (*(char *)(param_1 + 0x7f1) == '\x11') {
      FUN_0064de00(plVar3,L"AVR EXT2");
      FUN_0064de00(plVar3[0xd7],L"IT pin PD2");
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_80,PTR_PTR_02001468);
      FUN_00b8e650(uVar4,&local_78,L"HDLStrings.Msg_IT_Sense2",local_80);
      FUN_0064de00(plVar3[0xd8],local_78);
    }
    if (*(char *)(param_1 + 0x7f1) == '\x12') {
      FUN_0064de00(plVar3,L"AVR EXT3");
      FUN_0064de00(plVar3[0xd7],L"IT pin PD3");
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_90,PTR_PTR_02004678);
      FUN_00b8e650(uVar4,&local_88,L"HDLStrings.Msg_IT_Sense3",local_90);
      FUN_0064de00(plVar3[0xd8],local_88);
    }
    if (*(char *)(param_1 + 0x7f1) == '\x13') {
      FUN_0064de00(plVar3,L"AVR EXT4");
      FUN_0064de00(plVar3[0xd7],L"IT pin PE4");
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_a0,PTR_PTR_02003478);
      FUN_00b8e650(uVar4,&local_98,L"HDLStrings.Msg_IT_Sense4",local_a0);
      FUN_0064de00(plVar3[0xd8],local_98);
    }
    if (*(char *)(param_1 + 0x7f1) == '\x14') {
      FUN_0064de00(plVar3,L"AVR EXT5");
      FUN_0064de00(plVar3[0xd7],L"IT pin PE5");
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_b0,PTR_PTR_02005468);
      FUN_00b8e650(uVar4,&local_a8,L"HDLStrings.Msg_IT_Sense5",local_b0);
      FUN_0064de00(plVar3[0xd8],local_a8);
    }
    if (*(char *)(param_1 + 0x7f1) == '\x15') {
      FUN_0064de00(plVar3,L"AVR EXT6");
      FUN_0064de00(plVar3[0xd7],L"IT pin PE6");
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_c0,PTR_PTR_02004d28);
      FUN_00b8e650(uVar4,&local_b8,L"HDLStrings.Msg_IT_Sense6",local_c0);
      FUN_0064de00(plVar3[0xd8],local_b8);
    }
    if (*(char *)(param_1 + 0x7f1) == '\x16') {
      FUN_0064de00(plVar3,L"AVR EXT7");
      FUN_0064de00(plVar3[0xd7],L"IT pin PE7");
      uVar4 = FUN_00b89270();
      FUN_0041ddd0(&local_d0,PTR_PTR_02002970);
      FUN_00b8e650(uVar4,&local_c8,L"HDLStrings.Msg_IT_Sense7",local_d0);
      FUN_0064de00(plVar3[0xd8],local_c8);
    }
    cVar1 = *(char *)(param_1 + 0x7f1);
    if ((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x11')) || (cVar1 == '\x12')) {
      (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                (*(longlong **)(plVar3[0xd6] + 0x4f0),0,
                 L"The low level of INTn generates an interrupt request.");
      (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                (*(longlong **)(plVar3[0xd6] + 0x4f0),1,L"Reserved ");
      (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                (*(longlong **)(plVar3[0xd6] + 0x4f0),2,
                 L"The falling edge of INTn generates asynchronously an interrupt request.");
      (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                (*(longlong **)(plVar3[0xd6] + 0x4f0),3,
                 L"The rising edge of INTn generates asynchronously an interrupt request.");
    }
    else {
      (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                (*(longlong **)(plVar3[0xd6] + 0x4f0),0,
                 L"The low level of INTn generates an interrupt request.");
      (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                (*(longlong **)(plVar3[0xd6] + 0x4f0),1,
                 L"Any logical change on INTn generates an interrupt request");
      (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                (*(longlong **)(plVar3[0xd6] + 0x4f0),2,
                 L"The falling edge between two samples of INTn generates an interrupt request.");
      (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
                (*(longlong **)(plVar3[0xd6] + 0x4f0),3,
                 L"The rising edge between two samples of INTn generates an interrupt request.");
    }
  }
  else {
    FUN_0064de00(plVar3[0xd7],L"IT pin PD6");
    (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
              (*(longlong **)(plVar3[0xd6] + 0x4f0),0,
               L"The low level of INT0 generates an interrupt request.");
    (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
              (*(longlong **)(plVar3[0xd6] + 0x4f0),1,
               L"Any change on INT0 generates an interrupt request.");
    (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
              (*(longlong **)(plVar3[0xd6] + 0x4f0),2,
               L"The falling edge of INT0 generates an interrupt request.");
    (**(code **)(**(longlong **)(plVar3[0xd6] + 0x4f0) + 0x40))
              (*(longlong **)(plVar3[0xd6] + 0x4f0),3,
               L"The rising edge of INT0 generates an interrupt request.");
  }
LAB_00fd2df0:
  (**(code **)(*(longlong *)plVar3[0xd6] + 0x268))
            ((longlong *)plVar3[0xd6],*(undefined4 *)(param_1 + 0xab8));
  FUN_00faf440(plVar3,param_1 + 0x7f0,*(undefined8 *)(param_1 + 0xc88),
               *(undefined4 *)(param_1 + 0x7e0),*(undefined8 *)(param_1 + 0x7e8));
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 1) {
    FUN_00417c40(param_1 + 0x7f0,plVar3 + 0xe6,&DAT_00f68330);
  }
  FUN_00410f20(plVar3);
LAB_00fd42ec:
  if (*(int *)(param_1 + 0x7e0) == 8) {
    FUN_00410f20(*(undefined8 *)(param_1 + 2000));
  }
  FUN_00414560(&local_118,0x20);
  return;
}

