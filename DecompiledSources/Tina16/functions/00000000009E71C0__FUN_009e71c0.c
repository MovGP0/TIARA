/* Ghidra address: 009e71c0 */
/* Ghidra symbol: FUN_009e71c0 */


void FUN_009e71c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_38 = 0;
  FUN_009e76c0(param_1);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  local_1c = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_38,local_1c);
      uVar2 = (**(code **)(*param_2 + 0x30))(param_2,local_1c);
      (**(code **)(*param_1 + 0x78))(param_1,local_38,uVar2);
      local_1c = local_1c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_009e77f0(param_1);
  FUN_00414520(&local_38);
  return;
}

