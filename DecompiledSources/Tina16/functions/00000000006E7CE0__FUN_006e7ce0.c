/* Ghidra address: 006e7ce0 */
/* Ghidra symbol: FUN_006e7ce0 */


void FUN_006e7ce0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_006bd2a8);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    uVar2 = FUN_006e7910(param_2);
    FUN_006e7940(param_1,uVar2);
    uVar2 = FUN_006e7a40(param_2);
    FUN_006e7a70(param_1,uVar2);
    uVar2 = FUN_006e7ac0(param_2);
    FUN_006e7af0(param_1,uVar2);
    uVar2 = FUN_006e7b40(param_2);
    FUN_006e7b70(param_1,uVar2);
    uVar2 = FUN_006e7990(param_2);
    FUN_006e79c0(param_1,uVar2);
    iVar3 = 0;
    do {
      uVar2 = FUN_006e7bc0(param_2,iVar3);
      FUN_006e7c00(param_1,iVar3,uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x20);
  }
  return;
}

