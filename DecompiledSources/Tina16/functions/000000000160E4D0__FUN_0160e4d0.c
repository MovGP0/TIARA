/* Ghidra address: 0160e4d0 */
/* Ghidra symbol: FUN_0160e4d0 */


undefined1
FUN_0160e4d0(longlong *param_1,undefined4 param_2,uint param_3,longlong *param_4,int *param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  bVar1 = false;
  bVar2 = false;
  *param_5 = 0;
  iVar4 = (**(code **)(*param_1 + 0x28))();
  local_7c = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*param_1 + 0x18))(param_1,local_40,local_7c);
      iVar5 = FUN_004170c0(&DAT_0160e78c,local_40[0],1);
      iVar6 = 0;
      if (local_40[0] != 0) {
        iVar6 = *(int *)(local_40[0] + -4);
      }
      FUN_00416dc0(&local_48,local_40[0],1,iVar5 + -1);
      FUN_00416dc0(&local_50,local_40[0],iVar5 + 1,iVar6 - iVar5);
      plVar7 = (longlong *)FUN_01b21480(local_50);
      if (bVar1) {
LAB_0160e60b:
        bVar1 = true;
      }
      else {
        FUN_0043f750(local_60,param_2);
        iVar6 = FUN_00416db0(local_48,local_60[0]);
        if (iVar6 == 0) goto LAB_0160e60b;
        bVar1 = false;
      }
      if (param_3 == 1) {
        FUN_0043f750(&local_68,param_2);
        iVar6 = FUN_00416db0(local_48,local_68);
        if (iVar6 == 0) {
          *param_5 = local_7c;
        }
      }
      if (bVar2) {
LAB_0160e669:
        bVar2 = true;
      }
      else {
        FUN_0043f750(&local_70,param_2);
        iVar6 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_70);
        if (-1 < iVar6) goto LAB_0160e669;
        bVar2 = false;
      }
      if ((param_4 != (longlong *)0x0) && (param_3 == 2)) {
        FUN_0043f750(&local_78,param_2);
        iVar6 = (**(code **)(*plVar7 + 0xb0))(plVar7,local_78);
        if ((-1 < iVar6) && (iVar6 = (**(code **)(*param_4 + 0xb0))(param_4,local_48), iVar6 == -1))
        {
          (**(code **)(*param_4 + 0x78))(param_4,local_48);
        }
      }
      FUN_00410f20(plVar7);
      local_7c = local_7c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (((bVar1) && ((param_3 & 1) != 0)) || ((bVar2 && ((param_3 & 2) != 0)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  FUN_00414560(&local_78,4);
  FUN_00414560(&local_50,3);
  return uVar3;
}

