/* Ghidra address: 00706b50 */
/* Ghidra symbol: FUN_00706b50 */


void FUN_00706b50(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_006efb70(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x4e0));
  FUN_006ef370(uVar1,0,*(undefined4 *)(param_2 + 0x30));
  FUN_006ef050(uVar1,*(undefined8 *)(param_2 + 0x20));
  FUN_006ef160(uVar1,*(undefined8 *)(param_2 + 0x28));
  return;
}

