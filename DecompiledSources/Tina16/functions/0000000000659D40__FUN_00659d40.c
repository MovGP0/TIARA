/* Ghidra address: 00659d40 */
/* Ghidra symbol: FUN_00659d40 */


void FUN_00659d40(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  if (((*(short *)(param_2 + 8) == 1) || (*(short *)(param_2 + 8) == 2)) &&
     (cVar1 = FUN_00657060(*(undefined8 *)(param_2 + 0x10),param_2), cVar1 != '\0')) {
    return;
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}

