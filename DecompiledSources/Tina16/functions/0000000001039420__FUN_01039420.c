/* Ghidra address: 01039420 */
/* Ghidra symbol: FUN_01039420 */


void FUN_01039420(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 local_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0 [2];
  longlong local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  
  local_680 = 0;
  local_678 = 0;
  local_670 = 0;
  local_668 = 0;
  local_660 = 0;
  local_658 = 0;
  local_650 = 0;
  local_648 = 0;
  local_640 = 0;
  local_638 = 0;
  local_630 = 0;
  local_628 = 0;
  local_620 = 0;
  local_618 = 0;
  local_610 = 0;
  local_608 = 0;
  local_600 = 0;
  local_5f8 = 0;
  local_5f0 = 0;
  local_5e8 = 0;
  local_5e0 = 0;
  local_5d8 = 0;
  local_5d0 = 0;
  local_5c8 = 0;
  local_5c0 = 0;
  local_5b8 = 0;
  local_5b0 = 0;
  local_5a8 = 0;
  local_5a0 = 0;
  local_598 = 0;
  local_590 = 0;
  local_588 = 0;
  local_580 = 0;
  local_578 = 0;
  local_570 = 0;
  local_568 = 0;
  local_560 = 0;
  local_558 = 0;
  local_550 = 0;
  local_548 = 0;
  local_540 = 0;
  local_538 = 0;
  local_530 = 0;
  local_528 = 0;
  local_520 = 0;
  local_518 = 0;
  local_510 = 0;
  local_508 = 0;
  local_500 = 0;
  local_4f8 = 0;
  local_4f0 = 0;
  local_4e8 = 0;
  local_4e0[0] = 0;
  local_4c8 = 0;
  local_4d0 = 0;
  puVar7 = &local_4c0;
  for (lVar5 = 0x93; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *param_2;
    param_2 = param_2 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_004179d0(&local_4c0,&DAT_00f68330);
  iVar8 = *(int *)(param_1 + 0x8fc);
  iVar6 = 1;
  if (0 < iVar8) {
    do {
      FUN_00414b50(&local_4c8,*(undefined8 *)(param_1 + 0x8f8 + (longlong)iVar6 * 8));
      iVar3 = FUN_004170c0(&DAT_0103ab64,local_4c8,4);
      if (0 < iVar3) {
        iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
        if (iVar3 < iVar4) {
          FUN_005b8820(&local_4d0,local_4c8,iVar4 + -1);
          FUN_005b8850(local_4e0,local_4d0,(iVar4 - iVar3) + -2);
          FUN_00414b50(&local_4d0,local_4e0[0]);
        }
        iVar3 = 0;
        if (local_4d0 != 0) {
          iVar3 = *(int *)(local_4d0 + -4);
        }
        while ((sVar1 = *(short *)(local_4d0 + -2 + (longlong)iVar3 * 2), sVar1 == 9 ||
               (sVar1 == 0x20))) {
          FUN_005b8820(&local_4e8,local_4d0,iVar3 + -1);
          FUN_00414b50(&local_4d0,local_4e8);
          iVar3 = 0;
          if (local_4d0 != 0) {
            iVar3 = *(int *)(local_4d0 + -4);
          }
        }
        iVar3 = FUN_00416db0(local_4d0,L"EXT_INT0");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038010(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x01'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_4f0,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_4f0);
          FUN_005b8850(&local_4f8,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_4f8);
          FUN_00416ba0(&local_500,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_500);
        }
        iVar3 = FUN_00416db0(local_4d0,L"EXT_INT1");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_010380a0(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x02'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_508,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_508);
          FUN_005b8850(&local_510,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_510);
          FUN_00416ba0(&local_518,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_518);
        }
        iVar3 = FUN_00416db0(local_4d0,L"EXT_INT2");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038130(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x11'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_520,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_520);
          FUN_005b8850(&local_528,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_528);
          FUN_00416ba0(&local_530,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_530);
        }
        iVar3 = FUN_00416db0(local_4d0,L"EXT_INT3");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_010381c0(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x12'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_538,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_538);
          FUN_005b8850(&local_540,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_540);
          FUN_00416ba0(&local_548,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_548);
        }
        iVar3 = FUN_00416db0(local_4d0,L"EXT_INT4");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038250(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x13'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_550,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_550);
          FUN_005b8850(&local_558,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_558);
          FUN_00416ba0(&local_560,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_560);
        }
        iVar3 = FUN_00416db0(local_4d0,L"EXT_INT5");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_010382e0(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x14'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_568,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_568);
          FUN_005b8850(&local_570,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_570);
          FUN_00416ba0(&local_578,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_578);
        }
        iVar3 = FUN_00416db0(local_4d0,L"EXT_INT6");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038370(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x15'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_580,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_580);
          FUN_005b8850(&local_588,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_588);
          FUN_00416ba0(&local_590,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_590);
        }
        iVar3 = FUN_00416db0(local_4d0,L"EXT_INT7");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038400(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x16'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_598,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_598);
          FUN_005b8850(&local_5a0,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_5a0);
          FUN_00416ba0(&local_5a8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_5a8);
        }
        iVar3 = FUN_00416db0(local_4d0,L"TIM0_OVF");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038490(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\t'))))
        {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_5b0,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_5b0);
          FUN_005b8850(&local_5b8,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_5b8);
          FUN_00416ba0(&local_5c0,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_5c0);
        }
        iVar3 = FUN_00416db0(local_4d0,L"USART0_RXC");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038910(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\v'))))
        {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_5c8,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_5c8);
          FUN_005b8850(&local_5d0,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_5d0);
          FUN_00416ba0(&local_5d8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_5d8);
        }
        iVar3 = FUN_00416db0(local_4d0,L"USART0_TXC");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_010389a0(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\r'))))
        {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_5e0,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_5e0);
          FUN_005b8850(&local_5e8,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_5e8);
          FUN_00416ba0(&local_5f0,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_5f0);
        }
        iVar3 = FUN_00416db0(local_4d0,L"TIM1_OVF");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038520(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\b'))))
        {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_5f8,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_5f8);
          FUN_005b8850(&local_600,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_600);
          FUN_00416ba0(&local_608,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_608);
        }
        iVar3 = FUN_00416db0(local_4d0,L"TIM1_COMPA");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_010385b0(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x06'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_610,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_610);
          FUN_005b8850(&local_618,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_618);
          FUN_00416ba0(&local_620,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_620);
        }
        iVar3 = FUN_00416db0(local_4d0,L"TIM1_COMPB");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038640(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\a'))))
        {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_628,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_628);
          FUN_005b8850(&local_630,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_630);
          FUN_00416ba0(&local_638,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_638);
        }
        iVar3 = FUN_00416db0(local_4d0,L"TIM1_CAPT");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_010386d0(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x05'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_640,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_640);
          FUN_005b8850(&local_648,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_648);
          FUN_00416ba0(&local_650,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_650);
        }
        iVar3 = FUN_00416db0(local_4d0,L"TIM2_OVF");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_01038760(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x04'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_658,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_658);
          FUN_005b8850(&local_660,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_660);
          FUN_00416ba0(&local_668,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_668);
        }
        iVar3 = FUN_00416db0(local_4d0,L"TIM2_COMP");
        if ((iVar3 == 0) &&
           ((cVar2 = FUN_010387f0(param_1,&local_4c0), cVar2 != '\0' || (local_4c0._1_1_ == '\x03'))
           )) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
          iVar3 = FUN_004170c0(L"avr_temp_label",local_4c8,1);
          iVar4 = FUN_004170c0(&DAT_0103ab64,local_4c8,iVar3 + 1);
          FUN_005b8820(&local_670,local_4c8,iVar4 + -1);
          FUN_00414ad0(param_1 + 0xc00,local_670);
          FUN_005b8850(&local_678,*(undefined8 *)(param_1 + 0xc00),iVar4 - iVar3);
          FUN_00414ad0(param_1 + 0xc00,local_678);
          FUN_00416ba0(&local_680,*(undefined8 *)(param_1 + 0xc00),&DAT_0103abc0);
          FUN_00f788b0(param_1,param_3,local_680);
        }
        if (local_4d0 == 0) {
          FUN_00414480(param_1 + 0x8f8 + (longlong)iVar6 * 8);
        }
      }
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414560(&local_680,0x35);
  FUN_00414560(&local_4d0,2);
  FUN_00417740(&local_4c0,&DAT_00f68330);
  return;
}

