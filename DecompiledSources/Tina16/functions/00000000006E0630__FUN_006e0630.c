/* Ghidra address: 006e0630 */
/* Ghidra symbol: FUN_006e0630 */


int FUN_006e0630(longlong *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c [3];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar2 = 0;
  if (param_2 != (short *)0x0) {
    iVar2 = *(int *)(param_2 + -2);
  }
  if ((iVar2 != 1) || (*param_2 != 0x1a)) {
    lVar4 = 0;
    iVar2 = 0;
    uVar3 = FUN_00416740(param_2);
    uVar3 = FUN_006e04d0(param_1,uVar3,local_2c);
    FUN_004167d0(&local_38,uVar3);
    if (0 < iVar1) {
      lVar4 = FUN_006df500(param_1[7],iVar1 + -1);
      iVar2 = FUN_006ddf30(lVar4);
    }
    if ((iVar2 < local_2c[0]) || (lVar4 == 0)) {
      if (1 < local_2c[0] - iVar2) {
        FUN_0041ddd0(&local_40,PTR_PTR_02001b70);
        FUN_006dc500(local_40);
      }
    }
    else if (local_2c[0] <= iVar2) {
      iVar5 = (local_2c[0] - iVar2) + -1;
      do {
        lVar4 = FUN_006dd390(lVar4);
        if ((lVar4 == 0) && (0 < iVar2 - local_2c[0])) {
          FUN_0041ddd0(&local_48,PTR_PTR_02001b70);
          FUN_006dc500(local_48);
        }
        iVar2 = iVar2 + -1;
        iVar5 = iVar5 + 1;
      } while (iVar5 != 0);
    }
    FUN_006dee40(param_1[7],lVar4,local_38);
  }
  FUN_00414560(&local_48,3);
  return iVar1;
}

