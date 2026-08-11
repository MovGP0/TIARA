/* Ghidra address: 00e102d0 */
/* Ghidra symbol: FUN_00e102d0 */


longlong * FUN_00e102d0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_res10 [3];
  undefined8 local_40 [2];
  undefined8 local_30;
  
  local_40[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar1 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*plVar1 + 0x78))(plVar1,0);
  lVar2 = FUN_00e0ffc0(param_1);
  FUN_00416cd0(local_40,3,L" COMPONENT ",local_res10[0],L" IS PORT( ");
  (**(code **)(*plVar1 + 0x78))(plVar1,local_40[0]);
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(lVar2,iVar4);
      FUN_00416cd0(&local_30,7,&DAT_00e104f8,*(undefined8 *)(lVar3 + 0x10),&DAT_00e1050c,
                   *(undefined8 *)(lVar3 + 0x18),&DAT_00e10520,*(undefined8 *)(lVar3 + 0x20),
                   *(undefined8 *)(lVar3 + 0x28));
      if (iVar4 < *(int *)(lVar2 + 0x10) + -1) {
        FUN_00416ad0(&local_30,&DAT_00e10530);
      }
      else {
        FUN_00416ad0(&local_30,&DAT_00e10540);
      }
      (**(code **)(*plVar1 + 0x78))(plVar1,local_30);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  (**(code **)(*plVar1 + 0x78))(plVar1,L" END COMPONENT;");
  (**(code **)(*plVar1 + 0x78))(plVar1,0);
  FUN_00414480(local_40);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return plVar1;
}

