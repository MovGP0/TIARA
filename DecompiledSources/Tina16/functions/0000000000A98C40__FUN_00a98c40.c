/* Ghidra address: 00a98c40 */
/* Ghidra symbol: FUN_00a98c40 */


void FUN_00a98c40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int local_3c;
  longlong local_30;
  
  local_30 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x1c8) != 0) {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
    local_3c = 0;
    if (-1 < iVar7 + -1) {
      do {
        plVar4 = (longlong *)FUN_00ac1a90(*(undefined8 *)(param_1 + 0x30),local_3c);
        iVar6 = 0;
        if ((char)plVar4[0x22] == '\0') {
          while( true ) {
            uVar5 = FUN_00414480(&local_30);
            cVar2 = (**(code **)(*plVar4 + 0x158))(plVar4,iVar6,uVar5);
            if (cVar2 == '\0') break;
            if (local_30 != 0) {
              (**(code **)(*plVar3 + 0x78))(plVar3,local_30);
            }
            iVar6 = iVar6 + 1;
          }
        }
        local_3c = local_3c + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (param_2 != 0) {
      (**(code **)(*plVar3 + 0x78))(plVar3,param_2);
    }
    lVar1 = *(longlong *)(param_1 + 8);
    (**(code **)(lVar1 + 0x1c8))
              (*(undefined8 *)(lVar1 + 0x1d0),*(undefined8 *)(lVar1 + 0xb8),
               *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x10),plVar3);
  }
  FUN_00414480(&local_30);
  return;
}

