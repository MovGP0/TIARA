/* Ghidra address: 01b580b0 */
/* Ghidra symbol: FUN_01b580b0 */


void FUN_01b580b0(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_40;
  undefined1 local_31;
  longlong local_30;
  int local_24;
  
  local_40 = auStack_78;
  uVar2 = (uint)*(byte *)((longlong)param_1 + 0xd19);
  local_24 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    do {
      local_31 = 0;
      uVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                        (*(longlong **)(param_1[0xfb] + 0x4f0),local_24);
      local_30 = FUN_004113f0(uVar1,&PTR_FUN_011051a8);
      if (*(char *)(local_30 + 0x11) != '\0') {
        local_58 = &local_31;
        (**(code **)(*param_1 + 0x550))(param_1,local_30,1,param_2);
      }
      local_24 = local_24 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}

