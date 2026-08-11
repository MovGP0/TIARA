/* Ghidra address: 008367a0 */
/* Ghidra symbol: FUN_008367a0 */


void FUN_008367a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  if (*(short *)(param_2 + 8) == 0x1b) {
    cVar1 = FUN_008355d0(param_1);
    if (cVar1 != '\0') {
      cVar1 = FUN_006805f0(param_1);
      if (cVar1 != '\0') {
        *(undefined8 *)(param_2 + 0x18) = 1;
      }
    }
  }
  return;
}

