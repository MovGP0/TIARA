/* Ghidra address: 017949a0 */
/* Ghidra symbol: FUN_017949a0 */


void FUN_017949a0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  *(int *)PTR_DAT_020033a8 = iVar2 + 1;
  if (4 < *(int *)PTR_DAT_020033a8) {
    *(undefined4 *)PTR_DAT_020033a8 = 8;
  }
  *(undefined4 *)PTR_DAT_02002d48 = *(undefined4 *)PTR_DAT_020033a8;
  FUN_007fa870(*(undefined8 *)(*(longlong *)(param_1 + 0x940) + 0x498),
               *(int *)PTR_DAT_020033a8 * 0x640);
  lVar1 = *(longlong *)(param_1 + 0x940);
  *(short *)(*(longlong *)(lVar1 + 0x498) + 0x10) = *(short *)PTR_DAT_020033a8 * 8;
  FUN_007fa870(*(undefined8 *)(lVar1 + 0x4b0),*(int *)PTR_DAT_020033a8 * 0x640);
  lVar1 = *(longlong *)(param_1 + 0x940);
  *(short *)(*(longlong *)(lVar1 + 0x4b0) + 0x10) = *(short *)PTR_DAT_020033a8 * 8;
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x948),*(undefined4 *)(*(longlong *)(lVar1 + 0x498) + 0x18)
              );
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x948),
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x940) + 0x4b0) + 0x18));
  FUN_0179b790(param_1,0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x958),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x960),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x968),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0x970),0);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xa90),0);
  iVar2 = *(int *)PTR_DAT_020033a8;
  if (iVar2 < 4) {
    if (iVar2 == 3) {
      FUN_007e2d20(*(undefined8 *)(param_1 + 0x968),1);
    }
    else if (iVar2 == 1) {
      FUN_007e2d20(*(undefined8 *)(param_1 + 0x958),1);
    }
    else if (iVar2 == 2) {
      FUN_007e2d20(*(undefined8 *)(param_1 + 0x960),1);
    }
  }
  else if (iVar2 == 4) {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0x970),1);
  }
  else if (iVar2 == 8) {
    FUN_007e2d20(*(undefined8 *)(param_1 + 0xa90),1);
  }
  return;
}

