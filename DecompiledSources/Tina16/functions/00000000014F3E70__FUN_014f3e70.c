/* Ghidra address: 014f3e70 */
/* Ghidra symbol: FUN_014f3e70 */


void FUN_014f3e70(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x6e0);
  if (*(int *)(lVar1 + 0x4a8) <= *(int *)(lVar1 + 0x4ac)) {
    FUN_0084e320(lVar1,local_20,*(int *)(lVar1 + 0x4a8),*(int *)(lVar1 + 0x4ac));
    iVar2 = FUN_00416db0(local_20[0],&DAT_014f3f74);
    if (iVar2 == 0) {
      FUN_00414b50(local_20,&DAT_014f3f84);
    }
    else {
      iVar2 = FUN_00416db0(local_20[0],&LAB_014f3f94);
      if (iVar2 == 0) {
        FUN_00414b50(local_20,&DAT_014f3f74);
      }
      else {
        FUN_00414b50(local_20,&LAB_014f3f94);
      }
    }
    FUN_0084e3e0(lVar1,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac),local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}

