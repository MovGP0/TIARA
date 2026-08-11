/* Ghidra address: 005b2140 */
/* Ghidra symbol: FUN_005b2140 */


int FUN_005b2140(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_54 = -1;
  local_68 = param_1;
  local_60 = param_2;
  iVar1 = local_54;
  if (param_2 != 0) {
    FUN_005b2060(auStack_88,local_40,param_2);
    FUN_00414b50(local_30,local_40[0]);
    iVar1 = local_54;
    if (local_30[0] != 0) {
      iVar2 = (**(code **)(*local_68 + 0x28))();
      iVar4 = 0;
      iVar1 = local_54;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(*local_68 + 0x18))(local_68,&local_50,iVar4);
          FUN_005b2060(auStack_88,&local_48,local_50);
          iVar3 = FUN_00416db0(local_48,local_30[0]);
          iVar1 = iVar4;
          if (iVar3 == 0) break;
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
          iVar1 = local_54;
        } while (iVar2 != 0);
      }
    }
  }
  local_54 = iVar1;
  FUN_00414560(&local_50,3);
  FUN_00414480(local_30);
  return local_54;
}

