/* Ghidra address: 015ee3d0 */
/* Ghidra symbol: FUN_015ee3d0 */


void FUN_015ee3d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x968) != 0) {
    uVar1 = FUN_00442620(param_2 + 0x168,*(undefined8 *)(param_2 + 0x9a0));
    FUN_015fcd60(*(undefined8 *)(param_2 + 0x968),uVar1,0);
    *(undefined8 *)(param_2 + 0x968) = 0;
  }
  return;
}

