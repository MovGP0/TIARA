/* Ghidra address: 0077d960 */
/* Ghidra symbol: FUN_0077d960 */


void FUN_0077d960(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  int iVar1;
  
  *param_2 = 0x1e;
  if ((byte)(param_3 - 2) < 6) {
    *(undefined4 *)(param_2 + 4) = 1;
    iVar1 = 2;
  }
  else if ((byte)(param_3 - 8) < 2) {
    *(undefined4 *)(param_2 + 4) = 2;
    iVar1 = 8;
  }
  else if (param_3 == 10) {
    *(undefined4 *)(param_2 + 4) = 3;
    iVar1 = 10;
  }
  else if ((byte)(param_3 - 0xb) < 2) {
    *(undefined4 *)(param_2 + 4) = 4;
    iVar1 = 0xb;
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    iVar1 = 0;
  }
  *(uint *)(param_2 + 8) = ((uint)param_3 - iVar1) + 1;
  return;
}

