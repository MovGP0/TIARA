/* Ghidra address: 0064b670 */
/* Ghidra symbol: FUN_0064b670 */


undefined1 FUN_0064b670(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_005b4b00(param_1);
  if (cVar1 != '\0') {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x20),&local_10);
    iVar3 = FUN_00416db0(local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xd0));
    if (iVar3 == 0) {
      uVar2 = 1;
      goto LAB_0064b6c5;
    }
  }
  uVar2 = 0;
LAB_0064b6c5:
  FUN_00414480(&local_10);
  return uVar2;
}

