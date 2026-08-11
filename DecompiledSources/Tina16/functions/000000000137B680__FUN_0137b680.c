/* Ghidra address: 0137b680 */
/* Ghidra symbol: FUN_0137b680 */


void FUN_0137b680(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_30 [8];
  undefined1 local_28 [16];
  
  *(undefined8 *)(param_1 + 0x23) = 0x6c61757472695607;
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))(*(longlong **)(param_1 + 0x80),L"Single");
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))(*(longlong **)(param_1 + 0x80),L"Normal");
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))(*(longlong **)(param_1 + 0x80),L"Free run");
  *(undefined4 *)(param_1 + 0xfc) = 2;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x78))(*(longlong **)(param_1 + 0x88),L"Source");
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x78))(*(longlong **)(param_1 + 0x88),L"Input");
  *(undefined4 *)(param_1 + 0x100) = 0;
  cVar1 = *(char *)(param_1 + 0x98);
  if ((cVar1 == '\x04') || (cVar1 == '\x0f')) {
    FUN_00b909e0(local_28,1);
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137bd24,1,local_28);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Swept-sine",uVar2);
    FUN_00b909e0(local_28,1);
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137bd4e,1,local_28);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Ampl. spectrum",uVar2);
    FUN_00b909e0(local_28,2);
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137bd4e,2,local_28);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Ampl. spectral density",uVar2);
    FUN_00b909e0(local_28,4);
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137bdba,4,local_28);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Power spectrum",uVar2);
    FUN_00b909e0(local_28,5);
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137bdba,5,local_28);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Power spectral density",uVar2);
  }
  else if (cVar1 == '\b') {
    local_30[0] = 0;
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137be26,0,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Transmission Coef.",uVar2);
    local_30[0] = 0;
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137be6e,0,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Reflection Coef.",uVar2);
    FUN_00b909e0(local_28,8);
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137beae,8,local_28);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Impedance",uVar2);
    local_30[0] = 0;
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137bed8,0,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"S-parameters",uVar2);
    local_30[0] = 0;
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137bf0e,0,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Z-parameters",uVar2);
    local_30[0] = 0;
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137bf42,0,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"Y-parameters",uVar2);
    local_30[0] = 0;
    uVar2 = FUN_01107d10(&DAT_01106a78,1,&DAT_0137bf76,0,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x118) + 0x80))
              (*(longlong **)(param_1 + 0x118),L"H-parameters",uVar2);
  }
  cVar1 = *(char *)(param_1 + 0x98);
  if ((cVar1 == '\x04') || (cVar1 == '\b')) {
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  else if (cVar1 == '\x0f') {
    *(undefined4 *)(param_1 + 0x104) = 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))(*(longlong **)(param_1 + 0x90),L"Uniform");
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))(*(longlong **)(param_1 + 0x90),L"Hanning");
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))(*(longlong **)(param_1 + 0x90),L"Flattop");
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))(*(longlong **)(param_1 + 0x90),L"Blackman");
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))(*(longlong **)(param_1 + 0x90),L"Hamming");
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x78))(*(longlong **)(param_1 + 0x90),L"Bartlet");
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xa8) = 0x412e848000000000;
  *(double *)(param_1 + 0xb0) = (*(double *)(param_1 + 0xa8) + *(double *)(param_1 + 0xa0)) / 2.0;
  *(double *)(param_1 + 0xb8) = *(double *)(param_1 + 0xa8) - *(double *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xc4) = 100;
  *(undefined4 *)(param_1 + 200) = 0x400;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0xe0) = 0x3f50624dd2f1a9fc;
  *(undefined8 *)(param_1 + 0xe8) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  return;
}

