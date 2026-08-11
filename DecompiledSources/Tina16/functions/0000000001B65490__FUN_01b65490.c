/* Ghidra address: 01b65490 */
/* Ghidra symbol: FUN_01b65490 */


void FUN_01b65490(longlong *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_40;
  undefined1 local_31;
  longlong local_30;
  undefined4 local_24;
  
  local_40 = auStack_78;
  local_24 = (**(code **)(*(longlong *)param_1[0xfb] + 0x260))((longlong *)param_1[0xfb]);
  local_31 = 1;
  uVar1 = (**(code **)(**(longlong **)(param_1[0xfb] + 0x4f0) + 0x30))
                    (*(longlong **)(param_1[0xfb] + 0x4f0),local_24);
  local_30 = FUN_004113f0(uVar1,&PTR_FUN_011051a8);
  if (*(char *)(local_30 + 0x11) != '\0') {
    local_58 = &local_31;
    (**(code **)(*param_1 + 0x550))(param_1,local_30,1,param_2);
  }
  return;
}

