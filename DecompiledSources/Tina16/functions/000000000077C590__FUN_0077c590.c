/* Ghidra address: 0077c590 */
/* Ghidra symbol: FUN_0077c590 */


void FUN_0077c590(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  int iVar1;
  
  *param_2 = 0xd;
  if ((byte)(param_3 - 2) < 4) {
    *(undefined4 *)(param_2 + 4) = 1;
    iVar1 = 2;
  }
  else if ((byte)(param_3 - 6) < 4) {
    *(undefined4 *)(param_2 + 4) = 2;
    iVar1 = 6;
  }
  else if ((byte)(param_3 - 10) < 4) {
    *(undefined4 *)(param_2 + 4) = 3;
    iVar1 = 10;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    iVar1 = 0;
  }
  *(uint *)(param_2 + 8) = ((uint)param_3 - iVar1) + 1;
  return;
}

