/* Ghidra address: 0103ade0 */
/* Ghidra symbol: FUN_0103ade0 */


void FUN_0103ade0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
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
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  
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
  puVar5 = &local_4c0;
  for (lVar3 = 0x93; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *param_2;
    param_2 = param_2 + 1;
    puVar5 = puVar5 + 1;
  }
  FUN_004179d0(&local_4c0,&DAT_00f68330);
  iVar4 = 1;
  do {
    lVar3 = (longlong)iVar4;
    if (*(uint *)(param_1 + 0xbac + lVar3 * 4) == (uint)local_4c0._1_1_) {
      FUN_00414b50(&local_4c8,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8));
      iVar2 = FUN_004170c0(&DAT_0103bf94,local_4c8,4);
      if (iVar2 == 0) {
        cVar1 = FUN_01038010(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"INT0addr ; ExtInt");
          FUN_0043f750(local_4e0,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_4e0[0]);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_4e8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_4e8);
        }
        cVar1 = FUN_010380a0(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"INT1addr ; ExtInt1");
          FUN_0043f750(&local_4f0,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_4f0);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_4f8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_4f8);
        }
        cVar1 = FUN_01038130(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"INT2addr ; ExtInt2");
          FUN_0043f750(&local_500,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_500);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_508,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_508);
        }
        cVar1 = FUN_010381c0(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"INT3addr ; ExtInt3");
          FUN_0043f750(&local_510,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_510);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_518,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_518);
        }
        cVar1 = FUN_01038250(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"INT4addr ; ExtInt4");
          FUN_0043f750(&local_520,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_520);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_528,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_528);
        }
        cVar1 = FUN_010382e0(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"INT5addr ; ExtInt5");
          FUN_0043f750(&local_530,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_530);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_538,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_538);
        }
        cVar1 = FUN_01038370(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"INT6addr ; ExtInt6");
          FUN_0043f750(&local_540,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_540);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_548,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_548);
        }
        cVar1 = FUN_01038400(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"INT7addr ; ExtInt7");
          FUN_0043f750(&local_550,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_550);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_558,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_558);
        }
        cVar1 = FUN_01038490(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"OVF0addr ; Timer0");
          FUN_0043f750(&local_560,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_560);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_568,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_568);
        }
        cVar1 = FUN_01038910(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_0043e130(&local_570,*(undefined8 *)(param_1 + 0x8e8));
          iVar2 = FUN_004170c0(L"ATMEGA",local_570,1);
          if (iVar2 == 0) {
            FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"URXCaddr ; UARTRX");
          }
          else {
            FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"URXC0addr ; UARTRX");
          }
          FUN_0043f750(&local_578,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_578);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_580,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_580);
        }
        cVar1 = FUN_010389a0(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_0043e130(&local_588,*(undefined8 *)(param_1 + 0x8e8));
          iVar2 = FUN_004170c0(L"ATMEGA",local_588,1);
          if (iVar2 == 0) {
            FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"UTXCaddr ;UARTTX");
          }
          else {
            FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"UTXC0addr ; UARTTX");
          }
          FUN_0043f750(&local_590,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_590);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_598,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_598);
        }
        cVar1 = FUN_01038520(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"OVF1addr ; Timer1");
          FUN_0043f750(&local_5a0,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_5a0);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_5a8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_5a8);
        }
        cVar1 = FUN_01038880(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"OVF1addr ; Timer1");
          FUN_0043f750(&local_5b0,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_5b0);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_5b8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_5b8);
        }
        cVar1 = FUN_010385b0(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"OC1Aaddr ; Timer1CompA");
          FUN_0043f750(&local_5c0,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_5c0);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_5c8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_5c8);
        }
        cVar1 = FUN_01038640(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"OC1Baddr ; Timer1CompB");
          FUN_0043f750(&local_5d0,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_5d0);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_5d8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_5d8);
        }
        cVar1 = FUN_010386d0(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"ICP1addr ; Timer1CaptA");
          FUN_0043f750(&local_5e0,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_5e0);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_5e8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_5e8);
        }
        cVar1 = FUN_01038760(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"OVF2addr ; Timer2");
          FUN_0043f750(&local_5f0,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_5f0);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_5f8,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_5f8);
        }
        cVar1 = FUN_010387f0(param_1,&local_4c0);
        if (cVar1 != '\0') {
          FUN_00414ad0(param_1 + 0xa88 + lVar3 * 8,L"OC2addr  ;Timer2Comp");
          FUN_0043f750(&local_600,local_4c0._1_1_);
          FUN_00416ba0(param_1 + 0xc00,L"avr_temp_label_",local_600);
          FUN_00416cd0(param_1 + 0xa88 + lVar3 * 8,3,*(undefined8 *)(param_1 + 0xa88 + lVar3 * 8),
                       &DAT_0103c000,*(undefined8 *)(param_1 + 0xc00));
          FUN_00416ba0(&local_608,*(undefined8 *)(param_1 + 0xc00),&DAT_0103c010);
          FUN_00f788b0(param_1,param_3,local_608);
        }
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0xb);
  FUN_00414560(&local_608,0x26);
  FUN_00414560(&local_4d0,2);
  FUN_00417740(&local_4c0,&DAT_00f68330);
  return;
}

