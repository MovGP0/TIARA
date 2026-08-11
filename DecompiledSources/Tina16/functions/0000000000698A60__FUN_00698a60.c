/* Ghidra address: 00698a60 */
/* Ghidra symbol: FUN_00698a60 */


undefined8 FUN_00698a60(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar2 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
  if (cVar1 == '\0') {
    if (param_2 == '\0') {
      uVar2 = 0x13;
    }
    else if (param_2 == '\x01') {
      uVar2 = 0x17;
    }
    else {
      uVar2 = uVar3;
      if (param_2 == '\x02') {
        uVar2 = 0x1b;
      }
    }
  }
  else if ((*(char *)(param_1 + 0x40) == '\0') || (*(char *)(param_1 + 0x38) == '\0')) {
    if (*(char *)(param_1 + 0x38) == '\0') {
      if (param_2 == '\0') {
        uVar2 = 0x10;
      }
      else if (param_2 == '\x01') {
        uVar2 = 0x14;
      }
      else if (param_2 == '\x02') {
        uVar2 = 0x18;
      }
    }
    else if (param_2 == '\0') {
      uVar2 = 0x11;
    }
    else if (param_2 == '\x01') {
      uVar2 = 0x15;
    }
    else {
      uVar2 = uVar3;
      if (param_2 == '\x02') {
        uVar2 = 0x19;
      }
    }
  }
  else if (param_2 == '\0') {
    uVar2 = 0x12;
  }
  else if (param_2 == '\x01') {
    uVar2 = 0x16;
  }
  else {
    uVar2 = uVar3;
    if (param_2 == '\x02') {
      uVar2 = 0x1a;
    }
  }
  return uVar2;
}

