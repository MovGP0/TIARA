/* Ghidra address: 00ff66e0 */
/* Ghidra symbol: FUN_00ff66e0 */


void FUN_00ff66e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar4;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar5;
  ulonglong uVar6;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
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
  undefined8 local_18;
  undefined8 local_10;
  
  local_170 = 0;
  local_178 = 0;
  local_160 = 0;
  local_168 = 0;
  local_150 = 0;
  local_158 = 0;
  local_140 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  local_120 = 0;
  local_128 = 0;
  local_110 = 0;
  local_118 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_38 = 0;
  local_40 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  uVar4 = 0;
  FUN_00ff9780(param_1,param_2,L"PORTC",0,L";PORTC OUTPUT=0");
  FUN_00ffaa00(param_1,param_2,L"PORTC",&DAT_00ff79ac,CONCAT44(uVar4,1),L";PORTC7 = 1");
  uVar3 = 0;
  FUN_00ff9780(param_1,param_2,L"TRISC",1,L";PORTC1-7 OUTPUT");
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"TRISB",&DAT_00ff7a40,uVar3,0);
  FUN_00ffaa00(param_1,param_2,L"TRISB",&DAT_00ff7a50,uVar3 & 0xffffffff00000000,0);
  FUN_00ffaa00(param_1,param_2,L"TRISB",&DAT_00ff7a60,1,0);
  FUN_00ffaa00(param_1,param_2,L"TRISB",&DAT_00ff7a70,1,0);
  FUN_00416780(&local_18,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_20,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_28,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_30,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_10,5,local_18,local_20,local_28,local_30,L";PORTA init");
  FUN_00f787d0(param_1,param_2,local_10);
  FUN_00416780(&local_40,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_38,3,L"CLRF  ",local_40,L"PORTA");
  FUN_00f787d0(param_1,param_2,local_38);
  FUN_00416780(&local_50,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_48,3,L"CLRF  ",local_50,L"LATA");
  FUN_00f787d0(param_1,param_2,local_48);
  iVar1 = FUN_00f794e0(param_1,L"ANSEL0",&DAT_00ff7b0c);
  if (iVar1 == -1) {
    iVar1 = FUN_00f794e0(param_1,L"ADCON1",&DAT_00ff7b0c);
    if (iVar1 != -1) {
      FUN_00ff9ad0(param_1,param_2,L"ADCON1",0xf,0x62,&DAT_00ff7bc8);
    }
    iVar1 = FUN_00f794e0(param_1,L"ANCON0",&DAT_00ff7b0c);
    if (iVar1 != -1) {
      FUN_00ff9ad0(param_1,param_2,L"ANCON0",0xff,0x62,
                   L"; PCFG7(1) PCFG6(1) PCFG5(1) PCFG4 PCFG3 PCFG2 PCFG1 PCFG0 ");
    }
    iVar1 = FUN_00f794e0(param_1,L"ANCON1",&DAT_00ff7b0c);
    if (iVar1 != -1) {
      FUN_00ff9ad0(param_1,param_2,L"ANCON1",0x1f,0x62,&DAT_00ff7ce8);
    }
  }
  else {
    FUN_00416780(&local_60,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_58,3,L"CLRF  ",local_60,L"ANSEL0");
    FUN_00f787d0(param_1,param_2,local_58);
    iVar1 = FUN_00f794e0(param_1,L"ANSEL1",&DAT_00ff7b0c);
    if (iVar1 != -1) {
      FUN_00416780(&local_70,*(undefined2 *)(param_1 + 0xb0));
      FUN_00416cd0(&local_68,3,L"CLRF  ",local_70,L"ANSEL1");
      FUN_00f787d0(param_1,param_2,local_68);
    }
    iVar1 = FUN_00f794e0(param_1,L"ADCON1",&DAT_00ff7b0c);
    if (iVar1 != -1) {
      FUN_00ff9ad0(param_1,param_2,L"ADCON1",0xf,0x62,
                   L"; VCFG1 VCFG0 - FIFOEN BFEMT BFOVFL ADPNT1 ADPNT0 ");
    }
  }
  FUN_00416780(&local_80,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_78,3,L"MOVLW ",local_80,L"0FFH");
  FUN_00f787d0(param_1,param_2,local_78);
  FUN_00416780(&local_90,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_88,3,L"MOVWF ",local_90,L"TRISA");
  FUN_00f787d0(param_1,param_2,local_88);
  FUN_00416780(&local_a0,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_a8,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_b0,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_b8,*(undefined2 *)(param_1 + 0xb0));
  uVar3 = local_b0;
  FUN_00416cd0(&local_98,5,local_a0,local_a8,local_b0,local_b8,L";portb changed init");
  FUN_00f787d0(param_1,param_2,local_98);
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"INTCON",L"RBIF",uVar3,L";CLEAR PORTB IF ");
  uVar2 = CONCAT44((int)(uVar3 >> 0x20),1);
  FUN_00ffaa00(param_1,param_2,L"INTCON",L"RBIE",uVar2,L";PORTB CHANGE ENABLE ");
  uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  iVar1 = FUN_00f794e0(param_1,L"IOCB",&DAT_00ff7b0c);
  if (iVar1 != -1) {
    uVar2 = CONCAT44(uVar4,1);
    FUN_00ffaa00(param_1,param_2,L"IOCB",&DAT_00ff7eb8,uVar2,L"ENABLE PORTCHG INTERRUPT");
    uVar4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  FUN_00ffaa00(param_1,param_2,L"TRISB",&DAT_00ff7eb8,CONCAT44(uVar4,1),L"PORTB4 INPUT");
  FUN_00416780(&local_c8,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_d0,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_d8,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_e0,*(undefined2 *)(param_1 + 0xb0));
  uVar2 = local_d8;
  FUN_00416cd0(&local_c0,5,local_c8,local_d0,local_d8,local_e0,L";TIMER2 init");
  FUN_00f787d0(param_1,param_2,local_c0);
  uVar3 = CONCAT62((int6)((ulonglong)uVar2 >> 0x10),0x62);
  FUN_00ff9ad0(param_1,param_2,L"T3CON",0x30,uVar3,0);
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"PIE1",L"TMR2IE",uVar3,L";disable TMR2IE  ");
  FUN_00ffaa00(param_1,param_2,L"PIR1",L"TMR2IF",uVar3 & 0xffffffff00000000,L";clear TMR2IF ");
  FUN_00416780(&local_f0,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_f8,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_100,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416780(&local_108,*(undefined2 *)(param_1 + 0xb0));
  uVar3 = local_100;
  FUN_00416cd0(&local_e8,5,local_f0,local_f8,local_100,local_108,L";TIMER3 init");
  FUN_00f787d0(param_1,param_2,local_e8);
  iVar1 = FUN_00f794e0(param_1,L"TMR3IE",&DAT_00ff7b0c);
  if (iVar1 != -1) {
    uVar3 = uVar3 & 0xffffffff00000000;
    FUN_00ffaa00(param_1,param_2,L"PIE2",L"TMR3IE",uVar3,L";disable TMR3IE  ");
    FUN_00ffaa00(param_1,param_2,L"PIR2",L"TMR3IF",uVar3 & 0xffffffff00000000,L";clear TMR3IF ");
  }
  FUN_00416780(&local_118,*(undefined2 *)(param_1 + 0xb0));
  uVar5 = 0;
  FUN_00416cd0(&local_110,3,L"BCF   ",local_118,L"T0CON,TMR0ON ");
  FUN_00f787d0(param_1,param_2,local_110);
  iVar1 = FUN_00f794e0(param_1,L"T0IE",&DAT_00ff7b0c);
  if (iVar1 == -1) {
    uVar3 = (ulonglong)uVar5 << 0x20;
    FUN_00ffaa00(param_1,param_2,L"INTCON",L"TMR0IE",uVar3,L"Timer0 Overflow Interrupt Enable");
    FUN_00ffaa00(param_1,param_2,L"INTCON",L"TMR0IF",uVar3 & 0xffffffff00000000,
                 L"Timer0 Ovf It Flag clear");
    FUN_00416780(&local_138,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_130,3,L"BCF   ",local_138,L"T0CON, TMR0ON");
    FUN_00f787d0(param_1,param_2,local_130);
  }
  else {
    uVar3 = (ulonglong)uVar5 << 0x20;
    FUN_00ffaa00(param_1,param_2,L"INTCON",L"T0IE",uVar3,L"Timer0 Overflow Interrupt Enable");
    FUN_00ffaa00(param_1,param_2,L"INTCON",L"T0IF",uVar3 & 0xffffffff00000000,
                 L"Timer0 Ovf It Flag clear");
    FUN_00416780(&local_128,*(undefined2 *)(param_1 + 0xb0));
    FUN_00416cd0(&local_120,3,L"BCF   ",local_128,L"T0CON, TMR0ON");
    FUN_00f787d0(param_1,param_2,local_120);
  }
  FUN_00416780(&local_148,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_140,3,L"BCF   ",local_148,L"STSP, 7");
  FUN_00f787d0(param_1,param_2,local_140);
  FUN_00416780(&local_158,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_150,3,L"CLRF   ",local_158,L"STSP");
  FUN_00f787d0(param_1,param_2,local_150);
  FUN_00416780(&local_168,*(undefined2 *)(param_1 + 0xb0));
  FUN_00416cd0(&local_160,3,L"CLRF   ",local_168,L"CCP_V");
  FUN_00f787d0(param_1,param_2,local_160);
  FUN_00416780(&local_178,*(undefined2 *)(param_1 + 0xb0));
  uVar4 = 0;
  FUN_00416cd0(&local_170,3,L"CLRF   ",local_178,L"CCP_C");
  FUN_00f787d0(param_1,param_2,local_170);
  FUN_00ff8f20(param_1,param_2,1);
  FUN_00ffaa00(param_1,param_2,L"PIE1",L"CCP1IE",CONCAT44(uVar4,1),L"CCP1 IT ENABLED");
  FUN_00ffaa00(param_1,param_2,L"PIE2",L"CCP2IE",1,L"CCP2 IT ENABLED");
  FUN_00ff8f20(param_1,param_2,0);
  FUN_00ff9780(param_1,param_2,L"PIR1",0,0);
  FUN_00ff9780(param_1,param_2,L"PIR2",0,0);
  FUN_00ff9780(param_1,param_2,L"CCP1CON",10,0);
  uVar4 = 0;
  FUN_00ff9780(param_1,param_2,L"CCP2CON",10,0);
  uVar2 = CONCAT44(uVar4,*(undefined4 *)(param_1 + 0x984));
  FUN_00ff9280(param_1,param_2,L"CCPR1L",L"CCPR1H",uVar2,0);
  uVar3 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),*(undefined4 *)(param_1 + 0x988));
  FUN_00ff9280(param_1,param_2,L"CCPR2L",L"CCPR2H",uVar3,0);
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"PORTB",&DAT_00ff7a40,uVar3,0);
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"PORTB",&DAT_00ff7a50,uVar3,0);
  uVar3 = CONCAT44((int)(uVar3 >> 0x20),*(undefined4 *)(param_1 + 0x97c));
  FUN_00ff9280(param_1,param_2,L"TMR1L",L"TMR1H",uVar3,L"TMR1 reload");
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"T1CON",L"TMR1ON",uVar3,L"timer1 OFF");
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"PIR1",L"TMR1IF",uVar3,0);
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"PIE1",L"TMR1IE",uVar3,L"Timer1 Overflow Interrupt Disable");
  uVar2 = CONCAT44((int)(uVar3 >> 0x20),1);
  uVar6 = 0;
  FUN_00ffaa00(param_1,param_2,L"T1CON",L"RD16",uVar2,0);
  uVar3 = CONCAT44((int)((ulonglong)uVar2 >> 0x20),2);
  FUN_00ffa270(param_1,param_2,L"T1CON",L"T1CKPS0",uVar3,uVar6 & 0xffffffff00000000,
               L"Timer1 prescaler");
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"T1CON",L"T1OSCEN",uVar3,L"LP Oscillator Enable");
  uVar3 = uVar3 & 0xffffffff00000000;
  FUN_00ffaa00(param_1,param_2,L"T1CON",L"T1SYNC",uVar3,L"Timer1 External Clock Input");
  FUN_00ffaa00(param_1,param_2,L"T1CON",L"TMR1CS",uVar3 & 0xffffffff00000000,
               L"Timer1 Clock Source Select");
  FUN_00ffaa00(param_1,param_2,L"INTCON",L"PEIE",1,L";PERIFERIAL INTERRUPT ENABLE ");
  FUN_00ffaa00(param_1,param_2,L"INTCON",&DAT_00ff8760,1,L";GLOBAL INTERRUPT ENABLE ");
  FUN_00414560(&local_178,0x2e);
  return;
}

