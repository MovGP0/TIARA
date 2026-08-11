/* Ghidra address: 00c73960 */
/* Ghidra symbol: FUN_00c73960 */


void FUN_00c73960(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1;
  if (*(char *)(param_1 + 0x531) == '\x03') {
    for (; (lVar1 != 0 && (*(int *)(lVar1 + 0x2a8) == 0)); lVar1 = *(longlong *)(lVar1 + 0x78)) {
    }
    if (lVar1 == 0) {
      FUN_00687f30(param_1);
    }
    else {
      FUN_0080dac0(*(undefined8 *)PTR_DAT_02004030,*(undefined4 *)(lVar1 + 0x2a8));
    }
  }
  else if (*(char *)(param_1 + 0x531) == '\x06') {
    lVar1 = FUN_007f9b70(param_1,1);
    if (lVar1 == 0) {
      FUN_00687f30(param_1);
    }
    else {
      FUN_00805200(lVar1);
    }
  }
  else {
    FUN_00687f30(param_1);
  }
  return;
}

