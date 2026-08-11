/* Ghidra address: 01873300 */
/* Ghidra symbol: FUN_01873300 */


void FUN_01873300(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  if (param_2 != 0) {
    local_10 = FUN_00410e60(&DAT_01872688,1);
    *(longlong *)(local_10 + 0x10) = param_2;
    FUN_00414ad0(local_10 + 8,param_3);
    *(undefined8 *)(local_10 + 0x18) = param_4;
    FUN_01873240(param_1,1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),local_10);
    FUN_018733b0(param_1,1);
  }
  return;
}

