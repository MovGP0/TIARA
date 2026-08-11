/* Ghidra address: 0108ca70 */
/* Ghidra symbol: FUN_0108ca70 */


void FUN_0108ca70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00416880(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xae8));
  lVar2 = FUN_0108c720(param_1,local_20);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x9f8);
    FUN_006de160(lVar2);
    FUN_006ded10(*(undefined8 *)(lVar1 + 0x550),lVar2);
  }
  FUN_00414480(&local_20);
  return;
}

