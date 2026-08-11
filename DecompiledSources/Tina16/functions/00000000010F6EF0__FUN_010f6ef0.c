/* Ghidra address: 010f6ef0 */
/* Ghidra symbol: FUN_010f6ef0 */


void FUN_010f6ef0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  undefined1 auStack_148 [32];
  double *local_128;
  undefined1 *local_120;
  byte local_10a;
  byte local_109;
  double *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b1 [81];
  undefined1 local_60 [8];
  double local_58;
  double local_50;
  undefined1 local_48 [8];
  double local_40;
  double local_38;
  int local_2c;
  
  local_100 = 0;
  local_108 = (double *)0x0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  lVar1 = *(longlong *)(param_1 + 0x9b0);
  local_128 = &local_40;
  local_120 = local_48;
  local_10a = FUN_010e8310(lVar1,1,local_b1,&local_38);
  dVar3 = (double)FUN_0040c850(*(undefined8 *)(lVar1 + 0x108));
  if (1e-30 < dVar3) {
    lVar2 = FUN_0040c770(local_38 / *(double *)(lVar1 + 0x108));
    local_38 = (double)lVar2 * *(double *)(lVar1 + 0x108);
    local_38 = (double)FUN_00b90650(local_38,*(undefined8 *)(lVar1 + 0x100));
    local_38 = (double)FUN_00b90620(local_38,*(undefined8 *)(lVar1 + 0xf8));
    FUN_010e81e0(lVar1,1,local_38);
  }
  lVar2 = *(longlong *)(lVar1 + 0x68);
  (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x10))
            (*(longlong **)(lVar2 + 0x70),*(undefined8 *)(*(longlong *)(param_1 + 0x920) + 0xb8));
  FUN_005fdab0(*(undefined8 *)(lVar2 + 0x80),*(undefined4 *)(*(longlong *)(param_1 + 0x8f0) + 200));
  local_2c = FUN_005fdff0(lVar2,&DAT_010f7718);
  local_2c = local_2c << 3;
  if (local_10a == 0) {
    lVar2 = *(longlong *)(param_1 + 0x958);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_010f6df0(auStack_148,0,lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x920);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_010f6df0(auStack_148,0,lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x928);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_010f6df0(auStack_148,0,lVar2);
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x958);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_004169a0(&local_c0,local_b1);
      FUN_010f6df0(auStack_148,local_c0,lVar2);
    }
    if ((*(longlong *)(param_1 + 0x920) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x920) + 0xa9) != '\0')) {
      local_128 = (double *)CONCAT71(local_128._1_7_,1);
      FUN_00b8fd60(&local_c8,local_38,2,0);
      FUN_010f6df0(auStack_148,local_c8,*(undefined8 *)(param_1 + 0x920));
    }
    if ((*(longlong *)(param_1 + 0x928) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x928) + 0xa9) != '\0')) {
      local_128 = (double *)CONCAT71(local_128._1_7_,1);
      FUN_00b8fd60(&local_d0,local_40,2,0);
      FUN_010f6df0(auStack_148,local_d0,*(undefined8 *)(param_1 + 0x928));
    }
  }
  local_128 = &local_58;
  local_120 = local_60;
  local_109 = FUN_010e8310(lVar1,0,local_b1,&local_50);
  dVar3 = (double)FUN_0040c850(*(undefined8 *)(lVar1 + 0x108));
  if (1e-30 < dVar3) {
    lVar2 = FUN_0040c770(local_50 / *(double *)(lVar1 + 0x108));
    local_50 = (double)lVar2 * *(double *)(lVar1 + 0x108);
    local_50 = (double)FUN_00b90650(local_50,*(undefined8 *)(lVar1 + 0xe0));
    local_50 = (double)FUN_00b90620(local_50,*(undefined8 *)(lVar1 + 0xd8));
    FUN_010e81e0(lVar1,0,local_50);
  }
  lVar2 = *(longlong *)(lVar1 + 0x68);
  (**(code **)(**(longlong **)(lVar2 + 0x70) + 0x10))
            (*(longlong **)(lVar2 + 0x70),*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0xb8));
  FUN_005fdab0(*(undefined8 *)(lVar2 + 0x80),*(undefined4 *)(*(longlong *)(param_1 + 0x8f0) + 200));
  local_2c = FUN_005fdff0(lVar2,&DAT_010f7718);
  local_2c = local_2c << 3;
  if (local_109 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x960);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_010f6df0(auStack_148,0,lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x930);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_010f6df0(auStack_148,0,lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x938);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_010f6df0(auStack_148,0,lVar2);
    }
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x960);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_004169a0(&local_d8,local_b1);
      FUN_010f6df0(auStack_148,local_d8,lVar2);
    }
    if ((*(longlong *)(param_1 + 0x930) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x930) + 0xa9) != '\0')) {
      local_128 = (double *)CONCAT71(local_128._1_7_,1);
      FUN_00b8fd60(&local_e0,local_50,2,0);
      FUN_010f6df0(auStack_148,local_e0,*(undefined8 *)(param_1 + 0x930));
    }
    if ((*(longlong *)(param_1 + 0x938) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x938) + 0xa9) != '\0')) {
      local_128 = (double *)CONCAT71(local_128._1_7_,1);
      FUN_00b8fd60(&local_e8,local_58,2,0);
      FUN_010f6df0(auStack_148,local_e8,*(undefined8 *)(param_1 + 0x938));
    }
  }
  if ((local_109 & local_10a) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x940);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_010f6df0(auStack_148,0,lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x948);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0xa9) != '\0')) {
      FUN_010f6df0(auStack_148,0,lVar2);
    }
  }
  else {
    if ((*(longlong *)(param_1 + 0x940) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x940) + 0xa9) != '\0')) {
      local_128 = (double *)CONCAT71(local_128._1_7_,1);
      FUN_00b8fd60(&local_f0,local_50 - local_38,2,0);
      FUN_010f6df0(auStack_148,local_f0,*(undefined8 *)(param_1 + 0x940));
    }
    if ((*(longlong *)(param_1 + 0x948) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x948) + 0xa9) != '\0')) {
      local_128 = (double *)CONCAT71(local_128._1_7_,1);
      FUN_00b8fd60(&local_f8,local_58 - local_40,2,0);
      FUN_010f6df0(auStack_148,local_f8,*(undefined8 *)(param_1 + 0x948));
    }
  }
  if (*(longlong *)(param_1 + 0x950) != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x68);
    (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x10))
              (*(longlong **)(lVar1 + 0x70),*(undefined8 *)(*(longlong *)(param_1 + 0x950) + 0xb8));
    FUN_005fdab0(*(undefined8 *)(lVar1 + 0x80),*(undefined4 *)(*(longlong *)(param_1 + 0x8f0) + 200)
                );
    local_2c = FUN_005fdff0(lVar1,&DAT_010f7718);
    local_2c = local_2c * 0x1c;
    if (*(char *)(*(longlong *)(param_1 + 0x950) + 0xa9) == '\0') {
      FUN_010f6df0(auStack_148,0,*(longlong *)(param_1 + 0x950));
    }
    else {
      local_128 = (double *)CONCAT71(local_128._1_7_,1);
      FUN_00b8fd60(&local_108,*(undefined8 *)(param_1 + 0xb60),2,0);
      local_128 = local_108;
      local_120 = &LAB_010f773c;
      FUN_00416cd0(&local_100,4,*(undefined8 *)(param_1 + 0xb58),&DAT_010f7728);
      FUN_010f6df0(auStack_148,local_100,*(undefined8 *)(param_1 + 0x950));
    }
  }
  FUN_00414560(&local_108,10);
  return;
}

