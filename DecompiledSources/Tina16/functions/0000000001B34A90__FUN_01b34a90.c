/* Ghidra address: 01b34a90 */
/* Ghidra symbol: FUN_01b34a90 */


void FUN_01b34a90(longlong param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_20);
  iVar1 = FUN_0043fc00(local_20);
  *(undefined1 *)(param_1 + 0x7c0) = 1;
  if (iVar1 != *(int *)(param_1 + 0x764)) {
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001d60 + 0x6b0) + 0x298))
              (*(longlong **)(*(longlong *)PTR_DAT_02001d60 + 0x6b0));
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6b8),0);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6c0),0);
    FUN_00414480(&DAT_02110d08);
    FUN_00414480(&DAT_02110d10);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6c8),0);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6d0),0);
  }
  *(int *)(param_1 + 0x764) = iVar1;
  if (*(int *)(param_1 + 0x760) < iVar1) {
    *(int *)(param_1 + 0x764) = *(int *)(param_1 + 0x760);
  }
  FUN_0043f750(&local_28,*(undefined4 *)(param_1 + 0x764));
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_28);
  FUN_00414480();
  iVar1 = *(int *)(param_1 + 0x764);
  if (-1 < iVar1 + -1) {
    ppuVar2 = &PTR_DAT_01fd66d8;
    do {
      FUN_00416cd0(&DAT_01fd66d0,3,DAT_01fd66d0,*ppuVar2,&DAT_01b34cb8);
      ppuVar2 = ppuVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00416ba0(&local_30,L"( ) / \' \" + * ",DAT_01fd66d0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_30);
  FUN_00414560(&local_30,2);
  FUN_00414480(&local_20);
  return;
}

