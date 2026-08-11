/* Ghidra address: 01797e80 */
/* Ghidra symbol: FUN_01797e80 */


undefined8 FUN_01797e80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  iVar3 = 0;
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0xd10) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar4 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xd10),iVar6);
      cVar1 = FUN_004113d0(uVar4,&PTR_FUN_017a79c0);
      if (cVar1 != '\0') {
        lVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xd10),iVar6);
        FUN_004169a0(local_30,lVar5 + 0x40);
        iVar2 = FUN_0043fc50(local_30[0],0);
        if (iVar3 < iVar2) {
          lVar5 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xd10),iVar6);
          FUN_004169a0(&local_38,lVar5 + 0x40);
          iVar3 = FUN_0043fc00(local_38);
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_0043f750(param_2,iVar3 + 1);
  FUN_00414560(&local_38,2);
  return param_2;
}

