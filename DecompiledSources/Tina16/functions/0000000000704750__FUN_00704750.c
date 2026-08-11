/* Ghidra address: 00704750 */
/* Ghidra symbol: FUN_00704750 */


void FUN_00704750(longlong param_1,char param_2)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0x580) != param_2) {
    *(char *)(param_1 + 0x580) = param_2;
    if (param_2 == '\x01') {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffffdff;
    }
    else {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x200;
    }
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_00655b90(param_1);
    }
  }
  return;
}

