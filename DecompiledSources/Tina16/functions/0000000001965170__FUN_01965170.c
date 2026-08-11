/* Ghidra address: 01965170 */
/* Ghidra symbol: FUN_01965170 */


undefined8 * FUN_01965170(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_0195b240(param_1,param_2,param_3);
  if (*(char *)(param_1 + 0x2c4) != *(char *)(param_3 + 0x2c4)) {
    FUN_00468820(&local_38,*(char *)(param_1 + 0x2c4));
    FUN_018036e0(&local_20,&local_38);
    FUN_00416cd0(param_2,4,*param_2,L" Diagonal=\"",local_20,&DAT_0196560c);
  }
  if (*(char *)(param_1 + 0x2c5) != *(char *)(param_3 + 0x2c5)) {
    FUN_00468820(&local_58,*(char *)(param_1 + 0x2c5));
    FUN_018036e0(&local_40,&local_58);
    FUN_00416cd0(param_2,4,*param_2,L" ArrowEnd=\"",local_40,&DAT_0196560c);
  }
  if (*(int *)(param_1 + 0x2c8) != *(int *)(param_3 + 0x2c8)) {
    FUN_00468530(&local_78,*(int *)(param_1 + 0x2c8),0xfffffffffffffffc);
    FUN_018036e0(&local_60,&local_78);
    FUN_00416cd0(param_2,4,*param_2,L" ArrowLength=\"",local_60,&DAT_0196560c);
  }
  if (*(char *)(param_1 + 0x2cc) != *(char *)(param_3 + 0x2cc)) {
    FUN_00468820(&local_98,*(char *)(param_1 + 0x2cc));
    FUN_018036e0(&local_80,&local_98);
    FUN_00416cd0(param_2,4,*param_2,L" ArrowSolid=\"",local_80,&DAT_0196560c);
  }
  if (*(char *)(param_1 + 0x2cd) != *(char *)(param_3 + 0x2cd)) {
    FUN_00468820(&local_b8,*(char *)(param_1 + 0x2cd));
    FUN_018036e0(&local_a0,&local_b8);
    FUN_00416cd0(param_2,4,*param_2,L" ArrowStart=\"",local_a0,&DAT_0196560c);
  }
  if (*(int *)(param_1 + 0x2d0) != *(int *)(param_3 + 0x2d0)) {
    FUN_00468530(&local_d8,*(int *)(param_1 + 0x2d0),0xfffffffffffffffc);
    FUN_018036e0(&local_c0,&local_d8);
    FUN_00416cd0(param_2,4,*param_2,L" ArrowWidth=\"",local_c0,&DAT_0196560c);
  }
  FUN_00460ba0(&local_d8);
  FUN_00414480(&local_c0);
  FUN_00460ba0(&local_b8);
  FUN_00414480(&local_a0);
  FUN_00460ba0(&local_98);
  FUN_00414480(&local_80);
  FUN_00460ba0(&local_78);
  FUN_00414480(&local_60);
  FUN_00460ba0(&local_58);
  FUN_00414480(&local_40);
  FUN_00460ba0(&local_38);
  FUN_00414480(&local_20);
  return param_2;
}

