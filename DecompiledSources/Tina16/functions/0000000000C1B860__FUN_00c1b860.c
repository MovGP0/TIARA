/* Ghidra address: 00c1b860 */
/* Ghidra symbol: FUN_00c1b860 */


longlong FUN_00c1b860(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_34;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_00c1bc90(param_1);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    FUN_0041ddd0(local_20,PTR_PTR_02004690);
    FUN_00c1a320(local_20[0]);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if ((param_2 < 0) || (*(int *)(param_1 + 0x38) <= param_2)) {
    FUN_0041ddd0(&local_28,PTR_PTR_02004930);
    uVar4 = FUN_0044d490(&PTR_FUN_005f23c8,1,local_28);
    FUN_004134c0(uVar4);
  }
  thunk_FUN_03a15344();
  local_34 = param_2;
  if (0 < *(int *)(lVar3 + 8)) {
    local_34 = (*(int *)(lVar3 + 8) - param_2) + -1;
  }
  iVar2 = *(int *)(lVar3 + 4);
  uVar1 = *(ushort *)(lVar3 + 0xe);
  lVar3 = *(longlong *)(param_1 + 0x20);
  FUN_00414560(&local_28,2);
  return lVar3 + (ulonglong)(local_34 * ((iVar2 * (uint)uVar1 + 0x1f & 0xffffffe0) >> 3));
}

