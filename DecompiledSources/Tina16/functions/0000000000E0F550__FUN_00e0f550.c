/* Ghidra address: 00e0f550 */
/* Ghidra symbol: FUN_00e0f550 */


undefined4 FUN_00e0f550(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  *param_4 = 0xffffffff;
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar3);
      if ((lVar2 != 0) && (uVar1 = FUN_00e10880(lVar2,param_3,param_2,param_4), (char)uVar1 != '\0')
         ) {
        return uVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return uVar1;
}

