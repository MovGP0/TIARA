/* Ghidra address: 017f2f00 */
/* Ghidra symbol: FUN_017f2f00 */


void FUN_017f2f00(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int extraout_var;
  int extraout_var_00;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_48 = 0;
  if (param_2 == '\0') {
    local_20 = (longlong *)FUN_007fc180(&PTR_FUN_0106de88,1,param_1);
  }
  else {
    local_40 = auStack_98;
    local_20 = (longlong *)FUN_007fc180(&PTR_FUN_0106ec78,1,param_1);
  }
  FUN_0106e8e0(local_20,DAT_02110134);
  FUN_0106e900(local_20,DAT_02110135);
  FUN_0106e920(local_20,DAT_02110136);
  FUN_0106e940(local_20,DAT_02110137);
  FUN_0106e960(local_20,DAT_02110140);
  if (DAT_02110138 != '\0') {
    cVar2 = FUN_00bf2c80(*(undefined8 *)(param_1 + 0x868));
    if (cVar2 != '\0') {
      FUN_00bf2b30(*(undefined8 *)(param_1 + 0x868));
      FUN_00bf2b90(*(undefined8 *)(param_1 + 0x868));
      if (extraout_var == extraout_var_00) {
        FUN_00bf2ed0(*(undefined8 *)(param_1 + 0x868),&local_48);
        FUN_0106e960(local_20,local_48);
        goto LAB_017f3096;
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x868);
    local_58 = FUN_00bfaa10(uVar1);
    FUN_00c0eaf0(uVar1,&local_50,&local_58);
    FUN_0106e960(local_20,local_50);
  }
LAB_017f3096:
  FUN_0106e9c0(local_20,DAT_02110148);
  if (param_2 != '\0') {
    local_28 = FUN_004113f0(local_20,&PTR_FUN_0106ec78);
    FUN_0106f250(local_28,DAT_02110150);
    FUN_0106f2b0(local_28,DAT_02110158);
  }
  FUN_0106ea30(local_20,DAT_02110139);
  iVar3 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar3 == 1) {
    DAT_02110134 = FUN_0106e710(local_20);
    DAT_02110135 = FUN_0106e730(local_20);
    DAT_02110136 = FUN_0106e750(local_20);
    DAT_02110137 = FUN_0106e770(local_20);
    DAT_02110139 = FUN_0106e8c0(local_20);
    FUN_0106e7b0(local_20,&local_60);
    FUN_00414ad0(&DAT_02110140,local_60);
    FUN_0106e7d0(local_20,&local_68);
    FUN_00414ad0(&DAT_02110148,local_68);
    if (param_2 != '\0') {
      local_30 = FUN_004113f0(local_20,&PTR_FUN_0106ec78);
      FUN_0106f140(local_30,&local_70);
      FUN_00414ad0(&DAT_02110150,local_70);
      FUN_0106f160(local_30,&local_78);
      FUN_00414ad0(&DAT_02110158,local_78);
    }
    *(undefined1 *)(param_1 + 0xb28) = DAT_02110136;
    if (DAT_02110140 != 0) {
      FUN_017f32c0(param_1,param_2,DAT_02110134);
      *(undefined1 *)(param_1 + 0xb28) = 1;
    }
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_78,4);
  FUN_00414560(&local_50,2);
  return;
}

