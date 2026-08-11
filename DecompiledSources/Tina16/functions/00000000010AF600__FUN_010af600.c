/* Ghidra address: 010af600 */
/* Ghidra symbol: FUN_010af600 */


void FUN_010af600(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  *(int *)(param_1 + 8) = param_2;
  uVar1 = FUN_004095c0((longlong)(param_2 * 4));
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  FUN_0040d200(uVar1,(longlong)(*(int *)(param_1 + 8) * 4),0xffffffff);
  return;
}

