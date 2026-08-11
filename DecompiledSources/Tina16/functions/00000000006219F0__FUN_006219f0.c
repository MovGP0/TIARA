/* Ghidra address: 006219f0 */
/* Ghidra symbol: FUN_006219f0 */


undefined4 FUN_006219f0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_28 = 0;
  local_2c = 0;
  if (param_1[4] != 0) {
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_004334c0);
    if (cVar2 != '\0') {
      FUN_00414b50(&local_28,param_2[1]);
    }
    local_1c = 0;
    FUN_00410ae0(*param_1,local_40);
    FUN_004168e0(&local_48,local_40[0]);
    FUN_00410ae0(*param_2,&local_50);
    FUN_004168e0(&local_58,local_50);
    FUN_004168e0(&local_60,local_28);
    FUN_006245d0(&local_68,param_1[2] + 0x40);
    FUN_004168e0(&local_70,local_68);
    (*(code *)**(undefined8 **)param_1[2])((undefined8 *)param_1[2],&local_78);
    FUN_004168e0(&local_80,local_78);
    (**(code **)(*(longlong *)param_1[4] + 0x18))
              ((longlong *)param_1[4],local_48,local_58,local_60,param_3,local_70,local_80,&local_2c
               ,&local_1c);
  }
  if (local_2c == 0) {
    puVar1 = (undefined8 *)param_1[2];
    (**(code **)*puVar1)(puVar1,&local_88);
    FUN_004168e0(&local_90,local_88);
    (**(code **)(**(longlong **)(param_1[2] + 0x10) + 0x10))
              (*(longlong **)(param_1[2] + 0x10),&local_98);
    FUN_004168e0(&local_a0,local_98);
    local_1c = FUN_006210f0(param_2,param_3,puVar1 + 8,local_90,local_a0);
  }
  FUN_00414520(&local_a0);
  FUN_00414480(&local_98);
  FUN_00414520(&local_90);
  FUN_00414480(&local_88);
  FUN_00414520(&local_80);
  FUN_00414480(&local_78);
  FUN_00414520(&local_70);
  FUN_00414480(&local_68);
  FUN_004145c0(&local_60,2);
  FUN_00414480(&local_50);
  FUN_00414520(&local_48);
  FUN_00414480(local_40);
  FUN_00414480(&local_28);
  return local_1c;
}

