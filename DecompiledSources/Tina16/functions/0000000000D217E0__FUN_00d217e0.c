/* Ghidra address: 00d217e0 */
/* Ghidra symbol: FUN_00d217e0 */


void FUN_00d217e0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  plVar3 = (longlong *)FUN_00d21a60(param_1);
  (**(code **)(*plVar3 + 0x40))(plVar3);
  plVar3 = (longlong *)FUN_00d21a60(param_1);
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + -4);
  }
  uVar4 = FUN_00415ab0(param_2);
  (**(code **)(*plVar3 + 0x48))(plVar3,uVar4,uVar2);
  plVar3 = (longlong *)FUN_00d21a60(param_1);
  (**(code **)(*plVar3 + 0x50))(plVar3);
  plVar3 = (longlong *)FUN_00d21a60(param_1);
  iVar1 = (**(code **)(*plVar3 + 0x60))(*plVar3);
  if ((int)param_1[8] < iVar1) {
    iVar1 = (int)param_1[8];
  }
  plVar3 = (longlong *)FUN_00d21a60(param_1);
  uVar4 = (**(code **)(*plVar3 + 0x58))(plVar3);
  (**(code **)(*param_1 + 0x68))(param_1,uVar4,iVar1,param_3);
  plVar3 = (longlong *)FUN_00d21a60(param_1);
  uVar4 = (**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (longlong *)FUN_00d21a60(param_1);
  uVar5 = (**(code **)(*plVar3 + 0x58))(plVar3);
  plVar3 = (longlong *)FUN_00d21a60(param_1);
  uVar2 = (**(code **)(*plVar3 + 0x60))(*plVar3);
  FUN_00d222a0(param_1,uVar4,uVar5,uVar2);
  (**(code **)(*param_1 + 0x70))(param_1);
  (**(code **)(*param_1 + 0x38))(param_1,0,1);
  return;
}

