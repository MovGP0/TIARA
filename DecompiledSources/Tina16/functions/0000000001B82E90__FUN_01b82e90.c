/* Ghidra address: 01b82e90 */
/* Ghidra symbol: FUN_01b82e90 */


longlong * FUN_01b82e90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined1 local_68 [56];
  undefined8 local_30;
  
  local_30 = 0;
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  lVar2 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x38),0);
  iVar4 = *(int *)(*(longlong *)(lVar2 + 0x30) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      FUN_00c3d330(lVar2,local_68,iVar3);
      FUN_004169a0(&local_30,local_68);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_30);
  return plVar1;
}

