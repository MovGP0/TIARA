/* Ghidra address: 01816810 */
/* Ghidra symbol: FUN_01816810 */


void FUN_01816810(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 local_20;
  
  local_20 = 0;
  iVar4 = 0;
  while( true ) {
    iVar1 = FUN_004b2060(param_1);
    if (iVar1 <= iVar4) goto code_r0x018168c7;
    lVar2 = FUN_018163e0(param_1,iVar4);
    FUN_00416ba0(&local_20,&LAB_01816904,param_2);
    iVar1 = FUN_0043e6d0(*(undefined8 *)(lVar2 + 0x20),local_20);
    if (iVar1 == 0) break;
    iVar4 = iVar4 + 1;
  }
  uVar3 = FUN_018163e0(param_1,iVar4);
  FUN_00410f20(uVar3);
  while ((iVar1 = FUN_004b2060(param_1), iVar4 < iVar1 &&
         (lVar2 = FUN_018163e0(param_1,iVar4), **(short **)(lVar2 + 0x20) != 0x20))) {
    uVar3 = FUN_018163e0(param_1,iVar4);
    FUN_00410f20(uVar3);
  }
code_r0x018168c7:
  FUN_00414480(&local_20);
  return;
}

