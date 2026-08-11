/* Ghidra address: 00b6c870 */
/* Ghidra symbol: FUN_00b6c870 */


longlong * FUN_00b6c870(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00b698f0(param_2,param_3);
  uVar2 = FUN_00414df0(param_2);
  uVar3 = FUN_00414df0(param_2);
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = *(undefined4 *)(*param_2 + -4);
  }
  (**(code **)(*param_1 + 200))(param_1,uVar2,uVar3,uVar1);
  return param_2;
}

