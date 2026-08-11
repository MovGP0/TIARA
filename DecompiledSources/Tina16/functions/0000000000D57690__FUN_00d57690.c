/* Ghidra address: 00d57690 */
/* Ghidra symbol: FUN_00d57690 */


undefined8 * FUN_00d57690(undefined8 *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_00423b50(param_2,-*param_2,-param_2[1]);
  iVar1 = FUN_004230a0(param_3);
  iVar2 = FUN_004230a0(param_2);
  iVar3 = FUN_004230c0(param_3);
  iVar4 = FUN_004230c0(param_2);
  FUN_00423b50(param_2,(longlong)(iVar1 - iVar2) / 2 & 0xffffffff,
               (longlong)(iVar3 - iVar4) / 2 & 0xffffffff);
  FUN_00423b50(param_2,*param_3,param_3[1]);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = *(undefined8 *)(param_2 + 2);
  return param_1;
}

