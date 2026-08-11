/* Ghidra address: 007e31e0 */
/* Ghidra symbol: FUN_007e31e0 */


void FUN_007e31e0(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong *)(param_3 + 200) != 0) {
    FUN_007dc5c0(PTR_PTR_02005a98);
  }
  if (param_1[0x17] == 0) {
    lVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    param_1[0x17] = lVar1;
  }
  iVar2 = param_2 + -1;
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_1[0x17] + 0x10))) {
    lVar1 = FUN_004aeac0(param_1[0x17],iVar2);
    if (*(byte *)(param_3 + 0x87) < *(byte *)(lVar1 + 0x87)) {
      lVar1 = FUN_004aeac0(param_1[0x17],iVar2);
      FUN_007e2e50(param_3,*(undefined1 *)(lVar1 + 0x87));
    }
  }
  FUN_007ddfc0(param_1,param_2,*(undefined1 *)(param_3 + 0x87));
  FUN_004aec30(param_1[0x17],param_2,param_3);
  *(longlong **)(param_3 + 200) = param_1;
  *(longlong **)(param_3 + 0x108) = param_1;
  *(code **)(param_3 + 0x100) = FUN_007e3590;
  if (param_1[0x2b] != 0) {
    FUN_007dde90(param_1);
  }
  iVar2 = FUN_007e2ef0(param_1);
  (**(code **)(*param_1 + 0xa0))(param_1,iVar2 == 1);
  return;
}

