/* Ghidra address: 0140f5d0 */
/* Ghidra symbol: FUN_0140f5d0 */


void FUN_0140f5d0(undefined8 param_1,ushort *param_2,ushort *param_3)

{
  undefined8 uVar1;
  
  *param_2 = *param_3;
  param_2[1] = param_3[1];
  uVar1 = FUN_004095c0((uint)*param_2 * 2);
  *(undefined8 *)(param_2 + 4) = uVar1;
  FUN_0040d200(uVar1,(uint)*param_2 * 2,0);
  return;
}

