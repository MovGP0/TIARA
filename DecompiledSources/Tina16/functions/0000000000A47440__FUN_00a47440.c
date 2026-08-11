/* Ghidra address: 00a47440 */
/* Ghidra symbol: FUN_00a47440 */


longlong * FUN_00a47440(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 local_38 [16];
  
  if (param_2 == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)FUN_009ec850(&PTR_FUN_009eb620,1,0);
    (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
    iVar1 = (**(code **)(*plVar4 + 0x60))(plVar4);
    if (iVar1 == 1) {
      if (100 < param_3) {
        param_3 = 100;
      }
      (**(code **)(*plVar4 + 0x88))(plVar4,param_3);
    }
    iVar1 = (**(code **)(*plVar4 + 0x48))(plVar4);
    if (iVar1 == 1) {
      if (100 < param_4) {
        param_4 = 100;
      }
      (**(code **)(*plVar4 + 0x70))(plVar4,param_4);
    }
    plVar5 = (longlong *)FUN_00609e10(plVar4);
    uVar2 = (**(code **)(*plVar4 + 0x60))(plVar4);
    uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
    FUN_004238d0(local_38,0,0,uVar2,uVar3);
    (**(code **)(*plVar5 + 0x110))(plVar5,local_38,param_2);
  }
  return plVar4;
}

