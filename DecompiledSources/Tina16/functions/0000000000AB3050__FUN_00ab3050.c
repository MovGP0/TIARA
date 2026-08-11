/* Ghidra address: 00ab3050 */
/* Ghidra symbol: FUN_00ab3050 */


undefined8 FUN_00ab3050(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x168) + 0x10) + -1;
  if (-1 < iVar6) {
    do {
      lVar2 = FUN_00ac4a60(*(undefined8 *)(param_1 + 0x168),iVar6);
      iVar5 = *(int *)(lVar2 + 0x10) + -1;
      if (-1 < iVar5) {
        do {
          uVar3 = FUN_004aeac0(lVar2,iVar5);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00a8c408);
          if (cVar1 != '\0') {
            lVar4 = FUN_004aeac0(lVar2,iVar5);
            uVar3 = FUN_00a9bee0(*(undefined8 *)(lVar4 + 0x80),param_2,param_3,param_4);
            if (-1 < (int)uVar3) {
              return uVar3;
            }
          }
          iVar5 = iVar5 + -1;
        } while (iVar5 != -1);
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != -1);
  }
  return 0xffffffff;
}

