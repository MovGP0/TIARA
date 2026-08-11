/* Ghidra address: 013ae3e0 */
/* Ghidra symbol: FUN_013ae3e0 */


void FUN_013ae3e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  puVar3 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,param_4,0);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  while( true ) {
    iVar2 = FUN_004170c0(&LAB_013ae5a8,local_res18[0],1);
    if (iVar2 < 1) break;
    iVar2 = FUN_004170c0(&LAB_013ae5a8,local_res18[0],1);
    FUN_00416dc0(local_30,local_res18[0],1,iVar2 + -1);
    iVar2 = FUN_004170c0(&LAB_013ae5a8,local_res18[0],1);
    FUN_00416dc0(local_res18,local_res18[0],iVar2 + 1,0xff);
    (**(code **)(*plVar4 + 0x78))(plVar4,local_30[0]);
  }
  (**(code **)(*plVar4 + 0x78))(plVar4,local_res18[0]);
  (**(code **)*puVar3)(puVar3,plVar4);
  FUN_00410f20(plVar4);
  FUN_00f42d60(*(undefined8 *)(param_1 + 0x408),local_res10,puVar3);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x6d0);
  FUN_00848a70(lVar1,*(int *)(lVar1 + 0x4e0) + 1);
  FUN_00414480(local_30);
  FUN_00414560(&local_res10,2);
  return;
}

