/* Ghidra address: 01644360 */
/* Ghidra symbol: FUN_01644360 */


void FUN_01644360(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_00414b50(&local_30,
               *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) + 0x160));
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar2 + 0x2c) = 0x23;
  FUN_004b50b0(plVar2,local_30);
  iVar1 = (**(code **)(*plVar2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_38,iVar3);
      FUN_01643810(local_38,&local_40,&local_48,&local_50);
      FUN_01644480(param_1,local_40,local_48,local_50);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_50,5);
  return;
}

