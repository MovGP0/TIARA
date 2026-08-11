/* Ghidra address: 00413900 */
/* Ghidra symbol: FUN_00413900 */


void FUN_00413900(int *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  iVar5 = *param_1;
  iVar4 = 1;
  if (0 < iVar5) {
    do {
      piVar1 = param_1 + (longlong)iVar4 * 6 + -4;
      uVar2 = *(ulonglong *)(piVar1 + 4);
      uVar3 = (uint)uVar2 & 0xffff;
      if ((uVar2 & 0xffff) == 0) {
        FUN_004137f0(local_30,*(undefined8 *)(piVar1 + 2),(uint)(uVar2 >> 0x10) & 0xffff);
        FUN_00414bf0(*(undefined8 *)piVar1,local_30[0]);
      }
      else if (uVar3 == 1) {
        FUN_00413870(&local_38,*(undefined8 *)(piVar1 + 2));
        FUN_00414b90(*(undefined8 *)piVar1,local_38);
      }
      else if (uVar3 == 2) {
        FUN_004138e0(&local_40,*(undefined8 *)(piVar1 + 2));
        FUN_00414ad0(*(undefined8 *)piVar1,local_40);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_40);
  FUN_00414520(&local_38);
  FUN_004144d0(local_30);
  return;
}

