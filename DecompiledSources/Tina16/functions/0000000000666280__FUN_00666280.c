/* Ghidra address: 00666280 */
/* Ghidra symbol: FUN_00666280 */


void FUN_00666280(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_00665fe0(param_1);
  local_2c = (int)((ulonglong)uVar2 >> 0x20);
  FUN_0064cb90(param_1,local_2c);
  local_38 = (int)uVar1;
  local_30 = (int)uVar2;
  FUN_0064cb30(param_1,(local_38 + (local_30 - local_38) / 2) - *(int *)(param_1 + 0x98) / 2);
  if (*(char *)(*(longlong *)(param_1 + 0x498) + 0x94) == '\x01') {
    FUN_0064cb30(param_1,*(int *)(param_1 + 0x90) + 10);
  }
  iVar4 = FUN_00807f70(*(undefined8 *)PTR_DAT_02005950);
  bVar3 = iVar4 / 2 < *(int *)(param_1 + 0x94);
  *(bool *)(param_1 + 0x4a0) = bVar3;
  if (bVar3) {
    local_34 = (int)((ulonglong)uVar1 >> 0x20);
    FUN_0064cb90(param_1,(*(int *)(param_1 + 0x94) - *(int *)(param_1 + 0x9c)) -
                         (local_2c - local_34));
  }
  return;
}

