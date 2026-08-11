/* Ghidra address: 01816940 */
/* Ghidra symbol: FUN_01816940 */


void FUN_01816940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  for (iVar3 = 0; iVar1 = FUN_004b2060(param_1), iVar3 < iVar1; iVar3 = iVar3 + 1) {
    lVar2 = FUN_018163e0(param_1,iVar3);
    FUN_00416ba0(&local_20,&LAB_01816aa4,param_2);
    iVar1 = FUN_0043e6d0(*(undefined8 *)(lVar2 + 0x20),local_20);
    if (iVar1 == 0) goto LAB_018169a9;
  }
  goto code_r0x01816a6c;
  while (lVar2 = FUN_018163e0(param_1,iVar3), **(short **)(lVar2 + 0x20) != 0x20) {
LAB_018169a9:
    iVar3 = iVar3 + 1;
    iVar1 = FUN_004b2060(param_1);
    if (iVar1 <= iVar3) break;
  }
  iVar1 = FUN_018163f0(param_1,param_3);
  if (iVar1 == -1) {
    iVar1 = FUN_004b2060(param_1);
    if (iVar3 == iVar1) {
      lVar2 = FUN_018163c0(param_1);
      FUN_00414ad0(lVar2 + 0x20,param_3);
      FUN_00461840(lVar2 + 0x28,param_4);
    }
    else {
      lVar2 = FUN_018163d0(param_1,iVar3);
      FUN_00414ad0(lVar2 + 0x20,param_3);
      FUN_00461840(lVar2 + 0x28,param_4);
    }
  }
  else {
    lVar2 = FUN_018163e0(param_1,iVar1);
    FUN_00461840(lVar2 + 0x28,param_4);
  }
code_r0x01816a6c:
  FUN_00414480(&local_20);
  return;
}

