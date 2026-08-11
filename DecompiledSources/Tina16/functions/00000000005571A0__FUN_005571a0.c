/* Ghidra address: 005571a0 */
/* Ghidra symbol: FUN_005571a0 */


void FUN_005571a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00535740(param_1 + 0x8c);
  if (iVar1 == 0) {
    **(undefined8 **)(param_1 + 0x40) = param_2;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 8;
  }
  else if (iVar1 == 1) {
    *(undefined8 *)(param_1 + 0x48) = param_2;
  }
  else if (iVar1 == 2) {
    *(undefined8 *)(param_1 + 0x50) = param_2;
  }
  else if (iVar1 == 4) {
    *(undefined8 *)(param_1 + 0x58) = param_2;
  }
  else if (iVar1 == 8) {
    *(undefined8 *)(param_1 + 0x60) = param_2;
  }
  return;
}

