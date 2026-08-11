/* Ghidra address: 015e1930 */
/* Ghidra symbol: FUN_015e1930 */


undefined1 FUN_015e1930(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_20;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  local_20 = auStack_58;
  local_9 = 0;
  if (*(char *)(param_1 + 0x84) == '\0') {
    cVar1 = FUN_00440a20(*(undefined8 *)(param_1 + 0x88),1);
    if (cVar1 == '\0') {
      local_9 = 0;
    }
    else {
      uVar2 = FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(param_1 + 0x88),0x40);
      *(undefined8 *)(param_1 + 0x250) = uVar2;
      local_38 = param_1;
      uVar2 = FUN_015c3590(&DAT_015ba810,1,*(undefined8 *)(param_1 + 0x250),0);
      *(undefined8 *)(param_1 + 0x238) = uVar2;
      local_b = *(undefined1 *)(param_1 + 0x111);
      *(undefined1 *)(param_1 + 0x111) = 0;
      cVar1 = FUN_015c9b20(*(undefined8 *)(param_1 + 0x238));
      if (cVar1 == '\0') {
        local_a = *(undefined1 *)(param_1 + 0x103);
        *(undefined1 *)(param_1 + 0x103) = 2;
        FUN_015c6ba0(*(undefined8 *)(param_1 + 0x238));
        local_9 = 1;
        FUN_00410f20(*(undefined8 *)(param_1 + 0x238));
        *(undefined8 *)(param_1 + 0x238) = 0;
        *(undefined1 *)(param_1 + 0x111) = 1;
        FUN_015dca70(param_1,0x40);
        FUN_015e0e10(param_1,&LAB_015e1d60,0x28bf,0);
        FUN_015dcd20(param_1);
        *(undefined1 *)(param_1 + 0x103) = local_a;
      }
      else {
        local_9 = 1;
      }
      *(undefined1 *)(param_1 + 0x111) = local_b;
      if (*(longlong *)(param_1 + 0x238) != 0) {
        FUN_00410f20(*(undefined8 *)(param_1 + 0x238));
      }
      *(undefined8 *)(param_1 + 0x238) = 0;
      FUN_00410f20(*(undefined8 *)(param_1 + 0x250));
      *(undefined8 *)(param_1 + 0x250) = 0;
    }
  }
  else {
    local_9 = 1;
  }
  return local_9;
}

