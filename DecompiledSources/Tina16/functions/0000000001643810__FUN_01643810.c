/* Ghidra address: 01643810 */
/* Ghidra symbol: FUN_01643810 */


void FUN_01643810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res8 [4];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar2,local_res8[0]);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_20,0);
  FUN_00414ad0(param_2,local_20);
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_28,1);
  FUN_00414ad0(param_3,local_28);
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (iVar1 < 3) {
    FUN_01613110(0);
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_30,2);
  FUN_00414ad0(param_4,local_30);
  FUN_00410f20(plVar2);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res8);
  return;
}

