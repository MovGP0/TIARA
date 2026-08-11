/* Ghidra address: 014e3a70 */
/* Ghidra symbol: FUN_014e3a70 */


void FUN_014e3a70(longlong *param_1,byte *param_2,longlong param_3,longlong param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined2 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 *local_140;
  byte local_138 [264];
  
  lVar4 = (ulonglong)*param_2 + 1;
  pbVar5 = local_138;
  for (; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pbVar5 = *param_2;
    param_2 = param_2 + 1;
    pbVar5 = pbVar5 + 1;
  }
  if (param_3 != 0) {
    iVar2 = FUN_00414f50(local_138,&LAB_014e3be8,(ulonglong)local_138[0] + 1);
    if (iVar2 == 0) {
      if (param_4 == 0) {
        plVar3 = (longlong *)FUN_014db750(0x51);
        FUN_014dbb80(plVar3,0,param_3,param_6);
      }
      else {
        plVar3 = (longlong *)FUN_014db750(0x52);
        FUN_014dbb80(plVar3,0,param_3,param_6);
        FUN_014dbb80(plVar3,1,param_4,param_6);
      }
    }
    else if (param_4 == 0) {
      plVar3 = (longlong *)FUN_014db750(0x53);
      FUN_014dbb80(plVar3,0,param_3,param_6);
    }
    else {
      plVar3 = (longlong *)FUN_014db750(0x54);
      FUN_014dbb80(plVar3,0,param_3,param_6);
      FUN_014dbb80(plVar3,1,param_4,param_6);
    }
    uVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
    lVar4 = FUN_00409570(uVar1);
    plVar3[0x18] = lVar4;
    FUN_01d38290(plVar3,1);
    (**(code **)(*plVar3 + 0x2d0))(plVar3,0,&local_140);
    *local_140 = param_5;
    (**(code **)(*param_1 + 0x20))(param_1,plVar3);
  }
  return;
}

