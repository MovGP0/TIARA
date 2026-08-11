/* Ghidra address: 017c4060 */
/* Ghidra symbol: FUN_017c4060 */


undefined8 * FUN_017c4060(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_60;
  undefined1 local_58 [48];
  
  local_60 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(local_58,&DAT_017bfca8);
  FUN_00414480(param_1);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_017c3f60(local_res10,plVar3);
  FUN_017c3f60(local_res18,plVar4);
  iVar1 = (**(code **)(*plVar4 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_60,iVar5);
      iVar2 = (**(code **)(*plVar3 + 0xb0))(plVar3,local_60);
      if (-1 < iVar2) {
        FUN_00416cd0(param_1,3,*param_1,local_60,&DAT_017c420c);
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00410f20(plVar4);
  FUN_00414480(&local_60);
  FUN_00417740(local_58,&DAT_017bfca8);
  FUN_00414560(&local_res10,2);
  return param_1;
}

