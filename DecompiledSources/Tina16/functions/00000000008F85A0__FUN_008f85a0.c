/* Ghidra address: 008f85a0 */
/* Ghidra symbol: FUN_008f85a0 */


void FUN_008f85a0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_38 = 0;
  (**(code **)(*param_1 + 0x88))(param_1);
  iVar1 = (**(code **)(*param_2 + 0x38))();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x28))(param_2,&local_38,local_1c);
      uVar2 = (**(code **)(*param_2 + 0x40))(param_2,local_1c);
      (**(code **)(*param_1 + 0x70))(param_1,local_38,uVar2);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(*param_1 + 0xa0))(param_1);
  FUN_00414520(&local_38);
  return;
}

