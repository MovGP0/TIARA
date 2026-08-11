/* Ghidra address: 01809c50 */
/* Ghidra symbol: FUN_01809c50 */


undefined8 FUN_01809c50(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = FUN_01809cc0(param_1,L"DisabledImages",*(undefined4 *)(param_1 + 0x5c),0x10,0x10);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  return *(undefined8 *)(param_1 + 8);
}

