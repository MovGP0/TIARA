/* Ghidra address: 00edb780 */
/* Ghidra symbol: FUN_00edb780 */


ulonglong FUN_00edb780(longlong param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong in_stack_fffffffffffffd88;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined1 local_208 [256];
  undefined1 local_108 [256];
  
  local_230 = 0;
  local_238 = 0;
  local_240 = 0;
  local_210 = 0;
  local_218 = 0;
  local_220 = 0;
  local_228 = 0;
  uVar2 = in_stack_fffffffffffffd88 & 0xffffffffffffff00;
  uVar3 = param_2;
  cVar1 = FUN_016babb0(*(undefined8 *)(param_1 + 0xef8),1,
                       L"GASFET|NMF|PMF|CAP|C|IND|RES|R|D|NPN|PNP|LPNP|NJF|PJF|NMOS|PMOS|VSWITCH|ISWITCH|SW|CSW|CORE|UGATE|UTGATE|UEFF|UGFF|UIO|DINPUT|DOUTPUT|TRN"
                       ,&DAT_00edbb9c,uVar2,param_2);
  if (cVar1 == '\0') {
    uVar2 = uVar2 & 0xffffffffffffff00;
    uVar3 = param_2;
    cVar1 = FUN_016babb0(*(undefined8 *)(param_1 + 0xef8),1,L"PARAM",&DAT_00edbb9c,uVar2,param_2);
    if (cVar1 == '\0') {
      uVar3 = param_2;
      cVar1 = FUN_016babb0(*(undefined8 *)(param_1 + 0xef8),1,L"TEMP",&DAT_00edbb9c,
                           uVar2 & 0xffffffffffffff00,param_2);
      if (cVar1 == '\0') {
        FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),param_2,0,&DAT_00edbc40,&DAT_00edbc5a,
                     uVar3 & 0xffffffffffffff00);
      }
    }
    else {
      FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),local_108,0,&DAT_00edbc40,&DAT_00edbbcc,
                   uVar3 & 0xffffffffffffff00);
      FUN_004154b0(&local_238,param_2,0);
      FUN_004154b0(&local_240,local_108,0);
      FUN_00415980(&local_230,3,local_238,&DAT_00edbbf8,local_240);
      FUN_00415560(param_2,local_230,0xff);
    }
  }
  else {
    uVar3 = CONCAT71((int7)(uVar3 >> 8),0x28);
    FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),local_108,0,&DAT_00edbbc8,&DAT_00edbbcc,uVar3);
    FUN_016ba960(*(undefined8 *)(param_1 + 0xef8),local_208,0,&DAT_00edbbc8,&DAT_00edbbcc,
                 uVar3 & 0xffffffffffffff00);
    FUN_016b9f90(*(undefined8 *)(param_1 + 0xef8),0x29);
    FUN_004154b0(&local_218,param_2,0);
    FUN_004154b0(&local_220,local_108,0);
    FUN_004154b0(&local_228,local_208,0);
    FUN_00415980(&local_210,6,local_218,&DAT_00edbbf8,local_220,&DAT_00edbc08,local_228,
                 &DAT_00edbc18);
    FUN_00415560(param_2,local_210,0xff);
  }
  FUN_00414590(&local_240,7);
  return param_2;
}

