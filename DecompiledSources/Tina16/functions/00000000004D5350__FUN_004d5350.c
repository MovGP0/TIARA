/* Ghidra address: 004d5350 */
/* Ghidra symbol: FUN_004d5350 */


int FUN_004d5350(longlong param_1,longlong *param_2,ulonglong param_3,longlong *param_4,
                longlong *param_5)

{
  longlong *local_res10;
  ulonglong local_res18;
  longlong *local_res20;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_50 = auStack_78;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  local_24 = 0;
  local_20 = 0;
  local_18 = 0;
  if (local_res18 < 0x100001) {
    local_28 = (int)local_res18;
  }
  else {
    local_28 = 0x100000;
  }
  local_10 = FUN_004095c0((longlong)local_28);
  do {
    do {
      if (local_res18 == 0) {
        FUN_004095f0(local_10);
        if (param_5 != (longlong *)0x0) {
          *param_5 = local_18;
        }
        if (local_res20 != (longlong *)0x0) {
          *local_res20 = local_20;
        }
LAB_004d5520:
        FUN_0041b800(&local_res10);
        return local_24;
      }
      if (local_res18 < 0x80000000) {
        local_30 = (int)local_res18;
      }
      else {
        local_30 = 0x7fffffff;
      }
    } while (local_30 < 1);
    do {
      if (local_28 < local_30) {
        local_2c = local_28;
      }
      else {
        local_2c = local_30;
      }
      local_34 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                           (*(longlong **)(param_1 + 0x18),local_10,local_2c);
      if (local_34 == 0) {
LAB_004d5501:
        FUN_004d5540(0,local_50);
        goto LAB_004d5520;
      }
      local_20 = local_20 + local_34;
      local_40 = 0;
      local_24 = (**(code **)(*local_res10 + 0x20))(local_res10,local_10,local_34,&local_40);
      local_18 = local_18 + local_40;
      if ((local_24 == 0) && ((int)local_40 != local_34)) {
        local_24 = -0x7fffbffb;
      }
      if (local_24 != 0) goto LAB_004d5501;
      local_30 = local_30 - local_34;
      local_res18 = local_res18 - (longlong)local_34;
    } while (0 < local_30);
  } while( true );
}

