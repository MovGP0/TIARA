/* Ghidra address: 006612d0 */
/* Ghidra symbol: FUN_006612d0 */


void FUN_006612d0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_28 = *param_3;
  uStack_20 = param_3[1];
  if (param_2 == 0) {
    param_2 = *(longlong *)(param_1 + 0x90);
  }
  FUN_00661280(auStack_48,param_2);
  return;
}

