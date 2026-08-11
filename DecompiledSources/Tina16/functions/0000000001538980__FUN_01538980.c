/* Ghidra address: 01538980 */
/* Ghidra symbol: FUN_01538980 */


undefined8 FUN_01538980(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if ((((param_2 == 0x3fe) || (param_2 == 0x3ec)) || (param_2 == 0x4b1)) || (param_2 == 0x4b0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x70);
    if (cVar1 == '\0') {
      if ((((param_2 == 0x10) || (param_2 == 0xd9)) ||
          ((param_2 == 0xda || ((param_2 == 0xf || (param_2 == 0x3e)))))) ||
         ((param_2 == 0x66 || (((param_2 == 100 || (param_2 == 0xe)) || (param_2 == 0xd)))))) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else if (cVar1 == '\x01') {
      if ((((param_2 == 0x10) || (param_2 == 0xd9)) ||
          (((param_2 == 0xda || ((param_2 == 0x3e || (param_2 == 0x66)))) || (param_2 == 100)))) ||
         (param_2 == 0xe)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else if (cVar1 == '\x02') {
      if ((param_2 == 0xf) || (param_2 == 0xd)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

