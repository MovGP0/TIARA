/* Ghidra address: 019645e0 */
/* Ghidra symbol: FUN_019645e0 */


undefined8 * FUN_019645e0(longlong *param_1,undefined8 *param_2,char param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  FUN_00414520(param_2);
  local_28 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_20 = FUN_01953870(param_1);
  FUN_018dc3b0(local_20);
  local_58 = 0;
  local_50 = 0;
  (**(code **)(*param_1 + 0x2b0))(param_1,0,0x3ff0000000000000,0x3ff0000000000000);
  uVar3 = FUN_00609e10(local_28);
  local_58 = 0;
  local_50 = 0;
  FUN_0195ff00(param_1,uVar3,0x3ff0000000000000,0x3ff0000000000000);
  if (param_3 == '\0') {
    (**(code **)(*param_1 + 0x348))(param_1,&local_48);
    FUN_018d75b0(local_20,param_2,local_48);
  }
  else {
    FUN_018dc4c0(local_20,param_2);
  }
  FUN_018dc480(local_20);
  FUN_00410f20(local_28);
  if (param_4 != (longlong *)0x0) {
    (**(code **)(*param_4 + 0x58))(param_4,*param_2);
    iVar1 = (**(code **)(*param_4 + 0x28))(param_4);
    iVar2 = (**(code **)(**(longlong **)(local_20 + 0xa0) + 0x28))(*(longlong **)(local_20 + 0xa0));
    if (iVar1 == iVar2) {
      iVar1 = (**(code **)(**(longlong **)(local_20 + 0xa0) + 0x28))();
      local_30 = 0;
      if (-1 < iVar1 + -1) {
        do {
          uVar3 = (**(code **)(**(longlong **)(local_20 + 0xa0) + 0x30))
                            (*(longlong **)(local_20 + 0xa0),local_30);
          (**(code **)(*param_4 + 0x48))(param_4,local_30,uVar3);
          local_30 = local_30 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
  }
  FUN_00414520(&local_48);
  return param_2;
}

