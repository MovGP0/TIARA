/* Ghidra address: 00f9c960 */
/* Ghidra symbol: FUN_00f9c960 */


void FUN_00f9c960(longlong param_1)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x7c1) != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_10);
    iVar1 = FUN_0043fc00(local_10);
    if (iVar1 < 0) {
      iVar1 = 4;
    }
    if (7 < iVar1) {
      iVar1 = 7;
    }
    *(undefined1 *)(param_1 + 0x7c1) = 0;
    FUN_0043f750(&local_18,iVar1);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_18);
    *(undefined1 *)(param_1 + 0x7c1) = 1;
  }
  FUN_00414480(&local_18);
  FUN_00414480(&local_10);
  return;
}

