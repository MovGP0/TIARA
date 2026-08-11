/* Ghidra address: 01538710 */
/* Ghidra symbol: FUN_01538710 */


bool FUN_01538710(longlong param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if ((((param_2 == 0x3fe) || (param_2 == 0x3ec)) || (param_2 == 0x4b1)) || (param_2 == 0x4b0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x70);
    if (cVar1 == '\0') {
      if ((((param_2 == 0x10) || (param_2 == 0xd9)) ||
          ((param_2 == 0xda || ((param_2 == 0xf || (param_2 == 0x3e)))))) ||
         ((param_2 == 0x66 || (param_2 == 100)))) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else if (cVar1 == '\x01') {
      if (((((param_2 == 0x10) || (param_2 == 0xd9)) || (param_2 == 0xda)) ||
          ((param_2 == 0x3e || (param_2 == 0x66)))) || (param_2 == 100)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else if (cVar1 == '\x02') {
      bVar2 = param_2 == 0xf;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}

