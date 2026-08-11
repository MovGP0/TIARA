/* Ghidra address: 017ca260 */
/* Ghidra symbol: FUN_017ca260 */


void FUN_017ca260(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int local_64;
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined2 *local_40 [2];
  
  local_50[0] = 0;
  local_58 = 0;
  uVar3 = FUN_017c9ce0(param_2);
  plVar4 = (longlong *)FUN_017ca1b0(0x40b,uVar3);
  iVar2 = FUN_019954d0(param_2);
  iVar7 = 0;
  local_64 = 0;
  do {
    cVar1 = FUN_017ca060(local_64,uVar3);
    if (cVar1 != '\0') {
      plVar5 = (longlong *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x2c1);
      *(int *)(plVar5 + 4) = local_64 + 1;
      FUN_01d38290(plVar5,1);
      FUN_017ca100(local_64,plVar5,uVar3);
      (**(code **)(*param_2 + 0x20))(param_2,plVar5);
      iVar6 = iVar2 + iVar7 + 1;
      (**(code **)(*plVar5 + 0x208))(plVar5,2,iVar6,0);
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x40))(plVar4);
      (**(code **)(*plVar5 + 0x208))(plVar5,0,iVar6);
      FUN_0043f750(&local_58,local_64);
      FUN_00416ba0(local_50,L"ACMP_AD",local_58);
      FUN_017bf050(plVar5,0,local_50[0]);
      (**(code **)(*plVar5 + 0x2d0))(plVar5,7,local_40);
      *local_40[0] = (short)local_64;
      (**(code **)(*plVar5 + 0x2d0))(plVar5,10,local_40);
      *(undefined1 *)local_40[0] = 3;
      (**(code **)(*param_2 + 0x20))(param_2,plVar5);
      iVar7 = iVar7 + 1;
    }
    local_64 = local_64 + 1;
  } while (local_64 != 3);
  FUN_01995400(param_2);
  iVar6 = FUN_019954a0(param_2);
  FUN_01995490(param_2,iVar6 + iVar7 * 2);
  FUN_019954b0(param_2,iVar2 + iVar7);
  FUN_00410f20(uVar3);
  FUN_00414560(&local_58,2);
  return;
}

