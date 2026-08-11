/* Ghidra address: 00b6ce10 */
/* Ghidra symbol: FUN_00b6ce10 */


longlong * FUN_00b6ce10(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00b69980(param_2,param_3);
  uVar2 = FUN_00414de0(param_2);
  uVar3 = FUN_00414de0(param_2);
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *(int *)(*param_2 + -4);
  }
  (**(code **)(*param_1 + 0x138))(param_1,uVar2,uVar3,iVar1 * 2);
  return param_2;
}

