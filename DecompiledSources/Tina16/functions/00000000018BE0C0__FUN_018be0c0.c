/* Ghidra address: 018be0c0 */
/* Ghidra symbol: FUN_018be0c0 */


undefined8 FUN_018be0c0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_2 = *param_2 + 1;
  iVar1 = FUN_018bdfc0(param_1,*param_2);
  if (iVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd0) + 8))(*(longlong **)(param_1 + 0xd0),iVar1)
    ;
  }
  return uVar2;
}

