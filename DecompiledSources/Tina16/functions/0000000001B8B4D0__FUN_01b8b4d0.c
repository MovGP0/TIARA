/* Ghidra address: 01b8b4d0 */
/* Ghidra symbol: FUN_01b8b4d0 */


void FUN_01b8b4d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int local_5c;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  longlong *local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x3a8) + 0x10);
  local_5c = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x3a8),local_5c);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x10),L"voltage");
      if (((iVar2 == 0) ||
          (iVar2 = FUN_00416db0(*(undefined8 *)(lVar4 + 0x10),L"current"), iVar2 == 0)) &&
         ((*(uint *)(lVar4 + 0x20) & 2) != 0)) {
        iVar2 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x1c8))();
        iVar5 = 0;
        if (-1 < iVar2 + -1) {
          do {
            iVar3 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x210))
                              (*(longlong **)(lVar4 + 8),iVar5);
            if (iVar3 != 0) {
              cVar1 = FUN_01b8acc0(param_1,iVar3,&local_48);
              if (cVar1 == '\0') {
                (**(code **)(**(longlong **)(lVar4 + 8) + 0x1f0))
                          (*(longlong **)(lVar4 + 8),iVar5,local_50,local_4c);
                local_48 = (longlong *)FUN_01b87d20(param_1,4,L"VP_AC_INP",local_50);
                FUN_01b80240(local_48,1,0);
              }
              else {
                (**(code **)(*local_48 + 0x288))(local_48,local_40);
                FUN_01b80240(local_48,1,0);
              }
            }
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      local_5c = local_5c + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414480(local_40);
  return;
}

