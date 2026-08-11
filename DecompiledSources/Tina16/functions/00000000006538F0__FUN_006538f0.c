/* Ghidra address: 006538f0 */
/* Ghidra symbol: FUN_006538f0 */


void FUN_006538f0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_50;
  int local_48;
  char local_44;
  
  cVar1 = (char)param_2;
  (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))(*(longlong **)(param_1 + 0x48));
  if (((*(longlong *)(param_1 + 0x78) != 0) &&
      (((cVar1 == '\0' || (*(char *)(*(longlong *)(param_1 + 0x78) + 0xa9) != '\0')) ||
       (((*(ushort *)(*(longlong *)(param_1 + 0x78) + 0x34) & 0x10) != 0 &&
        ((*(uint *)(*(longlong *)(param_1 + 0x78) + 0xa0) & 0x400) == 0)))))) &&
     (*(char *)(*(longlong *)(param_1 + 0x78) + 0xad) == cVar1)) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x78));
  }
  iVar3 = FUN_00654c00();
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar4 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x70),iVar6);
      if (((*(char *)(lVar4 + 0xad) == cVar1) &&
          (((((cVar1 == '\0' || (*(char *)(lVar4 + 0xa9) != '\0')) ||
             ((*(uint *)(lVar4 + 0xa0) & 0x401) == 0x401)) ||
            (((*(ushort *)(lVar4 + 0x34) & 0x10) != 0 && ((*(uint *)(lVar4 + 0xa0) & 0x400) == 0))))
           && ((cVar2 = FUN_004113d0(lVar4,&PTR_FUN_007ee548), cVar2 == '\0' ||
               ((*(ushort *)(lVar4 + 0x34) & 0x10) == 0)))))) &&
         (lVar4 != *(longlong *)(param_1 + 0x78))) {
        for (iVar7 = 0; iVar7 < *(int *)(*(longlong *)(param_1 + 0x48) + 0x10); iVar7 = iVar7 + 1) {
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar7);
          cVar2 = FUN_006536b0(param_1,lVar4,uVar5,param_2);
          if (cVar2 != '\0') break;
        }
        FUN_004aec30(*(undefined8 *)(param_1 + 0x48),iVar7,lVar4);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_50 = *(undefined8 *)(param_1 + 0x48);
      local_48 = iVar6;
      local_44 = cVar1;
      uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar6);
      FUN_00653870(param_1,uVar5,param_2,&local_50);
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

