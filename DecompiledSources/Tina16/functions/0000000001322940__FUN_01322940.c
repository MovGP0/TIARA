/* Ghidra address: 01322940 */
/* Ghidra symbol: FUN_01322940 */


void FUN_01322940(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (*(char *)(param_2 + 0x29f) != '\0') {
    if (*(longlong *)(param_2 + 0x290) != 0) {
      FUN_00414ad0(*(longlong *)(param_2 + 0x290) + 0x12e0,L"Exception Happened");
    }
    *(undefined1 *)(param_2 + 0x28f) = 1;
  }
  if (*(longlong *)(param_2 + 0x290) != 0) {
    if ((*(char *)(param_2 + 0x28f) == '\0') &&
       (*(char *)(*(longlong *)(param_2 + 0x290) + 0x49c) != '\x01')) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_2 + 0x28f) = uVar1;
    FUN_01af2b10(*(undefined8 *)(*(longlong *)(param_2 + 0x290) + 0xf10));
    if ((*(char *)(*(longlong *)(param_2 + 0x290) + 0x49c) == '\x01') &&
       (*(char *)(param_2 + 0x29f) == '\0')) {
      FUN_01b07d50(*(undefined8 *)(param_2 + 0x290));
      FUN_00f51380(*(undefined8 *)(param_2 + 0x290),1);
      *(undefined8 *)(param_2 + 0x290) = 0;
    }
  }
  return;
}

