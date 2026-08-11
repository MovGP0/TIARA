/* Ghidra address: 019dcab0 */
/* Ghidra symbol: FUN_019dcab0 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_019dcab0(undefined8 param_1,longlong param_2,int *param_3)

{
  char cVar1;
  longlong local_res10;
  int *local_res18;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined4 local_4c;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  longlong local_30 [2];
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_60 = auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_18 = 0;
  local_30[1] = 0;
  local_30[0] = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_019dc870(local_30 + 1,local_res10,local_res18);
  FUN_00457870(local_30 + 1,param_1);
  do {
    local_3c = 0;
    if (local_res10 != 0) {
      local_3c = *(int *)(local_res10 + -4);
    }
    if (*local_res18 < local_3c) {
      local_1c = *local_res18;
      FUN_019dc870(&local_18,local_res10,local_res18);
      FUN_004579e0(&local_18,&local_68);
      local_48 = local_68;
      cVar1 = FUN_005b8460(&LAB_019dcd28,local_68);
      if (cVar1 == '\0') {
        *local_res18 = local_1c;
      }
      else {
        FUN_00414480(&local_10);
        FUN_00457870(&local_18,local_30);
        local_4c = 0;
        if (local_30[0] != 0) {
          local_4c = *(undefined4 *)(local_30[0] + -4);
        }
        FUN_00416dc0(&local_10,local_30[0],2,local_4c);
        FUN_00416ad0(param_1,local_10);
        FUN_00414480(&local_10);
      }
    }
    FUN_004579e0(&local_18,&local_70);
    local_38 = local_70;
    cVar1 = FUN_005b8460(&LAB_019dcd28,local_70);
  } while (cVar1 != '\0');
  FUN_00414560(&local_70,2);
  FUN_00414560(local_30,2);
  FUN_00414560(&local_18,2);
  FUN_00414480(&local_res10);
  return param_1;
}

