/* Ghidra address: 008a2370 */
/* Ghidra symbol: FUN_008a2370 */


undefined1 FUN_008a2370(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_81;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  undefined8 local_20;
  longlong local_18;
  longlong local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_81 = 0;
  FUN_00416dc0(&local_20,param_2,1,3);
  local_80 = &DAT_008a25ac;
  local_78 = &DAT_008a25c0;
  local_70 = &DAT_008a25d4;
  local_68 = &DAT_008a25e8;
  local_60 = &DAT_008a25fc;
  local_58 = &DAT_008a2610;
  local_50 = &DAT_008a2624;
  local_48 = &DAT_008a2638;
  local_40 = &DAT_008a264c;
  local_38 = &DAT_008a2660;
  local_30 = &DAT_008a2674;
  local_28 = &DAT_008a2688;
  iVar2 = FUN_00874bb0(local_20,&local_80,0xb,0);
  *(int *)(param_1 + 0x5c) = iVar2 + 1;
  if (*(int *)(param_1 + 0x5c) == 0) {
    FUN_00414b50(&local_10,param_2);
    FUN_008a1ef0(param_1,&local_18,&local_10,1,2);
    if (local_18 == 0) goto LAB_008a255e;
    if (local_10 != 0) {
      cVar1 = FUN_008752e0(local_10,1,1);
      if (cVar1 != '\0') {
        uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Month");
        FUN_004134c0(uVar3);
      }
    }
    cVar1 = FUN_0043fc80(local_18,param_1 + 0x5c);
    if (cVar1 == '\0') goto LAB_008a255e;
    if ((*(int *)(param_1 + 0x5c) < 1) || (0xc < *(int *)(param_1 + 0x5c))) {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Month");
      FUN_004134c0(uVar3);
    }
  }
  local_81 = 1;
LAB_008a255e:
  FUN_00414560(&local_20,3);
  return local_81;
}

