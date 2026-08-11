/* Ghidra address: 01c06700 */
/* Ghidra symbol: FUN_01c06700 */


void FUN_01c06700(longlong param_1)

{
  undefined4 local_28 [2];
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_28[0] = 0xb402;
    local_20 = 0;
    local_10 = 0;
    local_18 = param_1;
    FUN_00654c30(*(longlong *)(param_1 + 0x78),local_28);
  }
  return;
}

