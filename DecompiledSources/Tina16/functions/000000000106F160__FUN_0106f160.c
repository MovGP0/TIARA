/* Ghidra address: 0106f160 */
/* Ghidra symbol: FUN_0106f160 */


undefined8 FUN_0106f160(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  FUN_00414480(param_2);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4f0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (9 < iVar3) break;
      if (0 < iVar3) {
        FUN_00416ad0(param_2,&LAB_0106f244);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar3);
      FUN_00416ad0(param_2,local_30[0]);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_30);
  return param_2;
}

