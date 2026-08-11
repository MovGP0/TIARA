/* Ghidra address: 007fd350 */
/* Ghidra symbol: FUN_007fd350 */


undefined1 FUN_007fd350(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if ((*(char *)(param_1 + 0x524) != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
      FUN_00410ae0(**(undefined8 **)(param_1 + 8),&local_18);
      FUN_0043e1a0(&local_10,local_18);
      iVar3 = FUN_00416db0(local_10,L"teditwindow");
      if (iVar3 == 0) goto LAB_007fd3e9;
    }
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (((lVar1 == 0) || ((*(ushort *)(lVar1 + 0x34) & 0x10) == 0)) ||
       ((*(ushort *)(lVar1 + 0x34) & 0x100) == 0)) {
      uVar2 = 1;
      goto LAB_007fd3ef;
    }
  }
LAB_007fd3e9:
  uVar2 = 0;
LAB_007fd3ef:
  FUN_00414560(&local_18,2);
  return uVar2;
}

