/* Ghidra address: 013a6040 */
/* Ghidra symbol: FUN_013a6040 */


void FUN_013a6040(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  ushort *local_50;
  undefined8 local_40;
  int local_34;
  ushort *local_30;
  longlong *local_20;
  
  local_60 = auStack_88;
  local_40 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_30 = (ushort *)FUN_013a5cd0(local_res10,local_res18);
  local_20 = (longlong *)FUN_01b21480(local_res8);
  iVar2 = (**(code **)(*local_20 + 0x28))();
  local_34 = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*local_20 + 0x18))(local_20,&local_40,local_34);
      local_50 = local_30;
      iVar3 = (**(code **)(*local_20 + 0x28))(local_20);
      if (iVar3 <= (int)(uint)*local_50) {
        uVar1 = FUN_0043fc00(local_40);
        *(undefined2 *)(*(longlong *)(local_50 + 4) + (longlong)local_34 * 2) = uVar1;
      }
      local_34 = local_34 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01776660(local_res10,local_30);
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  if (*(longlong *)(local_30 + 4) != 0) {
    FUN_004095f0(*(longlong *)(local_30 + 4));
  }
  FUN_004095f0(local_30);
  FUN_00414480(&local_40);
  FUN_00414480(&local_res8);
  return;
}

