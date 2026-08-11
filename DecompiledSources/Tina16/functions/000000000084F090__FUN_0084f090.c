/* Ghidra address: 0084f090 */
/* Ghidra symbol: FUN_0084f090 */


void FUN_0084f090(longlong param_1,short *param_2,ushort param_3)

{
  short sVar1;
  code *pcVar2;
  
  sVar1 = *param_2;
  if ((sVar1 == 0xd) || (sVar1 == 0x1b)) {
    if ((*(char *)(param_1 + 0x538) != '\0') && ((param_3 & 2) == 0)) {
      pcVar2 = (code *)FUN_00411550(param_1,0xab);
      (*pcVar2)(param_1,*param_2 == 0xd);
      *param_2 = 0;
    }
  }
  else if (((sVar1 == 0x26) || (sVar1 == 0x28)) && ((param_3 & 2) != 0)) {
    if (*(char *)(param_1 + 0x538) == '\0') {
      pcVar2 = (code *)FUN_00411550(param_1,0xa9);
      (*pcVar2)(param_1);
    }
    else {
      pcVar2 = (code *)FUN_00411550(param_1,0xab);
      (*pcVar2)(param_1,1);
    }
    *param_2 = 0;
  }
  return;
}

