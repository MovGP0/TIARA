/* Ghidra address: 00d2a000 */
/* Ghidra symbol: FUN_00d2a000 */


void FUN_00d2a000(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_004c1ed0(param_2,local_30);
  FUN_00415dd0(&local_20,local_30[0],0);
  plVar3 = (longlong *)FUN_00d0cef0();
  iVar1 = (**(code **)(*plVar3 + 0x28))();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00416880(&local_38,local_20);
      plVar3 = (longlong *)FUN_00d0cef0();
      uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,iVar5);
      FUN_00410ae0(uVar4,&local_40);
      iVar2 = FUN_00416db0(local_38,local_40);
      if (iVar2 == 0) {
        plVar3 = (longlong *)FUN_00d0cef0();
        uVar4 = (**(code **)(*plVar3 + 0x30))(plVar3,iVar5);
        FUN_00d2a560(param_1,uVar4);
        break;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_40,3);
  FUN_004144d0(&local_20);
  return;
}

