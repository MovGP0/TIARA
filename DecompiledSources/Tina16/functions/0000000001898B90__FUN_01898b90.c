/* Ghidra address: 01898b90 */
/* Ghidra symbol: FUN_01898b90 */


void FUN_01898b90(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_006df710(*(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x550));
  FUN_006e2590(*(undefined8 *)(param_2 + 0x70),0);
  *(undefined1 *)(*(longlong *)(param_2 + 0x70) + 0x6e0) = 0;
  FUN_00414ad0(*(longlong *)(param_2 + 0x70) + 0x700,*(undefined8 *)(param_2 + 0x78));
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x70) + 0x728);
  if (iVar1 < 0) {
    FUN_006e23c0(*(undefined8 *)(param_2 + 0x70));
  }
  else {
    FUN_018987b0(param_2,iVar1);
  }
  (**(code **)(**(longlong **)(param_2 + 0x70) + 0x2a8))
            (*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x30));
  FUN_00410f20(*(undefined8 *)(param_2 + 0x30));
  return;
}

