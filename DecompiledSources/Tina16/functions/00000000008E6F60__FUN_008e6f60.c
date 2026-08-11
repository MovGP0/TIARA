/* Ghidra address: 008e6f60 */
/* Ghidra symbol: FUN_008e6f60 */


void FUN_008e6f60(longlong *param_1,undefined1 *param_2,int param_3,undefined2 *param_4,int param_5,
                 int *param_6,int *param_7)

{
  undefined2 uVar1;
  int local_res10;
  undefined1 auStack_68 [36];
  int local_44;
  undefined1 *local_40;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined2 *local_20;
  undefined1 *local_18;
  
  local_40 = auStack_68;
  local_2c = param_5 / 2;
  if ((((param_2 == (undefined1 *)0x0) || (param_3 < 1)) || (param_4 == (undefined2 *)0x0)) ||
     (local_2c < 1)) {
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    local_24 = 0;
    local_28 = 1;
    local_44 = param_3;
    local_20 = param_4;
    local_18 = param_2;
    if (0 < param_3) {
      do {
        if (local_2c <= local_24) break;
        uVar1 = (**(code **)(*param_1 + 0x88))(param_1,*local_18);
        *local_20 = uVar1;
        local_18 = local_18 + 1;
        local_20 = local_20 + 1;
        local_24 = local_24 + 1;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
    }
    *param_7 = local_24;
    local_res10 = (int)param_2;
    *param_6 = (int)local_18 - local_res10;
  }
  return;
}

