/* Ghidra address: 0077dda0 */
/* Ghidra symbol: FUN_0077dda0 */


void FUN_0077dda0(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  int iVar1;
  
  *param_2 = 0x12;
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
  else if ((byte)(param_3 - 0xe) < 4) {
    *(undefined4 *)(param_2 + 4) = 4;
    iVar1 = 0xe;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    iVar1 = 0;
  }
  *(uint *)(param_2 + 8) = ((uint)param_3 - iVar1) + 1;
  return;
}

