/* Ghidra address: 01561ad0 */
/* Ghidra symbol: FUN_01561ad0 */


void FUN_01561ad0(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0;
  local_48 = 0;
  cVar1 = FUN_01995600(*(undefined8 *)(param_1 + 0x748),0,0);
  if (cVar1 == '\0') {
    FUN_015fcf20(L"Graph init error!",0,0,0);
  }
  else {
    plVar5 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x748),1,0);
    while (plVar5 != (longlong *)0x0) {
      uVar2 = FUN_01d03160(plVar5);
      cVar1 = FUN_0198a580(plVar5);
      if (cVar1 == '\x04') {
        if (((char)plVar5[0xac] == '\0') && (cVar1 = FUN_01d3fc30(uVar2), cVar1 != '\0')) {
          lVar6 = FUN_015761f0(&DAT_01574280,1,plVar5);
          iVar3 = (**(code **)(*plVar5 + 0x1c8))();
          iVar8 = 0;
          if (-1 < iVar3 + -1) {
            do {
              uVar4 = (**(code **)(*plVar5 + 0x210))(plVar5,iVar8);
              uVar7 = FUN_01575fa0(&DAT_01573ea8,1,uVar4);
              FUN_004ae7e0(*(undefined8 *)(lVar6 + 8),uVar7);
              iVar8 = iVar8 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0xa28),lVar6);
        }
        FUN_01995800(*(undefined8 *)(param_1 + 0x748),1,0);
        plVar5 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x748),1);
      }
    }
  }
  FUN_00414560(&local_48,2);
  return;
}

