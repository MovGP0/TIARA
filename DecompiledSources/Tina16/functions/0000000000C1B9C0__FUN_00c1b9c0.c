/* Ghidra address: 00c1b9c0 */
/* Ghidra symbol: FUN_00c1b9c0 */


void FUN_00c1b9c0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 auStack_68 [40];
  undefined4 *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  int local_10;
  ushort local_a;
  
  local_30 = auStack_68;
  local_38 = 0;
  FUN_00c1bc40(param_1);
  if (*(char *)(param_1 + 0x10) == '\x03') {
    *(undefined4 *)(param_1 + 0x28) = 0x428;
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0x28;
  }
  local_40 = (undefined4 *)FUN_004095c0((longlong)*(int *)(param_1 + 0x28));
  *(undefined4 **)(param_1 + 0x18) = local_40;
  *local_40 = 0x28;
  local_40[1] = *(undefined4 *)(param_1 + 0x3c);
  local_40[2] = *(undefined4 *)(param_1 + 0x38);
  *(undefined2 *)(local_40 + 3) = 1;
  local_40[5] = 0;
  local_40[4] = 0;
  if (*(char *)(param_1 + 0x10) != '\x03') {
    *(undefined2 *)((longlong)local_40 + 0xe) = 0x18;
    local_40[8] = 0;
    local_40[9] = 0;
    goto LAB_00c1bb43;
  }
  *(undefined2 *)((longlong)local_40 + 0xe) = 8;
  if (*(longlong *)(param_1 + 0x30) == 0) {
LAB_00c1bad8:
    local_a = 0;
  }
  else {
    iVar1 = thunk_FUN_03d2c01a(*(longlong *)(param_1 + 0x30),2,&local_a);
    if ((iVar1 == 0) || (local_a == 0)) goto LAB_00c1bad8;
    thunk_FUN_041a3f2d(*(undefined8 *)(param_1 + 0x30),0,local_a,
                       *(longlong *)(param_1 + 0x18) + 0x28);
    FUN_00c1b980(auStack_68,*(longlong *)(param_1 + 0x18) + 0x28,local_a);
  }
  if (local_a < 0x100) {
    FUN_0040d200(*(longlong *)(param_1 + 0x18) + 0x28 + (ulonglong)((uint)local_a * 4),
                 (longlong)(int)(0x100 - (uint)local_a),0);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar2 + 0x20) = 0x100;
  *(uint *)(lVar2 + 0x24) = (uint)local_a;
LAB_00c1bb43:
  local_10 = *(int *)(param_1 + 0x3c);
  local_14 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x18) + 0xe);
  local_18 = 0x1f;
  local_1c = (local_10 * local_14 + 0x1f & 0xffffffe0) >> 3;
  uVar4 = (int)*(uint *)(param_1 + 0x38) >> 0x1f;
  iVar1 = local_1c * ((*(uint *)(param_1 + 0x38) ^ uVar4) - uVar4);
  *(int *)(param_1 + 0x2c) = iVar1;
  lVar2 = FUN_0042a250(2,iVar1);
  *(longlong *)(param_1 + 0x20) = lVar2;
  if (lVar2 == 0) {
    FUN_0041ddd0(&local_38,PTR_PTR_02001c18);
    uVar3 = FUN_0044d490(&PTR_FUN_00434e60,1,local_38);
    FUN_004134c0(uVar3);
  }
  FUN_00414480(&local_38);
  return;
}

