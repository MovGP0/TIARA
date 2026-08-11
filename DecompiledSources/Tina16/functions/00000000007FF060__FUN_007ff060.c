/* Ghidra address: 007ff060 */
/* Ghidra symbol: FUN_007ff060 */


void FUN_007ff060(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint local_2c [3];
  
  FUN_007fb830(param_1);
  cVar1 = FUN_0065be20(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_0065b870(param_1);
    local_2c[0] = thunk_FUN_04118143(uVar3,0xffffffec);
    local_2c[0] = local_2c[0] & 0xffff8fff;
    FUN_00654db0(param_1,local_2c);
    uVar3 = FUN_0065b870(param_1);
    thunk_FUN_03c9d277(uVar3,0xffffffec,local_2c[0]);
  }
  iVar2 = FUN_004d3e30();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_004d3de0(param_1,iVar4);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_007da970);
      if (cVar1 != '\0') {
        uVar3 = FUN_004d3de0(param_1,iVar4);
        FUN_007e7070(uVar3);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

