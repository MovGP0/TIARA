/* Ghidra address: 00818660 */
/* Ghidra symbol: FUN_00818660 */


void FUN_00818660(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0xd8) == '\0') && (param_3 == '\b')) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xc0) + 0x494) - *(int *)(param_1 + 0x100);
    if (iVar1 != 0) {
      FUN_00818480(param_1,-iVar1);
    }
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x494);
  }
  return;
}

