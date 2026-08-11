/* Ghidra address: 00700810 */
/* Ghidra symbol: FUN_00700810 */


undefined8 FUN_00700810(longlong param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 == '\0') {
    if (param_2 == '\x01') {
      if ((*(longlong *)(param_1 + 0x570) == 0) && (*(longlong *)(param_1 + 0x550) == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
    else if (param_2 == '\0') {
      if ((((*(longlong *)(param_1 + 0x560) == 0) && (*(longlong *)(param_1 + 0x540) == 0)) &&
          (*(longlong *)(param_1 + 0x570) == 0)) && (*(longlong *)(param_1 + 0x550) == 0)) {
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
    if ((*(longlong *)(param_1 + 0x570) == 0) && (*(longlong *)(param_1 + 0x550) == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else if (param_2 == '\0') {
    if ((*(longlong *)(param_1 + 0x540) == 0) && (*(longlong *)(param_1 + 0x550) == 0)) {
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

