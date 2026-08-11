/* Ghidra address: 013d2e70 */
/* Ghidra symbol: FUN_013d2e70 */


void FUN_013d2e70(void)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  
  *(undefined4 *)PTR_DAT_02003668 = 0;
  *(undefined4 *)PTR_DAT_02001bf8 = 0;
  bVar1 = false;
  iVar4 = FUN_004d3e30(*(undefined8 *)PTR_DAT_02004030);
  iVar6 = 1;
  bVar2 = false;
  if (0 < iVar4) {
    do {
      bVar1 = bVar2;
      uVar5 = FUN_004d3de0(*(undefined8 *)PTR_DAT_02004030,iVar6 + -1);
      cVar3 = FUN_004113d0(uVar5,&PTR_FUN_01a69da8);
      if (cVar3 != '\0') {
        bVar1 = true;
      }
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + -1;
      bVar2 = bVar1;
    } while (iVar4 != 0);
  }
  if (!bVar1) {
    uVar5 = FUN_01aebb40(&PTR_FUN_01a69da8,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_02001e00 = uVar5;
    *(int *)PTR_DAT_02003668 = *(int *)PTR_DAT_02003668 + 1;
  }
  if (*(char *)(*(longlong *)PTR_DAT_02001e00 + 0xa9) == '\0') {
    FUN_007fdf50(*(undefined8 *)PTR_DAT_02001e00,1);
    *(int *)PTR_DAT_02003668 = *(int *)PTR_DAT_02003668 + 1;
  }
  *(int *)PTR_DAT_02001bf8 = *(int *)PTR_DAT_02001bf8 + 1;
  return;
}

