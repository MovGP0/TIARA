/* Ghidra address: 0162ab90 */
/* Ghidra symbol: FUN_0162ab90 */


undefined8 FUN_0162ab90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = FUN_016353c0(param_2);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 <= *(int *)(param_1 + 0x20)) {
    iVar5 = (*(int *)(param_1 + 0x20) - iVar4) + 1;
    do {
      lVar3 = FUN_004aeac0(uVar1,iVar4);
      if (*(char *)(lVar3 + 8) == '4') {
        FUN_004ae7e0(uVar2,lVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar2;
}

