/* Ghidra address: 012e2050 */
/* Ghidra symbol: FUN_012e2050 */


void FUN_012e2050(undefined8 param_1,undefined8 param_2,undefined2 param_3,longlong param_4)

{
  undefined8 local_res10;
  undefined2 local_res18;
  longlong local_res20;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  int local_1c;
  int local_18;
  char local_11;
  undefined8 local_10;
  
  local_30 = auStack_68;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_11 = '\0';
  local_1c = 0;
  do {
    FUN_00416780(&local_38,local_res18);
    local_18 = FUN_004170c0(local_38,local_res10,1);
    if (local_18 == 0) break;
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,local_res10,1,local_18 + -1);
    FUN_00414b50(&local_28,local_10);
    FUN_00414480(&local_10);
    FUN_004579e0(&local_28,&local_40);
    FUN_00414b50(&local_28,local_40);
    FUN_00457b10(&local_28,&local_48);
    FUN_00414b50(&local_28,local_48);
    FUN_00414ad0(local_res20 + (longlong)local_1c * 8,local_28);
    FUN_00416e20(&local_res10,1,local_18);
    local_1c = local_1c + 1;
  } while (local_11 == '\0');
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res10);
  return;
}

