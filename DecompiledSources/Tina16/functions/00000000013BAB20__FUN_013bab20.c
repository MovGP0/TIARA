/* Ghidra address: 013bab20 */
/* Ghidra symbol: FUN_013bab20 */


void FUN_013bab20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x868));
  if (*(longlong *)(param_2 + 0x860) != 0) {
    FUN_004095f0(*(undefined8 *)(param_2 + 0x860));
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x890) + 0x18);
  if (lVar1 != 0) {
    uVar2 = FUN_00442620(param_2 + 0x456,*(undefined8 *)(*(longlong *)(param_2 + 0x890) + 0x20));
    FUN_015fcd60(lVar1,uVar2,0);
    *(undefined8 *)(*(longlong *)(param_2 + 0x890) + 0x18) = 0;
  }
  return;
}

