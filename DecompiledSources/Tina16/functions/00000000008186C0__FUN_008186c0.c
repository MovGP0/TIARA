/* Ghidra address: 008186c0 */
/* Ghidra symbol: FUN_008186c0 */


void FUN_008186c0(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xd9) == '\0') && (param_3 == '\b')) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xe0) + 0x494) - *(int *)(param_1 + 0x104);
    if (iVar1 != 0) {
      FUN_00818570(param_1,-iVar1);
    }
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + 0x494);
  }
  return;
}

