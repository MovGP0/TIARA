/* Ghidra address: 0180de80 */
/* Ghidra symbol: FUN_0180de80 */


void FUN_0180de80(longlong *param_1,int param_2,int param_3,undefined8 param_4,longlong param_5)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  plVar3 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*plVar3 + 0x88))(plVar3,param_2);
  (**(code **)(*plVar3 + 0x70))(plVar3,param_3);
  iVar6 = 0;
  iVar7 = 0;
  do {
    uVar4 = FUN_00609e10(plVar3);
    FUN_004238d0(local_38,0,0,param_2,param_3);
    uVar5 = FUN_00609e10(param_1);
    FUN_004238d0(local_48,iVar6,iVar7,iVar6 + param_2,iVar7 + param_3);
    FUN_005fead0(uVar4,local_38,uVar5,local_48);
    iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
    bVar1 = iVar7 <= iVar2;
    if (bVar1) {
      FUN_0060a330(plVar3);
      FUN_007d5ad0(param_4);
      if (param_5 != 0) {
        FUN_0180dd30(plVar3);
        FUN_0060a330(plVar3);
        FUN_007d5ad0(param_5);
      }
    }
    iVar6 = iVar6 + param_2;
    iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    if (iVar2 <= iVar6) {
      iVar6 = 0;
      iVar7 = iVar7 + param_3;
    }
  } while (bVar1);
  FUN_00410f20(plVar3);
  return;
}

