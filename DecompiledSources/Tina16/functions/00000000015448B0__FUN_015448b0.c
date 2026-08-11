/* Ghidra address: 015448b0 */
/* Ghidra symbol: FUN_015448b0 */


bool FUN_015448b0(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int local_70;
  int local_6c;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  lVar6 = FUN_01d34560(&PTR_FUN_01d33528,1,5,5);
  *param_3 = lVar6;
  iVar9 = *(int *)(param_2 + 0x10);
  local_70 = 0;
  if (-1 < iVar9 + -1) {
    do {
      lVar6 = FUN_01d347d0(param_2,local_70);
      plVar1 = *(longlong **)(lVar6 + 0x18);
      bVar3 = false;
      iVar10 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
      local_6c = 0;
      if (-1 < iVar10 + -1) {
        do {
          lVar7 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x28),local_6c);
          plVar2 = *(longlong **)(lVar7 + 0x18);
          (**(code **)(*plVar2 + 0x288))(plVar2,local_40);
          (**(code **)(*plVar1 + 0x288))(plVar1,&local_48);
          sVar4 = FUN_01d03160(plVar2);
          sVar5 = FUN_01d03160(plVar1);
          if ((sVar4 == sVar5) && (plVar2 == plVar1)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) break;
          local_6c = local_6c + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
      if (!bVar3) {
        uVar8 = FUN_0153f8f0(&DAT_0153e548,1,lVar6);
        (**(code **)(*(longlong *)*param_3 + 0x50))((longlong *)*param_3,uVar8);
      }
      local_70 = local_70 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = *(int *)(*param_3 + 0x10);
  local_70 = 0;
  if (-1 < iVar9 + -1) {
    do {
      uVar8 = FUN_01d347d0(*param_3,local_70);
      uVar8 = FUN_0153f8f0(&DAT_0153e548,1,uVar8);
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x50))(*(longlong **)(param_1 + 0x28),uVar8);
      local_70 = local_70 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  iVar9 = *(int *)(*param_3 + 0x10);
  FUN_00414560(&local_48,2);
  return 0 < iVar9;
}

