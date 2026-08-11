/* Ghidra address: 00fce660 */
/* Ghidra symbol: FUN_00fce660 */


void FUN_00fce660(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 local_348;
  undefined8 local_340 [97];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_348 = 0;
  local_340[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),0);
  iVar7 = 1;
  iVar3 = *(int *)(param_1 + 0x7e0);
  if (iVar3 != 1) {
    if (iVar3 == 8) {
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),1);
      if (0x7f < *(byte *)(param_1 + 0x7f1)) {
        (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x268))(*(longlong **)(param_1 + 0x6f8),1);
        *(byte *)(param_1 + 0x7f1) = *(byte *)(param_1 + 0x7f1) & 0x7f;
      }
      FUN_00450070(&local_20,*(undefined8 *)(param_1 + 0x7e8),&DAT_00fd06a0,&DAT_00fd06b4,1);
      FUN_00416cd0(&local_38,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\pic18\\",
                   local_20,L".inc");
      FUN_00440a20(local_38,1);
      plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      *(longlong **)(param_1 + 2000) = plVar5;
      (**(code **)(*plVar5 + 0xd8))(plVar5,local_38);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
      (**(code **)(*plVar5 + 0x78))(plVar5,L"External interrupt0");
      *(undefined4 *)(param_1 + 0x700) = 5;
      iVar7 = 2;
      FUN_00414b50(&local_20,L"INTCON3");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"External interrupt1");
        *(undefined4 *)(param_1 + 0x704) = 8;
        iVar7 = 3;
      }
      FUN_00414b50(&local_20,L"INTCON3");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"External interrupt2");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 9;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"INTCON3");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"External interrupt3");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 10;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"T0CON");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer0 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 1;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"T1CON");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer1 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 2;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"T2CON");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer2 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 3;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"T3CON");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer3 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0xf;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"T4CON");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer4 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0x10;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"T5CON");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer5 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0x11;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"RBIE");
      iVar3 = FUN_00fd5790(param_1,local_20);
      if (iVar3 != -1) {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"RB change");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0xc;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"RAIE");
      iVar3 = FUN_00fd5790(param_1,local_20);
      if (iVar3 != -1) {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"RA change");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0xd;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"CCP2CON");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Compare 3F");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0xb;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"CCP2CON");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Compare 3F DEMO");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0x1f;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"CCP1CON");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Compare T1");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0xe;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,&DAT_00fd0918);
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer2 PWM");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 4;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"RCREG");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      FUN_00414b50(&local_20,L"RCREG1");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar2 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0' || cVar2 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"UART_RX");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 6;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"TXREG");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      FUN_00414b50(&local_20,L"TXREG1");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar2 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0' || cVar2 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"UART_TX");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 7;
        iVar7 = iVar7 + 1;
      }
      FUN_00410f20(*(undefined8 *)(param_1 + 2000));
    }
    else if (iVar3 == 2) {
      FUN_00450070(&local_20,*(undefined8 *)(param_1 + 0x7e8),&DAT_00fd0cdc,&DAT_00fd06b4,1);
      FUN_00416cd0(&local_38,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\i8051\\",
                   local_20,L".inc");
      FUN_00440a20(local_38,1);
      plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      *(longlong **)(param_1 + 2000) = plVar5;
      (**(code **)(*plVar5 + 0xd8))(plVar5,local_38);
      FUN_00414b50(&local_20,&DAT_00fd0d30);
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"External interrupt 0");
        *(undefined4 *)(param_1 + 0x700) = 1;
        iVar7 = 2;
      }
      FUN_00414b50(&local_20,&DAT_00fd0d30);
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"External interrupt 1");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 2;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"RCAP2L");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer2 Capture mode");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 3;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,&DAT_00fd0e04);
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer2 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 4;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,&DAT_00fd0e18);
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer1 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 5;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,&DAT_00fd0e2c);
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer0 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 6;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,&DAT_00fd0e2c);
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,&DAT_00fd0e40);
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 7;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,&DAT_00fd0e54);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
      (**(code **)(*plVar5 + 0x78))(plVar5,L"UART_RX");
      *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 8;
      FUN_00414b50(&local_20,&DAT_00fd0e54);
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
      (**(code **)(*plVar5 + 0x78))(plVar5,L"UART_TX");
      *(undefined4 *)(param_1 + 0x6fc + (longlong)(iVar7 + 1) * 4) = 9;
      iVar7 = iVar7 + 2;
      FUN_00410f20(*(undefined8 *)(param_1 + 2000));
    }
    else if (iVar3 == 4) {
      FUN_00450070(&local_20,*(undefined8 *)(param_1 + 0x7e8),&DAT_00fd0cdc,&DAT_00fd06b4,1);
      FUN_00416cd0(&local_38,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\avr\\",
                   local_20,L".inc");
      FUN_00440a20(local_38,1);
      plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      *(longlong **)(param_1 + 2000) = plVar5;
      (**(code **)(*plVar5 + 0xd8))(plVar5,local_38);
      FUN_00414b50(&local_20,L"GIMSK");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 == '\0') {
        FUN_00414b50(&local_20,L"EIMSK");
        uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
        cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
        if (cVar1 != '\0') {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
          (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL0 ");
          *(undefined4 *)(param_1 + 0x700) = 1;
          iVar7 = 2;
          FUN_00414b50(&local_20,L"EICRA");
          uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
          cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
          if (cVar1 != '\0') {
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
            (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL1 ");
            *(undefined4 *)(param_1 + 0x704) = 2;
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
            (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL2 ");
            *(undefined4 *)(param_1 + 0x708) = 0x11;
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
            (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL3 ");
            *(undefined4 *)(param_1 + 0x70c) = 0x12;
            iVar7 = 5;
          }
          FUN_00414b50(&local_20,L"EICRB");
          uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
          cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
          if (cVar1 != '\0') {
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
            (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL4 ");
            *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0x13;
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
            (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL5 ");
            *(undefined4 *)(param_1 + 0x6fc + (longlong)(iVar7 + 1) * 4) = 0x14;
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
            (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL6 ");
            *(undefined4 *)(param_1 + 0x6fc + (longlong)(iVar7 + 2) * 4) = 0x15;
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
            (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL7 ");
            *(undefined4 *)(param_1 + 0x6fc + (longlong)(iVar7 + 3) * 4) = 0x16;
            iVar7 = iVar7 + 4;
          }
        }
      }
      else {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL0 ");
        *(undefined4 *)(param_1 + 0x700) = 1;
        iVar7 = 2;
        FUN_00414b50(&local_20,L"EICRA");
        uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
        cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
        if (cVar1 == '\0') {
          FUN_00414b50(&local_20,L"INT1");
          uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
          cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
          if (cVar1 != '\0') {
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
            (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL1 ");
            *(undefined4 *)(param_1 + 0x704) = 2;
            iVar7 = 3;
          }
        }
        else {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
          (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL1 ");
          *(undefined4 *)(param_1 + 0x704) = 2;
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
          (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL2 ");
          *(undefined4 *)(param_1 + 0x708) = 0x11;
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
          (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR EXTERNAL3 ");
          *(undefined4 *)(param_1 + 0x70c) = 0x12;
          iVar7 = 5;
        }
      }
      FUN_00414b50(&local_20,L"TCCR2");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR TIM2_COMP ");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 3;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"TCCR2");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR TIM2_OVF");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 4;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"TCNT1H");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR TIMER1 CAPT");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 5;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"OCR1A");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR TIMER1 COMPA");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 6;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"OCR1B");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR TIMER1 COMPB");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 7;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"TCNT1");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 == '\0') {
        FUN_00414b50(&local_20,L"TCNT1L");
        uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
        cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
        if (cVar1 != '\0') {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
          (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR TIMER1 overflow");
          *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 8;
          iVar7 = iVar7 + 1;
        }
      }
      else {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR TIMER1 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 8;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"OCR1A");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 == '\0') {
        FUN_00414b50(&local_20,L"OCR1AL");
        uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
        cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
        if (cVar1 != '\0') {
          plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
          (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR PWM1 ");
          *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0x23;
          iVar7 = iVar7 + 1;
        }
      }
      else {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR PWM1");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0x23;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,L"TCNT0");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"AVR TIMER0 overflow");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 9;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,&DAT_00fd12d0);
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      FUN_00414b50(&local_20,L"UDR0");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar2 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0' || cVar2 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"USART RXC");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0xb;
        iVar7 = iVar7 + 1;
      }
      FUN_00414b50(&local_20,&DAT_00fd12d0);
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      FUN_00414b50(&local_20,L"UDR0");
      uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
      cVar2 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
      if (cVar1 != '\0' || cVar2 != '\0') {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
        (**(code **)(*plVar5 + 0x78))(plVar5,L"USART TXC");
        *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0xd;
        iVar7 = iVar7 + 1;
      }
      FUN_00410f20(*(undefined8 *)(param_1 + 2000));
    }
    goto LAB_00fd0584;
  }
  FUN_00450070(&local_20,*(undefined8 *)(param_1 + 0x7e8),&DAT_00fd06a0,&DAT_00fd06b4,1);
  FUN_00416cd0(&local_38,4,*(undefined8 *)PTR_DAT_02005598,L"\\VHDL\\MCU\\Include\\",local_20,
               L".inc");
  FUN_00440a20(local_38,1);
  plVar5 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 2000) = plVar5;
  (**(code **)(*plVar5 + 0xd8))(plVar5,local_38);
  FUN_00414b50(&local_20,L"PORTB");
  uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar5 + 0x78))(plVar5,L"External interrupt");
    *(undefined4 *)(param_1 + 0x700) = 5;
    iVar7 = 2;
  }
  FUN_00414b50(&local_20,L"TMR0");
  uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
  if (cVar1 != '\0') {
    FUN_00414b50(&local_20,L"T0IE");
    uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
    FUN_004167d0(local_340,uVar6);
    iVar3 = FUN_00fd5790(param_1,local_340[0]);
    FUN_00414b50(&local_20,L"TMR0IE");
    uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
    FUN_004167d0(&local_348,uVar6);
    iVar4 = FUN_00fd5790(param_1,local_348);
    if ((iVar3 != -1) || (iVar4 != -1)) {
      plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
      (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer0 overflow");
      *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 1;
      iVar7 = iVar7 + 1;
    }
  }
  FUN_00414b50(&local_20,L"TMR1H");
  uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer1 overflow");
    *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 2;
    iVar7 = iVar7 + 1;
  }
  FUN_00414b50(&local_20,L"TMR2");
  uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer2 overflow");
    *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 3;
    iVar7 = iVar7 + 1;
  }
  FUN_00414b50(&local_20,L"IOCA");
  FUN_00414b50(&local_28,L"RAIE");
  FUN_00414b50(&local_30,L"RABIE");
  iVar3 = FUN_00fd5790(param_1,local_20);
  if (iVar3 == -1) {
    iVar3 = FUN_00fd5790(param_1,local_28);
    if (iVar3 != -1) goto LAB_00fcea53;
    iVar3 = FUN_00fd5790(param_1,local_30);
    if (iVar3 != -1) goto LAB_00fcea53;
  }
  else {
LAB_00fcea53:
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar5 + 0x78))(plVar5,L"RA change");
    *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0xd;
    iVar7 = iVar7 + 1;
  }
  FUN_00414b50(&local_20,L"IOCB");
  FUN_00414b50(&local_28,L"RBIE");
  FUN_00414b50(&local_30,L"RABIE");
  iVar3 = FUN_00fd5790(param_1,local_20);
  if (iVar3 == -1) {
    iVar3 = FUN_00fd5790(param_1,local_28);
    if (iVar3 != -1) goto LAB_00fceb02;
    iVar3 = FUN_00fd5790(param_1,local_30);
    if (iVar3 != -1) goto LAB_00fceb02;
  }
  else {
LAB_00fceb02:
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar5 + 0x78))(plVar5,L"RB change");
    *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 0xc;
    iVar7 = iVar7 + 1;
  }
  FUN_00414b50(&local_20,&DAT_00fd0918);
  uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar5 + 0x78))(plVar5,L"Timer2 PWM");
    *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 4;
    iVar7 = iVar7 + 1;
  }
  FUN_00414b50(&local_20,L"RCREG");
  uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar5 + 0x78))(plVar5,L"UART_RX");
    *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 6;
    iVar7 = iVar7 + 1;
  }
  FUN_00414b50(&local_20,L"TXREG");
  uVar6 = FUN_00442620(&DAT_0202efe8,local_20);
  cVar1 = _IsRegisterAvailable(*(undefined8 *)(param_1 + 0x7d8),uVar6);
  if (cVar1 != '\0') {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4f0);
    (**(code **)(*plVar5 + 0x78))(plVar5,L"UART_TX");
    *(undefined4 *)(param_1 + 0x6fc + (longlong)iVar7 * 4) = 7;
    iVar7 = iVar7 + 1;
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 2000));
LAB_00fd0584:
  *(int *)(param_1 + 0x7c8) = iVar7;
  for (iVar3 = 1;
      ((uint)*(byte *)(param_1 + 0x7f1) != *(uint *)(param_1 + 0x6fc + (longlong)iVar3 * 4) &&
      (iVar3 < *(int *)(param_1 + 0x7c8))); iVar3 = iVar3 + 1) {
  }
  (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x268))
            (*(longlong **)(param_1 + 0x6b0),iVar3 + -1);
  if (*(char *)(param_1 + 0x7f0) == '\0') {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),1);
  }
  else {
    FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),0);
  }
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e8),*(undefined8 *)(param_1 + 0x7f8));
  FUN_00414560(&local_348,2);
  FUN_00414560(&local_38,4);
  return;
}

