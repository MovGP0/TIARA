/* Ghidra address: 0163c1d0 */
/* Ghidra symbol: FUN_0163c1d0 */


longlong * FUN_0163c1d0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  longlong local_30;
  
  local_30 = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar4 = *(int *)(*(longlong *)(param_2 + 0x60) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x60),iVar3);
      FUN_01629130(&local_30,param_1,uVar2,param_3);
      if (local_30 != 0) {
        (**(code **)(*plVar1 + 0x80))(plVar1,local_30,uVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_30);
  return plVar1;
}

