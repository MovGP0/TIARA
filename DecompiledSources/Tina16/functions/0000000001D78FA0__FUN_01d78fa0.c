/* Ghidra address: 01d78fa0 */
/* Ghidra symbol: FUN_01d78fa0 */


ulonglong FUN_01d78fa0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined1 local_222 [522];
  
  FUN_00414480(param_2);
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x78),L"SettingsDir");
  uVar3 = (undefined7)((ulonglong)param_1 >> 8);
  if (iVar1 != 0) {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x78),L"CatalogDir");
    if (iVar1 != 0) {
      FUN_0040d200(local_222,0x20a,0);
      iVar1 = thunk_FUN_0418dd92(0x105,local_222);
      uVar2 = CONCAT71(uVar3,iVar1 != 0);
      if (iVar1 != 0) {
        thunk_FUN_03b9e632(local_222,local_222,0x20a);
        FUN_004167d0(param_2,local_222);
      }
      goto LAB_01d7903d;
    }
  }
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x80));
  uVar2 = CONCAT71(uVar3,1);
LAB_01d7903d:
  return uVar2 & 0xffffffff;
}

