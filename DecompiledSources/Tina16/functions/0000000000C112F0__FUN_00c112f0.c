/* Ghidra address: 00c112f0 */
/* Ghidra symbol: FUN_00c112f0 */


void FUN_00c112f0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x20) == '\0') || (*(longlong *)(param_1 + 0x18) == 0)) {
    *(undefined4 *)(param_1 + 8) = param_2;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    if (0 < iVar1) {
      FUN_00bf37c0(*(undefined8 *)(param_1 + 0x18),iVar1,iVar1);
    }
    *(undefined4 *)(param_1 + 8) = param_2;
    FUN_00bf37c0(*(undefined8 *)(param_1 + 0x18),param_2,param_2);
  }
  return;
}

