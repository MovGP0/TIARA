/* Ghidra address: 00c2a250 */
/* Ghidra symbol: FUN_00c2a250 */


undefined1 FUN_00c2a250(longlong param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_2 < 0) || ((int)(*(ushort *)(param_1 + 0x4d) - 1) < param_2)) {
    FUN_0041ddd0(&local_10,PTR_PTR_02003328);
    FUN_00c1a320(local_10);
  }
  lVar2 = FUN_00c2a3f0(param_1,param_3);
  uVar1 = *(undefined1 *)(lVar2 + param_2);
  FUN_00414480(&local_10);
  return uVar1;
}

