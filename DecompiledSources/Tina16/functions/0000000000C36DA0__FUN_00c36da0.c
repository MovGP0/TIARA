/* Ghidra address: 00c36da0 */
/* Ghidra symbol: FUN_00c36da0 */


undefined8 FUN_00c36da0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  undefined8 local_20 [2];
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_24 = 1;
  local_88 = param_1;
  local_80 = param_2;
LAB_00c36f88:
  do {
    iVar2 = 0;
    if (local_80 != 0) {
      iVar2 = *(int *)(local_80 + -4);
    }
    if (iVar2 <= local_24) goto LAB_00c36fa3;
    FUN_00c36b50(auStack_a8,&local_30,local_80,&local_24);
    FUN_00414b50(local_20,local_30);
    for (iVar2 = -1; iVar2 < 0xe; iVar2 = iVar2 + 1) {
      FUN_004169a0(&local_40,s___HELP___to_get_this_help_01ea26ed + (longlong)iVar2 * 0x3d);
      FUN_00b90780(&local_38,local_40);
      FUN_0043e130(&local_48,local_20[0]);
      iVar1 = FUN_00416db0(local_38,local_48);
      if (iVar1 == 0) break;
    }
    if (iVar2 < 5) {
      if (iVar2 != -1) {
        if (iVar2 - 1U < 3) {
          FUN_00c36b50(auStack_a8,&local_50,local_80,&local_24);
        }
        else {
          if (iVar2 != 4) goto LAB_00c36f46;
          FUN_00c36c10(auStack_a8,&local_58,local_80,&local_24);
          FUN_00c36b50(auStack_a8,&local_60,local_80,&local_24);
        }
      }
      goto LAB_00c36f88;
    }
    if (2 < iVar2 - 5U) {
      if (iVar2 == 8) {
        FUN_00c36b50(auStack_a8,&local_68,local_80,&local_24);
      }
      else if (4 < iVar2 - 9U) {
LAB_00c36f46:
        FUN_00416dc0(&local_78,L".TSC",2,3);
        FUN_00c36cc0(auStack_a8,&local_70,local_20[0],local_78);
        FUN_00414ad0(local_88,local_70);
LAB_00c36fa3:
        FUN_00414560(&local_78,10);
        FUN_00414480(local_20);
        return local_88;
      }
    }
  } while( true );
}

