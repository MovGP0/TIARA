/* Ghidra address: 0082a670 */
/* Ghidra symbol: FUN_0082a670 */


void FUN_0082a670(longlong param_1)

{
  undefined4 local_28 [2];
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  if ((*(int *)(param_1 + 0x318) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
    local_28[0] = 0xb018;
    local_20 = (longlong)*(int *)(param_1 + 0x318);
    local_10 = 0;
    local_18 = param_1;
    FUN_00654c30(*(undefined8 *)(param_1 + 0x78),local_28);
  }
  return;
}

