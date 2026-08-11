/* Ghidra address: 00787b20 */
/* Ghidra symbol: FUN_00787b20 */


undefined4 * FUN_00787b20(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_00787ca0(param_1);
  *param_2 = uVar1;
  uVar1 = FUN_00787f60(param_1);
  param_2[1] = uVar1;
  iVar2 = FUN_00787ca0(param_1);
  iVar3 = FUN_00787fa0(param_1);
  param_2[2] = iVar2 + iVar3;
  iVar2 = FUN_00787f60(param_1);
  iVar3 = FUN_00787c80(param_1);
  param_2[3] = iVar2 + iVar3;
  return param_2;
}

