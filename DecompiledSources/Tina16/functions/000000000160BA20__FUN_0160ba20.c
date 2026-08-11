/* Ghidra address: 0160ba20 */
/* Ghidra symbol: FUN_0160ba20 */


void FUN_0160ba20(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res8 [3];
  undefined8 local_res20;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_res8[0] = param_1;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res20);
  lVar3 = 0;
  lVar4 = 0;
  FUN_00414b50(&local_30,local_res8[0]);
  FUN_00450070(&local_38,local_30,&DAT_0160bc98,0,1);
  plVar2 = (longlong *)FUN_01b21190(local_38,0x5c,0);
  iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
  if (-1 < iVar1 + -3) {
    FUN_01604ed0(&local_40,&local_48,local_5c,local_60);
    lVar3 = FUN_01b21190(local_40,0x2c,0);
    lVar4 = FUN_01b21190(local_48,0x2c,0);
    iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50,iVar1 + -3);
    iVar1 = FUN_004170c0(local_50,local_30,1);
    FUN_00416dc0(&local_58,local_30,1,iVar1 + -2);
    FUN_01606940(param_2,param_3,local_58,local_50,local_res20,param_5,0,
                 *(undefined8 *)(param_3 + 0x10),0,param_6);
  }
  FUN_00410f20(plVar2);
  if (lVar3 != 0) {
    FUN_00410f20(lVar3);
  }
  if (lVar4 != 0) {
    FUN_00410f20(lVar4);
  }
  FUN_00414560(&local_58,6);
  FUN_00414480(local_res8);
  FUN_00414480(&local_res20);
  return;
}

