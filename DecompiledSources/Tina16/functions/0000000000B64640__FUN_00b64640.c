/* Ghidra address: 00b64640 */
/* Ghidra symbol: FUN_00b64640 */


void FUN_00b64640(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined2 local_2e;
  int local_2c;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
  FUN_00b43a60(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x60),local_20);
  FUN_004b6dc0(local_20,0);
  local_24 = (**(code **)*local_20)(local_20);
  local_2e = 0xeb;
  local_28 = 0;
  while (0 < local_24) {
    local_2c = local_24;
    if (0x2020 < local_24) {
      local_2c = 0x2020;
    }
    local_24 = local_24 - local_2c;
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),local_2e);
    FUN_00b62ce0(*(undefined8 *)(param_1 + 0x40),(undefined2)local_2c);
    FUN_00b62d20(*(undefined8 *)(param_1 + 0x40),local_20[1] + (longlong)local_28,local_2c);
    local_28 = local_28 + local_2c;
    local_2e = 0x3c;
  }
  (**(code **)(*local_20 + -0x20))(local_20,1);
  return;
}

