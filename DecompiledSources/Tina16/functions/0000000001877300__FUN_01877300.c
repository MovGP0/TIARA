/* Ghidra address: 01877300 */
/* Ghidra symbol: FUN_01877300 */


void FUN_01877300(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_01877510(param_1,param_2);
  uVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  FUN_00409a70(uVar2,param_3,(longlong)iVar1);
  return;
}

