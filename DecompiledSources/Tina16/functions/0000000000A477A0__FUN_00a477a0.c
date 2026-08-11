/* Ghidra address: 00a477a0 */
/* Ghidra symbol: FUN_00a477a0 */


void FUN_00a477a0(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 8))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 8))(param_1);
    (**(code **)(*param_2 + 0x88))(param_2,param_3,param_4,uVar2);
  }
  return;
}

