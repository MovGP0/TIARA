/* Ghidra address: 010fbe10 */
/* Ghidra symbol: FUN_010fbe10 */


void FUN_010fbe10(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x458))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x458))(param_1);
    FUN_00f1df90(uVar2,param_2);
  }
  lVar1 = (**(code **)(*param_1 + 0x460))(param_1);
  if (lVar1 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x460))(param_1);
    FUN_00f1df90(uVar2,param_2);
  }
  return;
}

