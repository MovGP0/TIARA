/* Ghidra address: 015db830 */
/* Ghidra symbol: FUN_015db830 */


void FUN_015db830(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_50 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*(longlong *)(param_1 + 400) == 0) {
    FUN_00414b50(local_20,param_2);
    FUN_00414480(&local_28);
    FUN_0041ddd0(&local_38,PTR_PTR_02002b08);
    local_48 = local_20[0];
    local_40 = 0x11;
    FUN_00442f70(&local_30,local_38,&local_48,0);
    FUN_0041ddd0(&local_50,PTR_PTR_02004348);
    cVar1 = FUN_015db3a0(auStack_88,local_30,local_50,&local_28);
    *param_4 = cVar1 == '\0';
    if (*param_4 == '\0') {
      FUN_00415dd0(param_3,local_28,0);
    }
  }
  else {
    local_68 = param_4;
    (**(code **)(param_1 + 400))(*(undefined8 *)(param_1 + 0x198),param_1,param_2,param_3);
  }
  FUN_00414480(&local_50);
  FUN_00414560(&local_38,4);
  return;
}

