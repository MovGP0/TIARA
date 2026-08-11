/* Ghidra address: 00e12470 */
/* Ghidra symbol: FUN_00e12470 */


void FUN_00e12470(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong local_68;
  int local_4c;
  undefined8 local_48;
  undefined1 local_3c [4];
  int local_38;
  undefined1 local_34 [4];
  undefined1 local_30 [8];
  
  local_48 = 0;
  lVar7 = FUN_00410e60(&LAB_00e11828,1);
  FUN_00e122f0(lVar7,param_2);
  *(undefined8 *)(lVar7 + 0x20) = param_1;
  lVar1 = *(longlong *)(param_2 + 0x9d0);
  *(undefined1 *)(lVar1 + 0x20) = *(undefined1 *)(param_2 + 0x838);
  FUN_00e14e70(lVar1,param_1);
  FUN_00e14a00(*(undefined8 *)(param_2 + 0x9d0));
  FUN_01995600(param_1,0,0);
  plVar8 = (longlong *)FUN_01995660(param_1,0,0);
  while (plVar8 != (longlong *)0x0) {
    uVar3 = FUN_01d03160(plVar8);
    cVar2 = FUN_01d3fd10(plVar8,*(undefined1 *)(param_2 + 0x838));
    if (cVar2 != '\0') {
      iVar4 = (**(code **)(*plVar8 + 0x1c8))(plVar8);
      cVar2 = FUN_01d3f210(plVar8);
      if (cVar2 != '\0') {
        local_68 = FUN_015f3750(param_2,plVar8,1);
        if (local_68 == 0) {
          FUN_015fcf20(L"Invalid data in port!",0,0,0);
        }
        FUN_004ae7e0(*(undefined8 *)(param_2 + 0x8e8),local_68);
      }
      local_4c = 0;
      iVar9 = iVar4;
      if (-1 < iVar4 + -1) {
        do {
          uVar5 = (**(code **)(*plVar8 + 0x210))(plVar8,local_4c);
          cVar2 = FUN_01d3f210(plVar8);
          if (cVar2 == '\0') {
            FUN_01d3e8c0(uVar3,iVar4,local_4c + 1,&local_38,local_3c);
            if (local_38 == -1) {
              uVar6 = 2;
            }
            else {
              uVar6 = 1;
            }
          }
          else {
            uVar6 = FUN_00e0fa90(local_68,uVar5,&local_48);
          }
          cVar2 = FUN_00e14cc0(*(undefined8 *)(param_2 + 0x9d0),uVar5,2,local_30,local_34,0);
          if (cVar2 != '\0') {
            FUN_00e12220(lVar7,uVar5,local_4c,uVar6,plVar8);
          }
          local_4c = local_4c + 1;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    }
    FUN_01995800(param_1,0,0);
    plVar8 = (longlong *)FUN_01995660(param_1,0);
  }
  FUN_00e12300(lVar7,*(undefined1 *)(param_2 + 0x838));
  FUN_015f4a70(lVar7);
  FUN_00410f20(lVar7);
  FUN_00414480(&local_48);
  return;
}

