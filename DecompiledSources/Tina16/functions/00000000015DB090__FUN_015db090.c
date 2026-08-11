/* Ghidra address: 015db090 */
/* Ghidra symbol: FUN_015db090 */


void FUN_015db090(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined1 *local_res20;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  int local_1c;
  
  local_30[0] = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  if (*(longlong *)(param_1 + 0x160) == 0) {
    FUN_0041ddd0(&local_38,PTR_PTR_02004a18);
    local_58 = *local_res18;
    local_50 = 0x11;
    local_48 = local_res10;
    local_40 = 0x11;
    FUN_00442f70(local_30,local_38,&local_58,1);
    local_1c = FUN_0072d440(local_30[0],3,0x303,0);
    *local_res20 = 0;
    if (local_1c == 6) {
      *local_res20 = 1;
    }
    else if (local_1c == 7) {
      *local_res20 = 0;
    }
    else if (local_1c == 0xd) {
      *local_res20 = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0xb) = 2;
    }
    else if (local_1c == 0xe) {
      *local_res20 = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 0xb) = 1;
    }
  }
  else {
    (**(code **)(param_1 + 0x160))
              (*(undefined8 *)(param_1 + 0x168),param_1,local_res10,local_res18,local_res20);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_res10);
  return;
}

