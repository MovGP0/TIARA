/* Ghidra address: 00ddf340 */
/* Ghidra symbol: FUN_00ddf340 */


void FUN_00ddf340(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x44) = 0;
  if (*(int *)(param_2 + 0x44) <= iVar1 + -1) {
    do {
      thunk_FUN_0398fb79(*(undefined8 *)
                          (*(longlong *)(param_2 + 0x50) + (longlong)*(int *)(param_2 + 0x44) * 8));
      *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  thunk_FUN_0398fb79(*(undefined8 *)(param_2 + 0x50));
  thunk_FUN_0398fb79(*(undefined8 *)(param_2 + 0x38));
  return;
}

