/* Ghidra address: 00699600 */
/* Ghidra symbol: FUN_00699600 */


undefined8 FUN_00699600(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
  if (cVar1 == '\0') {
    if (param_2 == '\0') {
      uVar2 = 0xb;
    }
    else {
      uVar2 = uVar3;
      if (param_2 == '\x01') {
        uVar2 = 0xf;
      }
    }
  }
  else if ((*(char *)(param_1 + 0x40) == '\0') || (*(char *)(param_1 + 0x38) == '\0')) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (param_2 == '\0') {
        uVar2 = 8;
      }
      else if (param_2 == '\x01') {
        uVar2 = 0xc;
      }
    }
    else if (param_2 == '\0') {
      uVar2 = 9;
    }
    else {
      uVar2 = uVar3;
      if (param_2 == '\x01') {
        uVar2 = 0xd;
      }
    }
  }
  else if (param_2 == '\0') {
    uVar2 = 10;
  }
  else {
    uVar2 = uVar3;
    if (param_2 == '\x01') {
      uVar2 = 0xe;
    }
  }
  return uVar2;
}

