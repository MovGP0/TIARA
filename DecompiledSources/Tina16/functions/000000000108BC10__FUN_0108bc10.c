/* Ghidra address: 0108bc10 */
/* Ghidra symbol: FUN_0108bc10 */


void FUN_0108bc10(longlong param_1)

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
      if (local_20[0] != 0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 3000) + 0xb0))
                          (*(longlong **)(param_1 + 3000),local_20[0]);
        if (iVar1 == -1) {
          (**(code **)(**(longlong **)(param_1 + 3000) + 0x78))
                    (*(longlong **)(param_1 + 3000),local_20[0]);
        }
      }
      FUN_010892f0(param_1);
    }
  }
  FUN_00410f20(plVar2);
  FUN_00414480(local_20);
  return;
}

