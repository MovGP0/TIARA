/* Ghidra address: 01c19e00 */
/* Ghidra symbol: FUN_01c19e00 */


void FUN_01c19e00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_005ffa40(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x4b0));
  FUN_00428be0(uVar1,*(undefined4 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x54),
               *(undefined4 *)(param_2 + 0x58),*(undefined4 *)(param_2 + 0x5c));
  FUN_005ffb10(*(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x4b0),0);
  return;
}

