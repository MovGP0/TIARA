/* Ghidra address: 014ddf60 */
/* Ghidra symbol: FUN_014ddf60 */


longlong *
FUN_014ddf60(longlong *param_1,short *param_2,char param_3,undefined8 param_4,undefined8 param_5,
            longlong *param_6,byte *param_7,undefined8 param_8)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  short local_132;
  undefined1 local_130 [256];
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  
  local_30 = 0;
  if (param_3 == 'S') {
    iVar3 = FUN_00414f50(param_7,&DAT_014de23c,(ulonglong)*param_7 + 1);
    if (iVar3 == 0) {
      cVar1 = FUN_014db910(&DAT_014de244,param_5,local_28);
      if (cVar1 == '\0') {
        local_132 = 0x20;
      }
      else {
        local_132 = 0x93;
      }
    }
    else {
      local_132 = 0x93;
    }
  }
  else if (param_3 == 'W') {
    iVar3 = FUN_00414f50(param_7,&DAT_014de24a,(ulonglong)*param_7 + 1);
    if (iVar3 == 0) {
      cVar1 = FUN_014db910(&LAB_014de252,param_5,local_28);
      if (cVar1 == '\0') {
        local_132 = 0x30;
      }
      else {
        local_132 = 0x94;
      }
    }
    else {
      local_132 = 0x94;
    }
  }
  plVar4 = (longlong *)FUN_014db750(local_132);
  FUN_017bf050(plVar4,0,param_2);
  *(bool *)((longlong)plVar4 + 0x531) = *param_2 == 0x58;
  uVar5 = FUN_01d347d0(param_4,0);
  FUN_014dbb80(plVar4,0,uVar5,param_8);
  uVar5 = FUN_01d347d0(param_4,1);
  FUN_014dbb80(plVar4,1,uVar5,param_8);
  if ((local_132 == 0x20) || (local_132 == 0x93)) {
    uVar5 = FUN_01d347d0(param_4,2);
    FUN_014dbb80(plVar4,2,uVar5,param_8);
    uVar5 = FUN_01d347d0(param_4,3);
    FUN_014dbb80(plVar4,3,uVar5,param_8);
  }
  uVar2 = (**(code **)(*plVar4 + 0x2c8))(plVar4);
  lVar6 = FUN_00409570(uVar2);
  plVar4[0x18] = lVar6;
  FUN_01d38290(plVar4,1);
  if ((local_132 == 0x30) || (local_132 == 0x94)) {
    (**(code **)(*plVar4 + 0x2d0))(plVar4,4,&local_20);
    (**(code **)(*param_6 + 0x18))(param_6,&local_30,0);
    FUN_00416910(local_130,local_30,0xff);
    FUN_00415020(local_20,local_130,0x1e);
  }
  FUN_014dddc0(plVar4,param_5);
  (**(code **)(*param_1 + 0x20))(param_1,plVar4);
  FUN_00414480(&local_30);
  return plVar4;
}

