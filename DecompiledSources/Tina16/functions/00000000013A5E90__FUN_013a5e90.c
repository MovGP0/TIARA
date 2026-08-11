/* Ghidra address: 013a5e90 */
/* Ghidra symbol: FUN_013a5e90 */


void FUN_013a5e90(longlong *param_1,ushort *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  ushort *local_40;
  undefined8 local_30;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_30 = 0;
  FUN_00414480(&local_30);
  local_20 = (longlong *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  local_24 = 2;
  if (1 < iVar2 + -1) {
    iVar2 = iVar2 + -2;
    do {
      (**(code **)(*param_1 + 0x18))(param_1,&local_58,local_24);
      FUN_00416ad0(&local_30,local_58);
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_20 = (longlong *)FUN_01b21480(local_30);
  iVar2 = (**(code **)(*local_20 + 0x28))();
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_30,local_24);
      local_40 = param_2;
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1);
      if (iVar3 <= (int)(uint)*local_40) {
        uVar1 = FUN_0043fc00(local_30);
        *(undefined2 *)(*(longlong *)(local_40 + 4) + (longlong)local_24 * 2) = uVar1;
      }
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(&local_58);
  FUN_00414480(&local_30);
  return;
}

