/* Ghidra address: 01a9a790 */
/* Ghidra symbol: FUN_01a9a790 */


undefined4 FUN_01a9a790(int *param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  
  param_2 = param_2 ^ 0x8000000000000000;
  iVar1 = *param_1;
  dVar4 = (double)FUN_0040bcd0(param_2);
  dVar5 = (double)FUN_0040bdd0(param_2);
  uVar2 = FUN_0040c770((double)iVar1 * dVar4 + (double)param_1[1] * dVar5);
  dVar4 = (double)FUN_0040bdd0(param_2);
  dVar5 = (double)FUN_0040bcd0(param_2);
  uVar3 = FUN_0040c770((double)-iVar1 * dVar4 + (double)param_1[1] * dVar5);
  uVar2 = FUN_00b92120(uVar2,uVar3);
  return uVar2;
}

