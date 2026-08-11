/* Ghidra address: 00acefa0 */
/* Ghidra symbol: FUN_00acefa0 */


void FUN_00acefa0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x148);
  FUN_005ff880(param_2,*(undefined8 *)(lVar1 + 0xb8));
  iVar2 = FUN_005fdfd0(param_2,&LAB_00acf0b4);
  if (*(int *)(param_1 + 0x108) < iVar2) {
    iVar2 = FUN_005fdfd0(param_2,&LAB_00acf0b4);
    FUN_0064cc50(lVar1,iVar2 + 8);
  }
  else {
    FUN_0064cc50(lVar1,*(undefined4 *)(param_1 + 0x108));
  }
  if ((*(int *)(param_1 + 0x10c) < 10) || (*(char *)(param_1 + 0xbc) != '\0')) {
    FUN_0064dd90(lVar1,local_20);
    iVar2 = FUN_005fdff0(param_2,local_20[0]);
    FUN_0064cbf0(lVar1,iVar2 + 0x14);
  }
  else {
    FUN_0064cbf0(lVar1,*(int *)(param_1 + 0x10c));
  }
  FUN_00414480(local_20);
  return;
}

