/* Ghidra address: 005c1920 */
/* Ghidra symbol: FUN_005c1920 */


undefined8 FUN_005c1920(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_a8 [32];
  short *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_54;
  char local_4f;
  char local_4e;
  char local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  short local_42;
  short local_40;
  undefined2 local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_60 = auStack_a8;
  local_68 = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_48 = 0;
  local_4c = 0;
  FUN_00416780(&local_68,DAT_01de68cc);
  local_34 = FUN_004170c0(local_68,param_1,1);
  local_34 = local_34 + -1;
  if (local_34 < 0) {
    local_3c = 0;
    local_3e = 0;
    local_40 = 0;
    local_42 = 0;
    local_48 = 0;
    local_4c = 0;
    FUN_00414b50(&local_30,param_1);
    FUN_00414480(&local_28);
  }
  else {
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,param_1,1,local_34);
    FUN_00414b50(&local_30,local_10);
    FUN_00414480(&local_10);
    FUN_00414480(&local_18);
    local_54 = 0;
    if (param_1 != 0) {
      local_54 = *(undefined4 *)(param_1 + -4);
    }
    FUN_00416dc0(&local_18,param_1,local_34 + 2,local_54);
    FUN_00414b50(&local_28,local_18);
    FUN_00414480(&local_18);
  }
  FUN_005c0ee0(local_30,&local_36,&local_38,&local_3a);
  local_88 = &local_42;
  local_80 = &local_48;
  local_78 = &local_4c;
  FUN_005c10b0(local_28,&local_3c,&local_3e,&local_40);
  local_4d = local_3c == 0x18;
  if ((bool)local_4d) {
    local_3c = 0;
  }
  local_4e = local_40 == 0x3c;
  if ((bool)local_4e) {
    local_40 = 0;
  }
  local_4f = local_42 == 1000;
  if ((bool)local_4f) {
    local_42 = 0;
  }
  local_88 = (short *)CONCAT62(local_88._2_6_,local_3e);
  local_80 = (undefined4 *)CONCAT62(local_80._2_6_,local_40);
  local_78 = (undefined4 *)CONCAT62(local_78._2_6_,local_42);
  local_20 = FUN_005bbcf0(local_36,local_38,local_3a,local_3c);
  if (local_4d != '\0') {
    local_20 = FUN_005bbc50(local_20,0x18);
  }
  if (local_4e != '\0') {
    local_20 = FUN_005bbc90(local_20,0x3c);
  }
  if (local_4f != '\0') {
    local_20 = FUN_005bbcb0(local_20,1000);
  }
  local_20 = FUN_005c17f0(local_20,local_48,local_4c,param_2);
  FUN_00414480(&local_68);
  FUN_00414560(&local_30,2);
  FUN_00414560(&local_18,2);
  return local_20;
}

