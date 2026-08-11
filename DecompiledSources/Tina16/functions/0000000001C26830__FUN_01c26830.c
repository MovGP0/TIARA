/* Ghidra address: 01c26830 */
/* Ghidra symbol: FUN_01c26830 */


undefined8 FUN_01c26830(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_var;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = *param_2;
  iVar2 = FUN_01c27060(param_1);
  local_20 = (int)uVar1;
  uVar3 = FUN_0040c770((double)local_20 * *(double *)(param_1 + 0x560) + (double)iVar2);
  FUN_01c27060(param_1);
  uStack_1c = (int)((ulonglong)uVar1 >> 0x20);
  uVar4 = FUN_0040c770((double)uStack_1c * *(double *)(param_1 + 0x560) + (double)extraout_var);
  return CONCAT44(uVar4,uVar3);
}

