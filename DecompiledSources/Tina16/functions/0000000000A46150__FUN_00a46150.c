/* Ghidra address: 00a46150 */
/* Ghidra symbol: FUN_00a46150 */


longlong * FUN_00a46150(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_38 [16];
  
  plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*plVar4 + 0x10))(plVar4,param_1);
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  if (iVar1 == 1) {
    if (100 < param_2) {
      param_2 = 100;
    }
    (**(code **)(*plVar4 + 0x88))(plVar4,param_2);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    (**(code **)(*plVar4 + 0x88))(plVar4,uVar2);
  }
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar1 == 1) {
    if (100 < param_3) {
      param_3 = 100;
    }
    (**(code **)(*plVar4 + 0x70))(plVar4,param_3);
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    (**(code **)(*plVar4 + 0x70))(plVar4,uVar2);
  }
  plVar5 = (longlong *)FUN_00609e10(plVar4);
  uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
  uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
  FUN_004238d0(local_38,0,0,uVar2,uVar3);
  (**(code **)(*plVar5 + 0x110))(plVar5,local_38,param_1);
  return plVar4;
}

