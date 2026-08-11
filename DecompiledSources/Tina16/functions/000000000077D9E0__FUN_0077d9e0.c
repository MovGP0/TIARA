/* Ghidra address: 0077d9e0 */
/* Ghidra symbol: FUN_0077d9e0 */


void FUN_0077d9e0(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  int iVar1;
  
  *param_2 = 0x1d;
  if (param_3 == 2) {
    *(undefined4 *)(param_2 + 4) = 1;
    iVar1 = 2;
  }
  else if (param_3 == 3) {
    *(undefined4 *)(param_2 + 4) = 2;
    iVar1 = 3;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    iVar1 = 0;
  }
  *(uint *)(param_2 + 8) = ((uint)param_3 - iVar1) + 1;
  return;
}

