/* Ghidra address: 00746320 */
/* Ghidra symbol: FUN_00746320 */


undefined8 FUN_00746320(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong local_28;
  undefined1 local_20;
  
  local_28 = FUN_00746290(*(undefined8 *)(param_1 + 0x50),param_3);
  if (*(char *)(local_28 + 0x18) == '\0') {
    uVar1 = FUN_0040c840(*(undefined8 *)(local_28 + 0x20));
    FUN_0043f780(param_2,uVar1);
  }
  else if (*(char *)(local_28 + 0x18) == '\x01') {
    local_28 = local_28 + 0x20;
    local_20 = 3;
    FUN_00442f70(param_2,L"%3.2f%%",&local_28,0);
  }
  else {
    FUN_0041ddd0(param_2,PTR_PTR_020038f8);
  }
  return param_2;
}

