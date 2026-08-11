/* Ghidra address: 00aa7720 */
/* Ghidra symbol: FUN_00aa7720 */


void FUN_00aa7720(longlong param_1,undefined8 param_2,longlong param_3,int param_4,
                 undefined1 param_5,undefined1 param_6,undefined1 *param_7)

{
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 local_60;
  undefined1 *local_50;
  undefined8 local_40;
  char local_31;
  longlong local_30;
  int local_28;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = auStack_88;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_30 = 0;
  local_31 = '\0';
  *param_7 = 0;
  FUN_00414480(&local_18);
  FUN_0043ea00(&local_18,param_2);
  FUN_00414480(&local_10);
  FUN_0043e5a0(&local_10,local_18);
  FUN_00414b50(&local_20,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_18);
  local_24 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb0))
                       (*(longlong **)(param_1 + 0x2a8),local_20);
  local_28 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0xb0))
                       (*(longlong **)(param_1 + 0x240),local_20);
  if ((local_24 == -1) && (-1 < local_28)) {
    if (param_3 != 0) {
      if (param_4 != -1) {
        param_5 = 1;
      }
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,param_4);
      local_60 = param_6;
      local_30 = FUN_00a48050(&PTR_FUN_00a432a0,1,param_3,param_5);
    }
    if (local_30 == 0) {
      local_31 = '\x01';
    }
    else {
      local_40 = *(undefined8 *)(param_1 + 0x2a8);
      FUN_00a29f70(local_40,local_20,local_30);
      FUN_00a2a110(*(undefined8 *)(param_1 + 0x2a8),local_20);
    }
  }
  if (((-1 < local_24) || (local_30 != 0)) || (local_31 != '\0')) {
    local_68 = param_7;
    FUN_00aa7430(param_1,local_20,local_28,local_31);
  }
  FUN_00414560(&local_20,3);
  return;
}

