/* Ghidra address: 01564e30 */
/* Ghidra symbol: FUN_01564e30 */


void FUN_01564e30(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_30 = 0;
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x9c0) + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x9c0),iVar5);
      if (*(int *)(lVar4 + 0x10) == 0x40a) {
        uVar1 = *(undefined4 *)(lVar4 + 0x18);
        FUN_01d43440(&local_30,uVar1);
        iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_30);
        if (iVar2 == -1) {
          FUN_01d43440(&local_40,uVar1);
          FUN_00416ba0(&local_38,&DAT_01565038,local_40);
          (**(code **)(*plVar3 + 0x78))(plVar3,local_38);
        }
      }
      else if (*(int *)(lVar4 + 0x10) == 0x40b) {
        uVar1 = *(undefined4 *)(lVar4 + 0x18);
        FUN_01d43440(&local_48,uVar1);
        iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_48);
        if (iVar2 == -1) {
          FUN_01d43440(&local_58,uVar1);
          FUN_00416ba0(&local_50,&DAT_0156504c,local_58);
          (**(code **)(*plVar3 + 0x78))(plVar3,local_50);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00416cd0(&local_60,4,*(undefined8 *)(param_1 + 0x7a8),&DAT_01565060,L"mixed_info",L".txt");
  FUN_015695b0(param_1,plVar3,local_60,0);
  FUN_00410f20(plVar3);
  FUN_01602e30(L"After save_mixed_info",1);
  FUN_00414560(&local_60,7);
  return;
}

