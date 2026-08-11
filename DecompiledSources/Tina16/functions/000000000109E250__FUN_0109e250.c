/* Ghidra address: 0109e250 */
/* Ghidra symbol: FUN_0109e250 */


void FUN_0109e250(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_0106bd48,1,*(undefined8 *)PTR_DAT_02004030);
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_0106c180(plVar2,local_20);
    if (local_20[0] != 0) {
      FUN_00f7d180(*(undefined8 *)(*(longlong *)(param_1 + 0x1660) + 0x3548),local_20[0]);
      iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x750));
      if (iVar1 == 1) {
        iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x770));
        if (iVar1 == 2) {
          FUN_0109d7c0(param_1,1);
        }
      }
    }
  }
  FUN_00410f20(plVar2);
  FUN_00414480(local_20);
  return;
}

