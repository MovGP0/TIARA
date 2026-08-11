/* Ghidra address: 01544650 */
/* Ghidra symbol: FUN_01544650 */


longlong * FUN_01544650(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c [3];
  
  local_48 = 0;
  local_50 = 0;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18);
  plVar2 = (longlong *)FUN_01d34560(&PTR_FUN_01d33528,1,5,5);
  cVar1 = FUN_01540000(lVar3,*(undefined4 *)(param_2 + 8),local_3c);
  if (cVar1 == '\0') {
    FUN_016fd940(L"Internal Error: TBuildBlock.get_connected_comps");
  }
  lVar3 = FUN_01d347d0(*(undefined8 *)(lVar3 + 8),local_3c[0]);
  iVar7 = *(int *)(*(longlong *)(lVar3 + 0x10) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_01d347d0(*(undefined8 *)(lVar3 + 0x10),iVar6);
      (**(code **)(**(longlong **)(lVar4 + 0x18) + 0x288))(*(longlong **)(lVar4 + 0x18),&local_48);
      cVar1 = FUN_01542650(*(undefined8 *)(lVar4 + 0x18),*(undefined4 *)(param_1 + 8));
      if (cVar1 != '\0') {
        uVar5 = FUN_0153f8f0(&DAT_0153e548,1,lVar4);
        (**(code **)(*plVar2 + 0x50))(plVar2,uVar5);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_50,2);
  return plVar2;
}

