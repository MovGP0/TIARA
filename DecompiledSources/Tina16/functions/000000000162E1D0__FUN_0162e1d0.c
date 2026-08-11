/* Ghidra address: 0162e1d0 */
/* Ghidra symbol: FUN_0162e1d0 */


longlong FUN_0162e1d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                     int param_5,char param_6,char param_7)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  undefined1 *local_90;
  undefined1 local_80 [8];
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  char local_4a;
  char local_49;
  double local_38;
  int local_2c [3];
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_90 = auStack_c8;
  local_68 = 0;
  local_78 = *(longlong *)(param_3 + 0x20);
  local_4a = '\x01';
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_2c[0] = -1;
  local_20 = 0;
  local_49 = param_5 != -1;
  if ((bool)local_49) {
    local_2c[0] = param_5;
    local_49 = '\x01';
  }
  else {
    local_a8 = param_2;
    local_49 = FUN_0162dda0(param_1,local_2c,&local_38,local_78);
  }
  if (*(char *)(local_78 + 0x5b8) == '\0') {
    local_60 = FUN_0161bc10(*(undefined4 *)(local_78 + 0x5bc),*(undefined8 *)(param_2 + 0x48));
  }
  else {
    local_60 = local_78;
  }
  if (local_49 != '\0') {
    if (param_4 == 0) {
      local_38 = (double)FUN_0162dbe0(param_1,0,local_60,&local_4a);
    }
    else {
      local_70 = FUN_0161be50(param_4,param_3,local_80,1);
      local_38 = (double)FUN_01614c70(local_70);
      if (param_6 != '\0') {
        local_38 = 1.0 / local_38;
      }
    }
    if (local_4a != '\0') {
      FUN_016139c0(0,local_38,*(undefined8 *)(param_1 + 0x128));
    }
  }
  if (local_2c[0] == 0x39) {
    local_a8 = *(longlong *)(param_1 + 0x128);
    local_a0 = *(undefined8 *)(param_2 + 0x28);
    local_20 = FUN_016285e0(0x39,*(undefined8 *)(param_1 + 0x30),local_60,param_2);
joined_r0x0162e442:
    if (local_20 == 0) {
      FUN_0162e6b0(0,local_90);
      goto LAB_0162e68e;
    }
  }
  else {
    if (local_49 != '\0') {
      local_a8 = CONCAT71(local_a8._1_7_,1);
      local_20 = FUN_01628520(local_2c[0],*(undefined8 *)(param_1 + 0x30),param_2,
                              *(undefined8 *)(param_1 + 0x128));
      goto joined_r0x0162e442;
    }
    FUN_01613110(L"Component can\'t converted");
  }
  if (param_7 == '\0') {
    if ((local_2c[0] == 0xd) || (local_2c[0] == 0xe)) {
      FUN_01613f20(local_20,local_38);
    }
    else if (local_2c[0] == 0x10) {
      FUN_01613fe0(local_20,param_1 + 0x98);
    }
    else if ((local_2c[0] == 9) || (local_2c[0] == 0xb)) {
      FUN_01613d10(local_20,*(undefined8 *)(param_1 + 0x128));
    }
    else if (local_2c[0] == 10) {
      FUN_01613d10(local_20,*(undefined8 *)(param_1 + 0x128));
    }
    else if (local_2c[0] == 0x17) {
      FUN_01613e30(local_20,*(undefined8 *)(param_1 + 0x128));
    }
    else if (local_2c[0] == 0x20) {
      FUN_01613f60(local_20,*(undefined8 *)(param_1 + 0x128));
    }
    else if (local_2c[0] == 0x39) {
      FUN_01626ce0(local_20,param_2);
    }
    else {
      cVar1 = FUN_01d3d530((undefined2)local_2c[0]);
      if ((cVar1 == '\0') && (local_2c[0] != 0x45d)) {
        cVar1 = FUN_01d3d590((undefined2)local_2c[0]);
        if (cVar1 == '\0') {
          FUN_01613110(L"THDLSession.InsertComponent");
        }
        else {
          FUN_00414b50(&local_68,L"TPCLKQLHTY, TPCLKQHLTY");
          local_a8 = param_2;
          FUN_01626be0(local_20,*(undefined8 *)(param_1 + 0x128),local_68,
                       *(undefined4 *)(param_1 + 0x24));
        }
      }
      else {
        FUN_00414b50(&local_68,L"TPLHTY, TPHLTY");
        local_a8 = param_2;
        FUN_01626be0(local_20,*(undefined8 *)(param_1 + 0x128),local_68,
                     *(undefined4 *)(param_1 + 0x24));
      }
    }
  }
  else {
    FUN_016140b0(local_20,*(undefined8 *)(param_1 + 0x128));
  }
  FUN_00410f20(local_10);
  local_18 = local_20;
LAB_0162e68e:
  FUN_00414480(&local_68);
  return local_18;
}

