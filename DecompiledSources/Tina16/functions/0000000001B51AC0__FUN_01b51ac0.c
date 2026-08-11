/* Ghidra address: 01b51ac0 */
/* Ghidra symbol: FUN_01b51ac0 */


void FUN_01b51ac0(char param_1,double *param_2,undefined1 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  double dVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  double local_28;
  double local_20;
  
  local_70 = 0;
  local_78 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_48 = 0;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (param_1 == '\0') {
    dVar1 = (double)FUN_00c44590(&local_28);
    FUN_00b8fd60(&local_48,dVar1 * 2.0,param_3,0,1);
    local_40 = local_48;
    local_38 = 0x11;
    FUN_00442f70(&local_30,L"%15s",&local_40,0);
    FUN_00414ad0(param_4,local_30);
    dVar1 = (double)FUN_00c445d0(&local_28);
    FUN_00b8fd60(&local_58,dVar1 * 57.29577951308232,2,0,1);
    local_40 = local_58;
    local_38 = 0x11;
    FUN_00442f70(&local_50,L"%15s",&local_40,0);
    FUN_00414ad0(param_5,local_50);
  }
  else if (param_1 == '\x01') {
    FUN_00b8fd60(&local_68,local_28 * 2.0,param_3,0,1);
    local_40 = local_68;
    local_38 = 0x11;
    FUN_00442f70(&local_60,L"%15s",&local_40,0);
    FUN_00414ad0(param_4,local_60);
    FUN_00b8fd60(&local_78,local_20 * -2.0,param_3,0,1);
    local_40 = local_78;
    local_38 = 0x11;
    FUN_00442f70(&local_70,L"%15s",&local_40,0);
    FUN_00414ad0(param_5,local_70);
  }
  FUN_00414560(&local_78,7);
  FUN_00414480(&local_30);
  return;
}

