/* Ghidra address: 015ae490 */
/* Ghidra symbol: FUN_015ae490 */


void FUN_015ae490(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_20;
  int local_1c;
  
  plVar2 = (longlong *)FUN_015ae8d0(param_1);
  (**(code **)(*plVar2 + 0x40))(plVar2);
  plVar2 = (longlong *)FUN_015ae8d0(param_1);
  local_20 = 0;
  if (param_2 != 0) {
    local_20 = *(undefined4 *)(param_2 + -4);
  }
  uVar3 = FUN_00415ab0(param_2);
  (**(code **)(*plVar2 + 0x48))(plVar2,uVar3,local_20);
  plVar2 = (longlong *)FUN_015ae8d0(param_1);
  (**(code **)(*plVar2 + 0x50))(plVar2);
  plVar2 = (longlong *)FUN_015ae8d0(param_1);
  local_1c = (**(code **)(*plVar2 + 0x60))(*plVar2);
  if ((int)param_1[8] < local_1c) {
    local_1c = (int)param_1[8];
  }
  plVar2 = (longlong *)FUN_015ae8d0(param_1);
  uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
  (**(code **)(*param_1 + 0x68))(param_1,uVar3,local_1c,param_3);
  plVar2 = (longlong *)FUN_015ae8d0(param_1);
  uVar3 = (**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (longlong *)FUN_015ae8d0(param_1);
  uVar4 = (**(code **)(*plVar2 + 0x58))(plVar2);
  plVar2 = (longlong *)FUN_015ae8d0(param_1);
  uVar1 = (**(code **)(*plVar2 + 0x60))(*plVar2);
  FUN_015ae9c0(param_1,uVar3,uVar4,uVar1);
  (**(code **)(*param_1 + 0x70))(param_1);
  (**(code **)(*param_1 + 0x38))(param_1,0,1);
  return;
}

