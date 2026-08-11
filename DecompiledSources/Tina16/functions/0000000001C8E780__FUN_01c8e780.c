/* Ghidra address: 01c8e780 */
/* Ghidra symbol: FUN_01c8e780 */


void FUN_01c8e780(longlong param_1)

{
  char cVar1;
  code *local_28;
  longlong local_20;
  
  cVar1 = FUN_01c87d20(param_1);
  if (cVar1 == '\0') {
    local_28 = FUN_01c8e780;
    local_20 = param_1;
    FUN_00f836b0(&local_28);
  }
  else {
    FUN_0145f5e0(*(undefined8 *)(*(longlong *)(param_1 + 0xde0) + 0x18),0xffffffff,0);
  }
  return;
}

