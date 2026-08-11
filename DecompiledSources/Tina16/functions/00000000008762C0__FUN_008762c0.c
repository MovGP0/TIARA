/* Ghidra address: 008762c0 */
/* Ghidra symbol: FUN_008762c0 */


void FUN_008762c0(undefined8 param_1,undefined2 *param_2,char *param_3)

{
  undefined2 uVar1;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  undefined1 *local_40;
  undefined2 *local_30;
  undefined4 local_24;
  int local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_008759b0(&local_18,param_1);
  *param_3 = local_18 == 0;
  if (*param_3 == '\0') {
    local_4c = 8;
    local_30 = param_2;
    do {
      FUN_00414480(&local_10);
      local_20 = (*(code *)PTR_FUN_01e1df90)(&DAT_00876498,local_18);
      if (local_20 == 0) {
        FUN_00414b50(&local_10,local_18);
        FUN_00414480(&local_18);
      }
      else {
        FUN_00416dc0(&local_10,local_18,1,local_20 + -1);
        local_24 = 1;
        FUN_00416dc0(&local_18,local_18,local_20 + 1,0x7fffffff);
      }
      FUN_00416ba0(&local_48,&LAB_008764a8,local_10);
      uVar1 = FUN_00877cc0(local_48,0);
      *local_30 = uVar1;
      FUN_00414480(&local_10);
      local_30 = local_30 + 1;
      local_4c = local_4c + -1;
    } while (local_4c != 0);
  }
  FUN_00414480(&local_48);
  FUN_00414560(&local_18,2);
  return;
}

