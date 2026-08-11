/* Ghidra address: 01644480 */
/* Ghidra symbol: FUN_01644480 */


void FUN_01644480(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414610(local_res20);
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)((longlong)plVar4 + 0x2c) = 0x25;
  FUN_004b50b0(plVar4,local_res18);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_50,0);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58,1);
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_60,2);
  uVar1 = FUN_01643ae0(param_1,local_60,local_50,local_58);
  FUN_00410f20(plVar4);
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x78) + 0x139d0) + 0x28))();
  local_6c = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x139d0);
      plVar5 = (longlong *)(**(code **)(*plVar4 + 0x30))(plVar4,local_6c);
      (**(code **)(*plVar5 + 0xf8))(plVar5);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x139d0);
      (**(code **)(*plVar4 + 0x18))(plVar4,local_40,local_6c);
      plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_004b4b10(plVar4,local_40[0]);
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,3);
      FUN_00410f20(plVar4);
      iVar3 = FUN_00416db0(local_48,local_res10);
      if (iVar3 == 0) {
        FUN_0043fc00(local_res20);
        FUN_01643940(plVar5,uVar1,local_res20,0);
      }
      local_6c = local_6c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_60,5);
  FUN_00414560(&local_res10,3);
  return;
}

