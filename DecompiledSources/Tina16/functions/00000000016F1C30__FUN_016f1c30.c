/* Ghidra address: 016f1c30 */
/* Ghidra symbol: FUN_016f1c30 */


void FUN_016f1c30(longlong param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined1 *local_30;
  
  local_30 = (undefined1 *)FUN_004095c0(0x28);
  *local_30 = param_2;
  local_30[1] = 0;
  *(undefined4 *)(local_30 + 4) = param_3;
  *(undefined4 *)(local_30 + 8) = param_4;
  *(undefined8 *)(local_30 + 0x10) = param_5;
  *(undefined8 *)(local_30 + 0x18) = param_6;
  local_30[0x20] = 1;
  FUN_00597e50(*(longlong *)(param_1 + 0xb8) + 8,&local_30);
  return;
}

