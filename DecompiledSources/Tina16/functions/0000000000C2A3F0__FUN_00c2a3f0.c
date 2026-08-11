/* Ghidra address: 00c2a3f0 */
/* Ghidra symbol: FUN_00c2a3f0 */


longlong FUN_00c2a3f0(longlong param_1,int param_2)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_2 < 0) || ((int)(*(ushort *)(param_1 + 0x4f) - 1) < param_2)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02003328);
    FUN_00c1a320(local_10);
  }
  FUN_00c289b0(param_1);
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(ushort *)(param_1 + 0x4d);
  FUN_00414480(&local_10);
  return lVar2 + (int)(param_2 * (uint)uVar1);
}

