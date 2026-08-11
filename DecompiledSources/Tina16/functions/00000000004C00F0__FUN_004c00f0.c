/* Ghidra address: 004c00f0 */
/* Ghidra symbol: FUN_004c00f0 */


void FUN_004c00f0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    local_10 = auStack_38;
    uVar1 = FUN_004dfb90(&PTR_FUN_0048d528,1);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    FUN_004c0180(param_1,param_2);
    FUN_004be5c0(param_1);
    FUN_004be8e0(param_1);
  }
  else {
    FUN_004c0180(param_1,param_2);
  }
  return;
}

