/* Ghidra address: 019ad570 */
/* Ghidra symbol: FUN_019ad570 */


undefined1 FUN_019ad570(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined1 local_41;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_30[0] = 0;
  local_41 = 0;
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_00b94e60(param_2,iVar4);
      cVar1 = FUN_0198a580(lVar3);
      if (cVar1 == '\x05') {
        FUN_004169a0(local_40,lVar3 + 0x2d8);
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                          (*(longlong **)(param_1 + 0x28),local_40[0]);
        if (-1 < iVar2) {
          local_41 = 1;
          break;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  return local_41;
}

