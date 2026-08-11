/* Ghidra address: 0141be80 */
/* Ghidra symbol: FUN_0141be80 */


void FUN_0141be80(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(plVar3,local_res10[0]);
  uVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6f0),uVar1);
  iVar2 = (**(code **)(*plVar3 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_004b3cf0(plVar3,local_30,iVar4);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6f0),0,iVar4,local_30[0]);
      FUN_004b5390(plVar3,&local_38,iVar4);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6f0),1,iVar4,local_38);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return;
}

