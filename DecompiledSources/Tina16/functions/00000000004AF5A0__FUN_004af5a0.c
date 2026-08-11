/* Ghidra address: 004af5a0 */
/* Ghidra symbol: FUN_004af5a0 */


undefined8 FUN_004af5a0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_004aebe0(param_1,param_2);
  uVar2 = 0;
  if (-1 < iVar1) {
    *(undefined8 *)(param_1[1] + (longlong)iVar1 * 8) = 0;
    FUN_004ae870(param_1,iVar1);
    uVar2 = param_2;
    if ((undefined **)*param_1 != &PTR_FUN_00472dd0) {
      (**(code **)(*param_1 + 8))(param_1,param_2,1);
    }
  }
  return uVar2;
}

