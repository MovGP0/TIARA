/* Ghidra address: 019d03b0 */
/* Ghidra symbol: FUN_019d03b0 */


void FUN_019d03b0(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  int local_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  local_30 = (int)*param_1;
  iStack_2c = (int)((ulonglong)*param_1 >> 0x20);
  local_38 = (int)*param_2;
  iStack_34 = (int)((ulonglong)*param_2 >> 0x20);
  dVar4 = (double)(iStack_34 - iStack_2c) / (double)(local_38 - local_30);
  dVar5 = (double)(param_3 - iStack_2c) / dVar4 + (double)local_30;
  uVar1 = FUN_0040c840(dVar5);
  uVar2 = FUN_0040c840(dVar4 * (dVar5 - (double)local_30) + (double)iStack_2c);
  uVar3 = FUN_019cfd00(uVar1,uVar2);
  *param_4 = uVar3;
  return;
}

