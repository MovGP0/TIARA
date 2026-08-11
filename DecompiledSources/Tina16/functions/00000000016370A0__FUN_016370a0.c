/* Ghidra address: 016370a0 */
/* Ghidra symbol: FUN_016370a0 */


longlong * FUN_016370a0(longlong param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  int local_84;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  local_58 = 0;
  local_50[0] = 0;
  local_40[0] = 0;
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = (**(code **)(*param_2 + 0x28))();
  local_84 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,local_50,local_84);
      (**(code **)(*plVar6 + 0x78))(plVar6,local_50[0]);
      local_84 = local_84 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  lVar7 = FUN_0161bc10(*(undefined4 *)(param_1 + 0x5bc),*(undefined8 *)(param_3 + 0x48));
  iVar2 = *(int *)(lVar7 + 0xc);
  if (iVar2 != 0) {
    bVar1 = true;
    while (bVar1) {
      bVar1 = false;
      iVar3 = (**(code **)(*plVar6 + 0x28))();
      local_84 = 0;
      if (-1 < iVar3 + -1) {
        do {
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_58,local_84);
          iVar4 = FUN_0043fc00(local_58);
          local_5c = 0;
          iVar8 = iVar2;
          if (-1 < iVar2 + -1) {
            do {
              if (*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0x98) + (longlong)iVar4 * 8) +
                          (longlong)local_5c * 4) == 1) {
                FUN_0043f750(local_40,local_5c);
                iVar5 = (**(code **)(*plVar6 + 0xb0))(plVar6,local_40[0]);
                if (iVar5 == -1) {
                  (**(code **)(*plVar6 + 0x78))(plVar6,local_40[0]);
                  bVar1 = true;
                }
              }
              local_5c = local_5c + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          local_84 = local_84 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00414560(&local_58,2);
  FUN_00414480(local_40);
  return plVar6;
}

