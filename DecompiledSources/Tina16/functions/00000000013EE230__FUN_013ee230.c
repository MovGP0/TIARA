/* Ghidra address: 013ee230 */
/* Ghidra symbol: FUN_013ee230 */


void FUN_013ee230(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  FUN_013ecee0(param_1);
  if ((*(char *)(param_1 + 0x740) == '\0') && (*(char *)(param_1 + 0x741) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  *(undefined1 *)(param_1 + 0x740) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x738) + 0xe38) = 0;
  return;
}

