/* Ghidra address: 00664940 */
/* Ghidra symbol: FUN_00664940 */


void FUN_00664940(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_00663cf0(param_1);
    *(ulonglong *)(param_1 + 0x70) = CONCAT44(param_4,param_3);
    local_20 = param_3;
    uStack_1c = param_4;
    FUN_00664880(auStack_48);
    FUN_00663cf0(param_1);
  }
  return;
}

