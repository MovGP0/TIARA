/* Ghidra address: 010a4d90 */
/* Ghidra symbol: FUN_010a4d90 */


void FUN_010a4d90(longlong param_1)

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
      FUN_010a4c20(param_1,local_20[0]);
      iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x6f0));
      if (iVar1 == 1) {
        iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x710));
        if (iVar1 == 2) {
          FUN_010a49e0(param_1,1);
        }
      }
    }
  }
  FUN_00410f20(plVar2);
  FUN_010a3d40(param_1);
  FUN_00414480(local_20);
  return;
}

