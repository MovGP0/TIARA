/* Ghidra address: 008061d0 */
/* Ghidra symbol: FUN_008061d0 */


void FUN_008061d0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_44 [2];
  int local_3c;
  
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    local_44[0] = 0x2c;
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_03f78330(uVar2,local_44);
    if (local_3c == 2) {
      *(undefined1 *)(param_1 + 0x4d2) = 1;
    }
    else if (local_3c == 3) {
      *(undefined1 *)(param_1 + 0x4d2) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x4d2) = 0;
    }
  }
  return;
}

