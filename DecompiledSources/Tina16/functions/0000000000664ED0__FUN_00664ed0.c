/* Ghidra address: 00664ed0 */
/* Ghidra symbol: FUN_00664ed0 */


void FUN_00664ed0(longlong param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    FUN_00664d90(param_1);
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_00664df0(param_1);
    }
    else {
      FUN_00664db0(param_1);
    }
  }
  else if ((param_2 == 0x68) && (*(char *)(param_1 + 0x2c) != '\0')) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      uVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x18),0,0
                                );
      *(undefined4 *)(param_1 + 0x14) = uVar1;
    }
    else {
      thunk_FUN_03e0f7b4(0x68,0,param_1 + 0x14,0);
    }
  }
  return;
}

