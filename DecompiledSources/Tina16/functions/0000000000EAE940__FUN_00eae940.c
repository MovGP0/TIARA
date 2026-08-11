/* Ghidra address: 00eae940 */
/* Ghidra symbol: FUN_00eae940 */


void FUN_00eae940(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_68 [36];
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_40 = 0;
  iVar2 = (**(code **)(*param_1 + 0x28))();
  local_44 = iVar2 + -1;
  local_24 = 0;
  if (-1 < local_44) {
    do {
      local_44 = iVar2;
      cVar1 = (**(code **)(*param_1 + 0x30))(param_1,local_24);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x18))(param_1,&local_40,local_24);
        FUN_0043e130(&local_38,local_40);
        iVar2 = FUN_00416db0(local_38,L"TINA");
        if ((iVar2 == 0) &&
           (iVar2 = FUN_0072d440(L"You are about to modify the standard library. Continue?",0,0x403,
                                 0x159b), iVar2 == 7)) {
          FUN_00eae880(local_24);
        }
        else {
          plVar3 = (longlong *)(**(code **)(*DAT_0202ea68 + 0x30))(DAT_0202ea68,local_24);
          (**(code **)(*plVar3 + 200))(plVar3);
        }
      }
      local_24 = local_24 + 1;
      local_44 = local_44 + -1;
      iVar2 = local_44;
    } while (local_44 != 0);
  }
  FUN_00414560(&local_40,2);
  return;
}

