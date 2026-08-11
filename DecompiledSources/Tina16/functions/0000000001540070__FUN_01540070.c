/* Ghidra address: 01540070 */
/* Ghidra symbol: FUN_01540070 */


void FUN_01540070(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int local_4c;
  undefined8 local_48;
  undefined4 local_3c [3];
  
  local_48 = 0;
  iVar8 = *(int *)(param_2 + 0x10);
  local_4c = 0;
  if (-1 < iVar8 + -1) {
    do {
      lVar5 = FUN_01d347d0(param_2,local_4c);
      plVar1 = *(longlong **)(lVar5 + 8);
      FUN_01d03160(plVar1);
      (**(code **)(*plVar1 + 0x288))(plVar1,&local_48);
      iVar3 = (**(code **)(*plVar1 + 0x1c8))();
      iVar7 = 0;
      if (-1 < iVar3 + -1) {
        do {
          iVar4 = (**(code **)(*plVar1 + 0x210))(plVar1,iVar7);
          if (iVar4 != 0) {
            cVar2 = FUN_01540000(param_1,iVar4,local_3c);
            if (cVar2 == '\0') {
              uVar6 = FUN_0153fb90(&DAT_0153e7e0,1,iVar4);
              FUN_0153fe50(uVar6,plVar1,iVar7 + 1,local_48);
              (**(code **)(**(longlong **)(param_1 + 8) + 0x50))(*(longlong **)(param_1 + 8),uVar6);
            }
            else {
              uVar6 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),local_3c[0]);
              cVar2 = FUN_0153fdf0(uVar6,plVar1);
              if (cVar2 == '\0') {
                FUN_0153fe50(uVar6,plVar1,iVar7 + 1,local_48);
              }
            }
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      local_4c = local_4c + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414480(&local_48);
  return;
}

