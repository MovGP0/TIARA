/* Ghidra address: 010a5240 */
/* Ghidra symbol: FUN_010a5240 */


void FUN_010a5240(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong local_28 [3];
  
  local_28[1] = 0;
  local_28[0] = 0;
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_0109fd38,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_010a0460(plVar2,L"Add Voltage/Current");
  FUN_010a0560(plVar2,1,L"Voltage/Current:");
  FUN_010a04c0(plVar2,1,L"Hint: V(p,n)");
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_010a06c0(plVar2,local_28);
    if (local_28[0] != 0) {
      FUN_010a5040(param_1,local_28[0]);
      iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x6f0));
      if (iVar1 == 1) {
        iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x710));
        if (iVar1 == 3) {
          FUN_010a4ab0(param_1);
        }
      }
    }
  }
  FUN_00410f20(plVar2);
  FUN_010a3d40(param_1);
  FUN_00414560(local_28,2);
  return;
}

