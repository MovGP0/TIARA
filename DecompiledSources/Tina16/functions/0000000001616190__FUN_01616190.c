/* Ghidra address: 01616190 */
/* Ghidra symbol: FUN_01616190 */


longlong FUN_01616190(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x578) + 0xb0))
                    (*(longlong **)(param_1 + 0x578),local_res10[0]);
  lVar2 = FUN_00410e60(&DAT_01617398,1);
  if (local_res10[0] == 0) {
    uVar3 = FUN_01615dd0(0,0xffffffff);
    *(undefined8 *)(lVar2 + 8) = uVar3;
  }
  else if (iVar1 < 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x598) + 0xb0))
                      (*(longlong **)(param_1 + 0x598),local_res10[0]);
    if (iVar1 < 0) {
      FUN_01613110(L"GetPinData");
    }
    else {
      uVar3 = FUN_01615dd0(1,iVar1);
      *(undefined8 *)(lVar2 + 8) = uVar3;
    }
  }
  else {
    uVar3 = FUN_01615dd0(0,iVar1);
    *(undefined8 *)(lVar2 + 8) = uVar3;
  }
  FUN_00414480(local_res10);
  return lVar2;
}

