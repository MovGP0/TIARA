/* Ghidra address: 00f8df50 */
/* Ghidra symbol: FUN_00f8df50 */


undefined8 FUN_00f8df50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x33fa) == '\0') ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3468) + 0x1370),
     lVar1 < *(longlong *)(param_1 + 0x34f0))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}

