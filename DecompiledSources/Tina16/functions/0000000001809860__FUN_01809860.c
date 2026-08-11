/* Ghidra address: 01809860 */
/* Ghidra symbol: FUN_01809860 */


void FUN_01809860(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_30 = 0;
  local_38 = 0;
  plVar3 = (longlong *)FUN_018066d0(&PTR_FUN_01805e80,1);
  FUN_004168e0(&local_40,param_2);
  (**(code **)(*plVar3 + 0x58))(plVar3,local_40);
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_30,iVar4);
      iVar2 = FUN_00417170(&LAB_01809a24,local_30,1);
      FUN_00416430(&local_38,local_30,iVar2 + 1,0x7fffffff);
      iVar2 = FUN_00417170(&LAB_01809a24,local_30,1);
      FUN_00416430(&local_30,local_30,1,iVar2 + -1);
      iVar2 = FUN_00416420(local_30,0);
      if ((iVar2 != 0) && (iVar2 = FUN_00416420(local_38,0), iVar2 != 0)) {
        FUN_004168b0(&local_48,local_30);
        FUN_004168b0(&local_50,local_38);
        FUN_018097f0(param_1,local_48,local_50);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_50,2);
  FUN_004145c0(&local_40,3);
  return;
}

