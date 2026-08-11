/* Ghidra address: 004b2df0 */
/* Ghidra symbol: FUN_004b2df0 */


void FUN_004b2df0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_004b3260(param_1);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_38,local_1c);
      uVar2 = (**(code **)(*param_2 + 0x30))(param_2,local_1c);
      (**(code **)(*param_1 + 0x80))(param_1,local_38,uVar2);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_004b3390(param_1);
  FUN_00414480(&local_38);
  return;
}

