/* Ghidra address: 0108c370 */
/* Ghidra symbol: FUN_0108c370 */


void FUN_0108c370(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  uVar2 = *(undefined8 *)(param_2 + 200);
  iVar1 = *(int *)(param_1 + 0xaa0);
  if (*(char *)(param_2 + 0x80) == '\0') {
    iVar3 = FUN_007e2ef0();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar4 = FUN_007e2f10(uVar2,iVar5);
        FUN_007e2d20(lVar4,*(longlong *)(lVar4 + 0x18) == *(longlong *)(param_2 + 0x18));
        if (*(char *)(lVar4 + 0x80) != '\0') {
          *(undefined4 *)(param_1 + 0xaa0) = *(undefined4 *)(lVar4 + 0x18);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (iVar1 != *(int *)(param_1 + 0xaa0)) {
    FUN_00416ba0(local_40,*(undefined8 *)(param_1 + 0xb40),&LAB_0108c494);
    FUN_01b22b20(local_40[0]);
  }
  FUN_00414480(local_40);
  return;
}

