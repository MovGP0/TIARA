/* Ghidra address: 006f8460 */
/* Ghidra symbol: FUN_006f8460 */


undefined8 FUN_006f8460(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 == '\0') {
    if (param_2 == '\x02') {
      if ((*(longlong *)(param_1 + 0x670) == 0) && (*(longlong *)(param_1 + 0x5e0) == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (param_2 == '\x01') {
      if (((*(longlong *)(param_1 + 0x660) == 0) && (*(longlong *)(param_1 + 0x5d0) == 0)) &&
         ((*(longlong *)(param_1 + 0x670) == 0 && (*(longlong *)(param_1 + 0x5e0) == 0)))) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (((((*(longlong *)(param_1 + 0x650) == 0) && (*(longlong *)(param_1 + 0x5c0) == 0)) &&
              (*(longlong *)(param_1 + 0x660) == 0)) &&
             ((*(longlong *)(param_1 + 0x5d0) == 0 && (*(longlong *)(param_1 + 0x670) == 0)))) &&
            (*(longlong *)(param_1 + 0x5e0) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (param_2 == '\x02') {
    if ((*(longlong *)(param_1 + 0x5e0) == 0) && (*(longlong *)(param_1 + 0x670) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (param_2 == '\x01') {
    if ((*(longlong *)(param_1 + 0x5d0) == 0) && (*(longlong *)(param_1 + 0x660) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (((*(longlong *)(param_1 + 0x5c0) == 0) && (*(longlong *)(param_1 + 0x5d0) == 0)) &&
          (*(longlong *)(param_1 + 0x5e0) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

