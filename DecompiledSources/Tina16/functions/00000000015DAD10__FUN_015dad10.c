/* Ghidra address: 015dad10 */
/* Ghidra symbol: FUN_015dad10 */


void FUN_015dad10(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(short *)(param_1 + 0xa0) == -0x100) || (*(char *)(param_1 + 0xe0) != '\0')) {
    FUN_015da560(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x103) = 0;
    FUN_015c1d40(*(undefined8 *)(param_1 + 0x98));
    cVar1 = FUN_015da4a0(param_1,*(undefined8 *)(param_1 + 0x88));
    if (cVar1 == '\0') {
      FUN_015da660(param_1);
    }
    else {
      FUN_015da7f0(param_1);
    }
    cVar1 = FUN_015c9b20(*(undefined8 *)(param_1 + 0x238));
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0x111) == '\0')) {
      if (*(char *)(param_1 + 0x86) == '\0') {
        FUN_00410f20(*(undefined8 *)(param_1 + 0x250));
        *(undefined8 *)(param_1 + 0x250) = 0;
      }
      uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x30,param_1);
      FUN_004134c0(uVar2);
    }
    FUN_015c6ba0(*(undefined8 *)(param_1 + 0x238));
  }
  *(undefined1 *)(param_1 + 0x84) = 1;
  FUN_015dae40(param_1);
  return;
}

