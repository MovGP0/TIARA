/* Ghidra address: 013a5bd0 */
/* Ghidra symbol: FUN_013a5bd0 */


void FUN_013a5bd0(int *param_1,short param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x28fd) {
    *param_1 = 0x400;
    param_1[1] = 0x20;
  }
  uVar1 = FUN_004095c0((longlong)(*param_1 * 4));
  *(undefined8 *)(param_1 + 2) = uVar1;
  FUN_0040d200(uVar1,(longlong)(*param_1 * 4),0);
  return;
}

