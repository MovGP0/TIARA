/* Ghidra address: 0149b1b0 */
/* Ghidra symbol: FUN_0149b1b0 */


void FUN_0149b1b0(longlong param_1,char param_2)

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
  FUN_0106e8e0(local_20,DAT_0210ea9c);
  FUN_0106e900(local_20,DAT_0210ea9d);
  FUN_0106e920(local_20,DAT_0210ea9e);
  FUN_0106e940(local_20,DAT_0210ea9f);
  FUN_0106e960(local_20,DAT_0210eaa8);
  if (DAT_0210eaa0 != '\0') {
    cVar2 = FUN_00bf2c80(*(undefined8 *)(param_1 + 0x8b8));
    if (cVar2 != '\0') {
      FUN_00bf2b30(*(undefined8 *)(param_1 + 0x8b8));
      FUN_00bf2b90(*(undefined8 *)(param_1 + 0x8b8));
      if (extraout_var == extraout_var_00) {
        FUN_00bf2ed0(*(undefined8 *)(param_1 + 0x8b8),&local_48);
        FUN_0106e960(local_20,local_48);
        goto LAB_0149b346;
      }
    }
    uVar1 = *(undefined8 *)(param_1 + 0x8b8);
    local_58 = FUN_00bfaa10(uVar1);
    FUN_00c0eaf0(uVar1,&local_50,&local_58);
    FUN_0106e960(local_20,local_50);
  }
LAB_0149b346:
  FUN_0106e9c0(local_20,DAT_0210eab0);
  if (param_2 != '\0') {
    local_28 = FUN_004113f0(local_20,&PTR_FUN_0106ec78);
    FUN_0106f250(local_28,DAT_0210eab8);
    FUN_0106f2b0(local_28,DAT_0210eac0);
  }
  FUN_0106ea30(local_20,DAT_0210eaa1);
  iVar3 = (**(code **)(*local_20 + 0x2d0))(local_20);
  if (iVar3 == 1) {
    DAT_0210ea9c = FUN_0106e710(local_20);
    DAT_0210ea9d = FUN_0106e730(local_20);
    DAT_0210ea9e = FUN_0106e750(local_20);
    DAT_0210ea9f = FUN_0106e770(local_20);
    DAT_0210eaa1 = FUN_0106e8c0(local_20);
    FUN_0106e7b0(local_20,&local_60);
    FUN_00414ad0(&DAT_0210eaa8,local_60);
    FUN_0106e7d0(local_20,&local_68);
    FUN_00414ad0(&DAT_0210eab0,local_68);
    if (param_2 != '\0') {
      local_30 = FUN_004113f0(local_20,&PTR_FUN_0106ec78);
      FUN_0106f140(local_30,&local_70);
      FUN_00414ad0(&DAT_0210eab8,local_70);
      FUN_0106f160(local_30,&local_78);
      FUN_00414ad0(&DAT_0210eac0,local_78);
    }
    *(undefined1 *)(param_1 + 0xbd9) = DAT_0210ea9e;
    if (DAT_0210eaa8 != 0) {
      FUN_0149b570(param_1,param_2,DAT_0210ea9c);
      *(undefined1 *)(param_1 + 0xbd9) = 1;
    }
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_78,4);
  FUN_00414560(&local_50,2);
  return;
}

