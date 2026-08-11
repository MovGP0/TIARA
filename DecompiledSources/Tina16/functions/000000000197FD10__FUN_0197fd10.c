/* Ghidra address: 0197fd10 */
/* Ghidra symbol: FUN_0197fd10 */


void FUN_0197fd10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int local_60;
  int local_5c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_30 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  local_60 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                        (*(longlong **)(param_1 + 8),local_60);
      lVar4 = FUN_01803a30(param_2);
      (**(code **)(**(longlong **)(param_1 + 8) + 0x18))
                (*(longlong **)(param_1 + 8),&local_30,local_60);
      FUN_00414ad0(lVar4 + 0x20,local_30);
      iVar2 = (**(code **)(**(longlong **)(lVar3 + 8) + 0x28))();
      local_5c = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar5 = FUN_01803a30(lVar4);
          FUN_00414ad0(lVar5 + 0x20,&DAT_0197ff00);
          (**(code **)(**(longlong **)(lVar3 + 8) + 0x18))
                    (*(longlong **)(lVar3 + 8),&local_40,local_5c);
          FUN_004168b0(&local_48,local_40);
          FUN_01802f80(&local_38,local_48);
          FUN_00416cd0(lVar5 + 0x30,3,L" cnt=\"",local_38,&DAT_0197ff2c);
          local_5c = local_5c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_60 = local_60 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(&local_48);
  FUN_00414520(&local_40);
  FUN_00414560(&local_38,2);
  return;
}

