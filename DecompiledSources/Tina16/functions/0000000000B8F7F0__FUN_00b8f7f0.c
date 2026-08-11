/* Ghidra address: 00b8f7f0 */
/* Ghidra symbol: FUN_00b8f7f0 */


undefined8 FUN_00b8f7f0(undefined8 param_1,double param_2,char param_3,char param_4,int *param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  double local_70;
  undefined8 local_62;
  undefined1 uStack_5a;
  undefined4 local_4d;
  undefined1 uStack_49;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_80 = auStack_b8;
  local_90 = 0;
  local_88 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_4d = 0x232e3004;
  uStack_49 = 0x23;
  local_62 = 0x302b4523302e3008;
  uStack_5a = 0x30;
  puVar1 = auStack_b8;
  if (param_3 != -1) {
    FUN_00b8f710(param_3,&local_4d,&local_62);
    puVar1 = local_80;
  }
  local_80 = puVar1;
  local_70 = (double)FUN_0040c850(param_2);
  if ((local_70 == 0.0) || ((local_70 < 1e+15 && (1e-15 <= local_70)))) {
    if (param_4 == '\0') {
      if (local_70 < 1.0) {
        if (local_70 <= 0.0) {
          *param_5 = 0;
        }
        else {
          *param_5 = 0;
          while (0.0 < 1.0 / local_70 - 1.0) {
            local_70 = local_70 * 1000.0;
            *param_5 = *param_5 + -1;
          }
        }
      }
      else {
        *param_5 = 0;
        while (0.0 <= local_70 - 1000.0) {
          local_70 = local_70 / 1000.0;
          *param_5 = *param_5 + 1;
        }
      }
      if (1000.0 <= local_70) {
        local_70 = local_70 / 1000.0;
        *param_5 = *param_5 + 1;
      }
    }
    if (param_2 < 0.0) {
      local_70 = -local_70;
    }
    if (param_3 == -1) {
      FUN_00414480(&local_38);
      FUN_00448450(&local_38,local_70,PTR_DAT_02004830);
      FUN_00414ad0(param_1,local_38);
      FUN_00414480(&local_38);
    }
    else {
      FUN_00414480(&local_30);
      FUN_004169a0(&local_90,&local_4d);
      FUN_004485a0(&local_30,local_90,local_70,PTR_DAT_02004830);
      FUN_00414ad0(param_1,local_30);
      FUN_00414480(&local_30);
    }
  }
  else {
    if (param_2 < 0.0) {
      local_70 = -local_70;
    }
    if (param_3 == -1) {
      FUN_00414480(&local_28);
      FUN_00448450(&local_28,local_70,PTR_DAT_02004830);
      FUN_00414ad0(param_1,local_28);
      FUN_00414480(&local_28);
    }
    else {
      FUN_00414480(&local_20);
      FUN_004169a0(&local_88,&local_62);
      FUN_004485a0(&local_20,local_88,local_70,PTR_DAT_02004830);
      FUN_00414ad0(param_1,local_20);
      FUN_00414480(&local_20);
    }
    *param_5 = 0;
  }
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_38,4);
  return param_1;
}

