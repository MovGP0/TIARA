/* Ghidra address: 0077ca60 */
/* Ghidra symbol: FUN_0077ca60 */


void FUN_0077ca60(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  int iVar1;
  
  *param_2 = 3;
  if ((byte)(param_3 - 2) < 3) {
    *(undefined4 *)(param_2 + 4) = 1;
    iVar1 = 2;
  }
  else if ((byte)(param_3 - 5) < 4) {
    *(undefined4 *)(param_2 + 4) = 2;
    iVar1 = 5;
  }
  else if ((byte)(param_3 - 9) < 4) {
    *(undefined4 *)(param_2 + 4) = 3;
    iVar1 = 9;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    iVar1 = 0;
  }
  *(uint *)(param_2 + 8) = ((uint)param_3 - iVar1) + 1;
  return;
}

