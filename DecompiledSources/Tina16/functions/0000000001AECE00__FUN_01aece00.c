/* Ghidra address: 01aece00 */
/* Ghidra symbol: FUN_01aece00 */


undefined8 FUN_01aece00(undefined8 param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 != 0) {
    iVar2 = FUN_004d3e30(*(undefined8 *)PTR_DAT_02004030);
    iVar5 = 1;
    if (0 < iVar2) {
      do {
        iVar6 = iVar5 + -1;
        uVar3 = FUN_004d3de0(*(undefined8 *)PTR_DAT_02004030,iVar6);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01ae9728);
        if ((cVar1 != '\0') &&
           (lVar4 = FUN_004d3de0(*(undefined8 *)PTR_DAT_02004030,iVar6),
           *(int *)(lVar4 + 0x6b8) == param_2)) {
          uVar3 = FUN_004d3de0(*(undefined8 *)PTR_DAT_02004030,iVar6);
          *param_3 = uVar3;
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

