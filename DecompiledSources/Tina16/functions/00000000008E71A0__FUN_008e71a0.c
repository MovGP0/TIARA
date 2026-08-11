/* Ghidra address: 008e71a0 */
/* Ghidra symbol: FUN_008e71a0 */


longlong *
FUN_008e71a0(longlong *param_1,longlong *param_2,undefined2 *param_3,int param_4,int *param_5)

{
  undefined1 uVar1;
  undefined1 auStack_68 [36];
  int local_44;
  undefined1 *local_40;
  undefined4 local_30;
  int local_2c;
  undefined1 *local_28;
  undefined2 *local_20;
  int local_14;
  
  local_40 = auStack_68;
  local_20 = param_3;
  if ((param_3 == (undefined2 *)0x0) || (param_4 < 1)) {
    *param_5 = 0;
    local_40 = auStack_68;
    FUN_004144d0(param_2);
  }
  else {
    FUN_00415d10(param_2,param_4,0);
    local_14 = 0;
    local_2c = 0;
    local_28 = (undefined1 *)*param_2;
    local_30 = 1;
    local_44 = param_4;
    if (0 < param_4) {
      do {
        uVar1 = (**(code **)(*param_1 + 0x90))(param_1,*local_20);
        *local_28 = uVar1;
        local_28 = local_28 + 1;
        local_20 = local_20 + 1;
        local_14 = local_14 + 1;
        local_2c = local_2c + 1;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
    }
    if (param_4 != local_2c) {
      FUN_00415d10(param_2,local_2c,0);
    }
    *param_5 = local_14;
  }
  return param_2;
}

