/* Ghidra address: 013ee160 */
/* Ghidra symbol: FUN_013ee160 */


void FUN_013ee160(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  *(bool *)param_3 = *(char *)(param_1 + 0x740) == '\0';
  *(undefined1 *)(param_1 + 0x740) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x738) + 0xe38) = 0;
  iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x6d0));
  if (iVar1 == 0) {
    DAT_02108489 = *(undefined1 *)(param_1 + 0x1098);
  }
  else if (*(int *)(param_1 + 0x1084) == 0) {
    DAT_02108489 = *(undefined1 *)(param_1 + 0x1099);
  }
  else {
    DAT_02108489 = *(undefined1 *)(param_1 + 0x109a);
  }
  return;
}

