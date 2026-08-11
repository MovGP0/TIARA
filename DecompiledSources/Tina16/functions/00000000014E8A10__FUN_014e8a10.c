/* Ghidra address: 014e8a10 */
/* Ghidra symbol: FUN_014e8a10 */


void FUN_014e8a10(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res18 [2];
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00416cd0(local_30,3,L"----- component ",local_res18[0],L" -----");
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))
                    (*(longlong **)(param_1 + 0x38),local_30[0]);
  if (iVar1 < 0) {
    FUN_00416ba0(local_40,local_30[0],L" not found in the component file");
    uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_40[0]);
    FUN_004134c0(uVar4);
  }
  (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))(*(longlong **)(param_1 + 0x38));
  iVar1 = iVar1 + 1;
  if (iVar1 <= iVar2 + -1) {
    iVar2 = ((iVar2 + -1) - iVar1) + 1;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))
                (*(longlong **)(param_1 + 0x38),local_30,iVar1);
      iVar3 = FUN_004170c0(L"----- component ",local_30[0],1);
      if (0 < iVar3) break;
      (**(code **)(*param_2 + 0x78))(param_2,local_30[0]);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return;
}

