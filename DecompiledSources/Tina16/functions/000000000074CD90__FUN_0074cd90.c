/* Ghidra address: 0074cd90 */
/* Ghidra symbol: FUN_0074cd90 */


void FUN_0074cd90(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0074cd10(param_1);
  uVar2 = FUN_0074cd20(param_1);
  uVar3 = FUN_0074cd00(param_1);
  (**(code **)(*param_1 + 400))(param_1,uVar1,uVar2,param_2,uVar3);
  return;
}

