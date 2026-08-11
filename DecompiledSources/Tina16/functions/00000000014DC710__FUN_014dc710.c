/* Ghidra address: 014dc710 */
/* Ghidra symbol: FUN_014dc710 */


longlong *
FUN_014dc710(longlong *param_1,short *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  char cVar1;
  undefined2 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 local_40 [16];
  
  cVar1 = FUN_014db910(&LAB_014dc850,param_4,local_40);
  if (cVar1 == '\0') {
    plVar3 = (longlong *)FUN_014db750(0x92);
  }
  else {
    plVar3 = (longlong *)FUN_014db750(0x31);
  }
  FUN_017bf050(plVar3,0,param_2);
  *(bool *)((longlong)plVar3 + 0x531) = *param_2 == 0x58;
  uVar4 = FUN_01d347d0(param_3,0);
  FUN_014dbb80(plVar3,0,uVar4,param_5);
  uVar4 = FUN_01d347d0(param_3,1);
  FUN_014dbb80(plVar3,1,uVar4,param_5);
  uVar4 = FUN_01d347d0(param_3,2);
  FUN_014dbb80(plVar3,2,uVar4,param_5);
  uVar4 = FUN_01d347d0(param_3,3);
  FUN_014dbb80(plVar3,3,uVar4,param_5);
  uVar2 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  lVar5 = FUN_00409570(uVar2);
  plVar3[0x18] = lVar5;
  FUN_01d38290(plVar3,1);
  FUN_014dc340(plVar3,param_4);
  (**(code **)(*param_1 + 0x20))(param_1,plVar3);
  return plVar3;
}

