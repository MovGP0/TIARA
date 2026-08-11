/* Ghidra address: 01be8ce0 */
/* Ghidra symbol: FUN_01be8ce0 */


undefined8 FUN_01be8ce0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_005b4540();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_005b4350(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x668),iVar4);
      if (*(longlong *)(lVar2 + 0x138) == param_2) {
        uVar3 = FUN_005b4350(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x668),iVar4);
        uVar3 = FUN_004113f0(uVar3,&PTR_FUN_01be0ce8);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

