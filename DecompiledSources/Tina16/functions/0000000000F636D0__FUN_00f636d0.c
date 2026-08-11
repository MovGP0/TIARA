/* Ghidra address: 00f636d0 */
/* Ghidra symbol: FUN_00f636d0 */


void FUN_00f636d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  FUN_00f652e0(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x14));
  FUN_00f65300(param_1,*(undefined4 *)(PTR_DAT_02002068 + 0x2c));
  FUN_00f65320(param_1,0);
  FUN_00f652c0(param_1,4);
  iVar1 = *(int *)(param_1 + 0x98);
  iVar2 = *(int *)(param_1 + 0x9c);
  iVar3 = *(int *)(PTR_DAT_02002068 + 0x40);
  local_48 = iVar3;
  for (local_40 = iVar3; local_40 < iVar1; local_40 = local_40 + iVar3) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 200))(*(longlong **)(param_1 + 0x10),local_40,0);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xc0))
              (*(longlong **)(param_1 + 0x10),local_48,iVar2 + -1);
    local_48 = local_48 + iVar3;
  }
  local_44 = iVar3;
  for (local_3c = iVar3; local_3c < iVar2; local_3c = local_3c + iVar3) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 200))(*(longlong **)(param_1 + 0x10),0,local_3c);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0xc0))
              (*(longlong **)(param_1 + 0x10),iVar1 + -1,local_44);
    local_44 = local_44 + iVar3;
  }
  return;
}

