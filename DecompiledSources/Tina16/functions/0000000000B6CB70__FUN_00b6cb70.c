/* Ghidra address: 00b6cb70 */
/* Ghidra symbol: FUN_00b6cb70 */


void FUN_00b6cb70(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 3) {
    if (bVar1 == 2) {
      (**(code **)(*param_1 + 0x140))(param_1);
    }
    else if (bVar1 == 0) {
      (**(code **)(*param_1 + 0x120))(param_1);
    }
    else if (bVar1 == 1) {
      (**(code **)(*param_1 + 0x130))(param_1);
    }
  }
  else if (bVar1 == 3) {
    (**(code **)(*param_1 + 0x150))(param_1);
  }
  else if (bVar1 == 4) {
    (**(code **)(*param_1 + 0x160))(param_1);
  }
  return;
}

