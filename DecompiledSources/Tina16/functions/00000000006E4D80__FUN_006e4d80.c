/* Ghidra address: 006e4d80 */
/* Ghidra symbol: FUN_006e4d80 */


undefined8 FUN_006e4d80(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 == '\0') {
    if (param_2 == '\x01') {
      if ((*(longlong *)(param_1 + 0x628) == 0) && (*(longlong *)(param_1 + 0x5a8) == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (param_2 == '\0') {
      if ((((*(longlong *)(param_1 + 0x618) == 0) && (*(longlong *)(param_1 + 0x598) == 0)) &&
          (*(longlong *)(param_1 + 0x628) == 0)) && (*(longlong *)(param_1 + 0x5a8) == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == '\x01') {
    if ((*(longlong *)(param_1 + 0x628) == 0) && (*(longlong *)(param_1 + 0x5a8) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (param_2 == '\0') {
    if ((*(longlong *)(param_1 + 0x598) == 0) && (*(longlong *)(param_1 + 0x5a8) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

