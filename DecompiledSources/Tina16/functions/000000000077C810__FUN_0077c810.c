/* Ghidra address: 0077c810 */
/* Ghidra symbol: FUN_0077c810 */


void FUN_0077c810(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  int iVar1;
  
  *param_2 = 1;
  if ((byte)(param_3 - 2) < 3) {
    *(undefined4 *)(param_2 + 4) = 1;
    iVar1 = 2;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    iVar1 = 0;
  }
  *(uint *)(param_2 + 8) = ((uint)param_3 - iVar1) + 1;
  return;
}

