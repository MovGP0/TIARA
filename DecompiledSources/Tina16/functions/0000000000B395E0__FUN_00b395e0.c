/* Ghidra address: 00b395e0 */
/* Ghidra symbol: FUN_00b395e0 */


void FUN_00b395e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 char param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + -4) >> 1;
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + -4) >> 1;
  }
  FUN_00414c70(&local_20,param_4);
  if ((local_20 == 0) && (uVar2 != 0)) {
    FUN_0043f750(local_30,uVar2);
    FUN_00415dd0(&local_38,local_30[0],0);
    FUN_00415980(&local_20,3,&DAT_00b39860,local_38,"(font:Tahoma;size:8);");
  }
  FUN_00b39490(param_1,param_3);
  if ((param_5 == '\0') || (uVar1 == 0)) {
    FUN_00b39420(param_1,param_2);
    FUN_00b39500(param_1,local_20);
  }
  else {
    FUN_00416310(&local_40,4,param_3,&DAT_00b3988c,&DAT_00b39894,param_2);
    FUN_00b39420(param_1,local_40);
    FUN_0043f750(&local_48,uVar1 + 2);
    FUN_00415dd0(&local_50,local_48,0);
    FUN_00b38540(&local_58,local_20,uVar1 + 2);
    FUN_00415980(&local_20,4,&DAT_00b39860,local_50,"(style:b;font:Tahoma;size:8);",local_58);
    FUN_00b39500(param_1,local_20);
  }
  FUN_00414590(&local_58,2);
  FUN_00414480(&local_48);
  FUN_00414520(&local_40);
  FUN_004144d0(&local_38);
  FUN_00414480(local_30);
  FUN_004144d0(&local_20);
  return;
}

