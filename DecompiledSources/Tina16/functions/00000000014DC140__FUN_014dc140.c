/* Ghidra address: 014dc140 */
/* Ghidra symbol: FUN_014dc140 */


longlong *
FUN_014dc140(longlong *param_1,short *param_2,char param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  undefined6 uVar6;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = (undefined4)in_RAX;
  uVar6 = (undefined6)((ulonglong)in_RAX >> 0x10);
  if (param_3 == 'C') {
    uVar2 = (undefined4)CONCAT62(uVar6,10);
  }
  else if (param_3 == 'L') {
    uVar2 = (undefined4)CONCAT62(uVar6,0xb);
  }
  else if (param_3 == 'R') {
    uVar2 = (undefined4)CONCAT62(uVar6,9);
  }
  plVar3 = (longlong *)FUN_014db750(uVar2);
  FUN_017bf050(plVar3,0,param_2);
  *(bool *)((longlong)plVar3 + 0x531) = *param_2 == 0x58;
  uVar4 = FUN_01d347d0(param_4,0);
  FUN_014dbb80(plVar3,0,uVar4,param_6);
  uVar4 = FUN_01d347d0(param_4,1);
  FUN_014dbb80(plVar3,1,uVar4,param_6);
  uVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
  lVar5 = FUN_00409570(uVar1);
  plVar3[0x18] = lVar5;
  FUN_01d38290(plVar3,1);
  FUN_014dbf00(plVar3,param_5);
  (**(code **)(*param_1 + 0x20))(param_1,plVar3);
  return plVar3;
}

