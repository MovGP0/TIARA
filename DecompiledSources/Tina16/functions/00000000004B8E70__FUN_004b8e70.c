/* Ghidra address: 004b8e70 */
/* Ghidra symbol: FUN_004b8e70 */


void FUN_004b8e70(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 *local_28;
  longlong local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = (undefined4 *)0x0;
  uVar3 = FUN_0045ae90();
  FUN_0043e130(&local_30,param_2);
  FUN_00459ca0(uVar3,local_20,local_30);
  FUN_00419260(&local_28,&DAT_00406578,1,0xff);
  lVar4 = 0;
  if (local_20[0] != 0) {
    lVar4 = *(longlong *)(local_20[0] + -8);
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  if (iVar2 < lVar4) {
    uVar3 = FUN_0045adf0();
    FUN_0043e130(&local_38,param_2);
    FUN_00459ca0(uVar3,local_20,local_38);
    uVar5 = 0;
    if (local_20[0] != 0) {
      uVar5 = *(ulonglong *)(local_20[0] + -8);
    }
    iVar2 = (int)uVar5;
    if (0x3f < (int)((longlong)((ulonglong)(uint)(iVar2 >> 0x1f) << 0x20 | uVar5 & 0xffffffff) / 2))
    {
      iVar2 = 0x7e;
    }
    FUN_00419260(local_20,&DAT_00406578,1,(longlong)(iVar2 + 2));
    *(undefined2 *)(local_20[0] + iVar2) = 0;
    FUN_004b89e0(param_1,&DAT_01dc76a8,0x20);
    iVar1 = FUN_004b6da0(param_1);
    *param_3 = -(iVar1 + 4);
    *local_28 = 0;
    local_28[1] = iVar2 + 0x1e;
    local_28[2] = 0xaffff;
    iVar2 = 0;
    if (local_20[0] != 0) {
      iVar2 = (int)*(undefined8 *)(local_20[0] + -8);
    }
    uVar3 = 0;
    if (local_20[0] != 0) {
      uVar3 = *(undefined8 *)(local_20[0] + -8);
    }
    FUN_00409a70(local_20[0],local_28 + 3,uVar3);
    *(undefined4 *)((longlong)local_28 + (longlong)(iVar2 + 0xc)) = 0;
    *(undefined2 *)((longlong)local_28 + (longlong)(iVar2 + 0x10)) = 0;
    *(undefined2 *)((longlong)local_28 + (longlong)(iVar2 + 0x12)) = 0x409;
    *(undefined4 *)((longlong)local_28 + (longlong)(iVar2 + 0x14)) = 0;
    *(undefined4 *)((longlong)local_28 + (longlong)(iVar2 + 0x18)) = 0;
    FUN_004b8a80(param_1,local_28,(longlong)(iVar2 + 0x1c));
  }
  else {
    *(undefined1 *)local_28 = 0xff;
    *(undefined2 *)((longlong)local_28 + 1) = 10;
    iVar2 = 0;
    if (local_20[0] != 0) {
      iVar2 = (int)*(undefined8 *)(local_20[0] + -8);
    }
    if (0x3f < iVar2) {
      iVar2 = 0x40;
    }
    FUN_00419260(local_20,&DAT_00406578,1,(longlong)(iVar2 + 1));
    *(undefined1 *)(local_20[0] + iVar2) = 0;
    uVar3 = 0;
    if (local_20[0] != 0) {
      uVar3 = *(undefined8 *)(local_20[0] + -8);
    }
    FUN_00409a70(local_20[0],(longlong)local_28 + 3,uVar3);
    iVar2 = 0;
    if (local_20[0] != 0) {
      iVar2 = (int)*(undefined8 *)(local_20[0] + -8);
    }
    *(undefined2 *)((longlong)local_28 + (longlong)(iVar2 + 3)) = 0x1030;
    *(undefined4 *)((longlong)local_28 + (longlong)(iVar2 + 5)) = 0;
    FUN_004b8a80(param_1,local_28,(longlong)(iVar2 + 9));
    iVar2 = FUN_004b6da0(param_1);
    *param_3 = iVar2;
  }
  FUN_00414560(&local_38,2);
  FUN_00417840(&local_28,&DAT_00406578,2);
  return;
}

