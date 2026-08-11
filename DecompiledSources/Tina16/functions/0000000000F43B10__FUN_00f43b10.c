/* Ghidra address: 00f43b10 */
/* Ghidra symbol: FUN_00f43b10 */


void FUN_00f43b10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  if ((*(int *)(lVar1 + 0x4a8) == 1) && (0 < *(int *)(lVar1 + 0x4ac))) {
    cVar2 = FUN_00b0a360(lVar1);
    if (cVar2 == '\0') {
      lVar1 = *(longlong *)(param_1 + 0x6d0);
      FUN_0084e320(lVar1,local_20,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
      FUN_00b0b450(lVar1,1,0,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return;
}

