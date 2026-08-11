/* Ghidra address: 00bfde50 */
/* Ghidra symbol: FUN_00bfde50 */


void FUN_00bfde50(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong local_10;
  
  local_10 = 0;
  if ((*(uint *)(param_1 + 0xa4) & 0x400) == 0) {
    FUN_00bf36a0(param_1,&local_10);
    iVar1 = 0;
    if (local_10 != 0) {
      iVar1 = *(int *)(local_10 + -4);
    }
    *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
  }
  else {
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  FUN_00414480(&local_10);
  return;
}

