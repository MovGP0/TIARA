/* Ghidra address: 00b6ce80 */
/* Ghidra symbol: FUN_00b6ce80 */


void FUN_00b6ce80(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      (**(code **)(*param_1 + 0x148))(param_1);
    }
    else if (bVar1 == 0) {
      (**(code **)(*param_1 + 0x128))(param_1);
    }
    else if (bVar1 == 1) {
      (**(code **)(*param_1 + 0x138))(param_1);
    }
  }
  else if (bVar1 == 3) {
    (**(code **)(*param_1 + 0x158))(param_1);
  }
  else if (bVar1 == 4) {
    (**(code **)(*param_1 + 0x168))(param_1);
  }
  return;
}

