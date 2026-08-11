/* Ghidra address: 006d6860 */
/* Ghidra symbol: FUN_006d6860 */


void FUN_006d6860(longlong param_1,char param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x4a1) != param_2) {
    if (param_2 == '\0') {
      uVar1 = FUN_006d6630(param_1);
      *(undefined1 *)(param_1 + 0x4a1) = 0;
      FUN_006d7230(*(undefined8 *)(param_1 + 0x498),param_1,uVar1);
    }
    else {
      *(undefined1 *)(param_1 + 0x4a1) = 1;
      FUN_006d76e0(*(undefined8 *)(param_1 + 0x498),param_1);
    }
  }
  return;
}

