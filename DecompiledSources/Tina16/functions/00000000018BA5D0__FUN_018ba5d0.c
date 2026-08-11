/* Ghidra address: 018ba5d0 */
/* Ghidra symbol: FUN_018ba5d0 */


undefined8 FUN_018ba5d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  FUN_018b8410(param_1);
  iVar2 = FUN_01803a10();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_018b8410(param_1);
      lVar4 = FUN_018039f0(uVar3,iVar5);
      lVar4 = FUN_018bc4b0(param_1,*(undefined8 *)(lVar4 + 0x20));
      if ((lVar4 != 0) &&
         (((*(longlong *)(lVar4 + 0x110) == param_2 ||
           ((cVar1 = FUN_004113d0(param_2,&PTR_FUN_01930a20), cVar1 != '\0' &&
            (cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01930a20), cVar1 != '\0')))) ||
          ((cVar1 = FUN_004113d0(param_2,&PTR_FUN_01931418), cVar1 != '\0' &&
           (cVar1 = FUN_004113d0(lVar4,&PTR_FUN_01931418), cVar1 != '\0')))))) {
        return 1;
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

