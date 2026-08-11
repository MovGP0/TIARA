/* Ghidra address: 00a3e950 */
/* Ghidra symbol: FUN_00a3e950 */


void FUN_00a3e950(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  ushort local_1c;
  ushort local_1a [5];
  
  local_30 = auStack_78;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8));
  if (lVar3 == 0) {
    FUN_0041ddd0(&local_38,&PTR_PTR_00a3d788);
    FUN_00a3d980(local_38);
  }
  FUN_00a3ec80(param_1);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8));
  FUN_00a3dbb0(uVar4,param_1 + 0x28,param_1 + 0x2c,*(undefined1 *)(param_1 + 0x10));
  uVar4 = FUN_004095c0((longlong)*(int *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  lVar3 = FUN_0042a250(2,*(undefined4 *)(param_1 + 0x2c));
  *(longlong *)(param_1 + 0x20) = lVar3;
  if (lVar3 == 0) {
    FUN_0041ddd0(&local_40,&PTR_PTR_00a3d748);
    uVar4 = FUN_0044d490(&PTR_FUN_00434e60,1,local_40);
    FUN_004134c0(uVar4);
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0xe8))(*(longlong **)(param_1 + 8));
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8));
  local_58 = *(undefined1 *)(param_1 + 0x10);
  cVar1 = FUN_00a3dc10(uVar4,uVar5,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  if (cVar1 == '\0') {
    FUN_0041ddd0(&local_48,&PTR_PTR_00a3d758);
    FUN_00a3d980(local_48);
  }
  if (*(byte *)(param_1 + 0x10) < 4) {
    lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8));
    if (lVar3 != 0) {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8));
      iVar2 = thunk_FUN_03d2c01a(uVar4,2,local_1a);
      if ((iVar2 != 0) && (local_1a[0] != 0)) {
        local_1c = *(ushort *)(*(longlong *)(param_1 + 0x18) + 0x20);
        if (local_1c == 0) {
          local_1c = (ushort)(1 << (*(byte *)(*(longlong *)(param_1 + 0x18) + 0xe) & 0x1f));
        }
        if ((local_1c != 0) && (local_1c < local_1a[0])) {
          local_1a[0] = local_1c;
        }
        uVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8));
        thunk_FUN_041a3f2d(uVar4,0,local_1a[0],*(longlong *)(param_1 + 0x18) + 0x28);
        FUN_00a3e910(auStack_78,*(longlong *)(param_1 + 0x18) + 0x28,local_1a[0]);
        if (local_1a[0] < local_1c) {
          FUN_0040d200((longlong)
                       (int)((int)*(undefined8 *)(param_1 + 0x18) + 0x28 + (uint)local_1a[0] * 4),
                       (longlong)(int)((uint)local_1c - (uint)local_1a[0]),0);
        }
      }
    }
  }
  FUN_00414560(&local_48,3);
  return;
}

