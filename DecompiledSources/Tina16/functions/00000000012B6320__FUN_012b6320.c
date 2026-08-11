/* Ghidra address: 012b6320 */
/* Ghidra symbol: FUN_012b6320 */


void FUN_012b6320(longlong param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (param_2 != '\0') {
    iVar1 = FUN_004170c0(&DAT_012b6468,*(undefined8 *)(param_1 + 0x20),1);
    FUN_00416dc0(&local_10,*(undefined8 *)(param_1 + 0x20),1,iVar1 + -1);
    FUN_0084e3e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x6d0),0,
                 *(undefined4 *)(param_1 + 0x2c),local_10);
    iVar1 = FUN_004170c0(&DAT_012b6468,*(undefined8 *)(param_1 + 0x20),1);
    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x20) != 0) {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x20) + -4);
    }
    FUN_00416dc0(&local_18,*(undefined8 *)(param_1 + 0x20),iVar1 + 1,uVar2);
    FUN_0084e3e0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x6d0),1,
                 *(undefined4 *)(param_1 + 0x2c),local_18);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  FUN_00414560(&local_18,2);
  return;
}

