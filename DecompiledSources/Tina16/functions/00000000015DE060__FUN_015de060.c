/* Ghidra address: 015de060 */
/* Ghidra symbol: FUN_015de060 */


undefined1 FUN_015de060(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_22;
  undefined8 local_20;
  
  local_50 = auStack_88;
  local_22 = 1;
  local_2c = 0x100000;
  uVar1 = (**(code **)*param_2)(param_2);
  FUN_004b6dc0(param_2,uVar1);
  local_40 = (**(code **)*param_3)(param_3);
  FUN_004b6dc0(param_3,0);
  local_38 = 0;
  local_20 = FUN_004095c0(0x100000);
  if (*(char *)((longlong)param_1 + 0x101) != '\0') {
    local_68 = (longlong *)((ulonglong)local_68 & 0xffffffffffffff00);
    local_60 = param_1 + 0x20;
    (**(code **)(*param_1 + 0xa0))(param_1,param_4,0,9);
    local_68 = param_1 + 0x20;
    (**(code **)(*param_1 + 0x98))(param_1,0,9,0);
  }
  param_1[0x24] = local_40;
  do {
    param_1[0x23] = local_38;
    if (*(char *)((longlong)param_1 + 0x101) != '\0') {
      local_68 = (longlong *)CONCAT71(local_68._1_7_,1);
      local_60 = param_1 + 0x20;
      (**(code **)(*param_1 + 0xa0))
                (param_1,param_4,((double)param_1[0x23] / (double)param_1[0x24]) * 100.0,9);
      if ((char)param_1[0x20] != '\0') break;
      local_68 = param_1 + 0x20;
      (**(code **)(*param_1 + 0x98))
                (param_1,((double)param_1[0x23] / (double)param_1[0x24]) * 100.0,9,1);
      if ((char)param_1[0x20] != '\0') break;
    }
    local_28 = (**(code **)(*param_3 + 0x18))(param_3,local_20,local_2c);
    local_38 = local_38 + local_28;
    if ((local_28 != local_2c) && (local_38 < local_40)) {
      local_22 = 0;
      break;
    }
    local_30 = (**(code **)(*param_2 + 0x20))(param_2,local_20,local_28);
    if (local_28 != local_30) {
      local_22 = 0;
      break;
    }
  } while (local_38 < local_40);
  if (*(char *)((longlong)param_1 + 0x101) != '\0') {
    local_68 = (longlong *)CONCAT71(local_68._1_7_,2);
    local_60 = param_1 + 0x20;
    (**(code **)(*param_1 + 0xa0))(param_1,param_4,0x4059000000000000,9);
    local_68 = param_1 + 0x20;
    (**(code **)(*param_1 + 0x98))(param_1,0x4059000000000000,9,2);
  }
  FUN_004095f0(local_20);
  return local_22;
}

