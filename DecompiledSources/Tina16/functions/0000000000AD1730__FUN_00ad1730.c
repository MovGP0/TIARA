/* Ghidra address: 00ad1730 */
/* Ghidra symbol: FUN_00ad1730 */


undefined1 FUN_00ad1730(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_58;
  char local_49;
  longlong local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_60 = auStack_88;
  local_10 = 0;
  local_20 = 0;
  local_28 = 0;
  uVar3 = FUN_00610ca0(&PTR_FUN_00a90138,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  local_48 = *(longlong *)(param_1 + 0x30);
  local_3c = *(int *)(*(longlong *)(local_48 + 0x28) + 8) - *(int *)(local_48 + 8);
  local_11 = 1;
  do {
    FUN_00ad1450(auStack_88);
    FUN_00ad13c0(auStack_88);
    sVar1 = *(short *)(param_1 + 0x20);
    if (sVar1 == 0) break;
    if (sVar1 == 0x21) {
      FUN_00ad13c0(auStack_88);
      uVar3 = FUN_00414480(&local_10);
      FUN_00ad12a0(param_1,uVar3);
      FUN_00414480(&local_20);
      FUN_0043e5a0(&local_20,local_10);
      iVar2 = FUN_00416db0(local_20,L"DOCTYPE");
      local_49 = iVar2 != 0;
      FUN_00414480(&local_20);
      if (local_49 == '\0') {
        local_11 = 0;
        break;
      }
      *(undefined1 *)(param_1 + 0x80) = 1;
      FUN_00ad1400(auStack_88);
    }
    else if (sVar1 == 0x3f) {
      FUN_00ad13c0(auStack_88);
      uVar3 = FUN_00414480(&local_10);
      FUN_00ad12a0(param_1,uVar3);
      iVar2 = FUN_00416db0(local_10,&DAT_00ad1a94);
      if (iVar2 == 0) {
        FUN_00ad1550(auStack_88);
        break;
      }
    }
    uVar3 = FUN_00414480(&local_10);
    FUN_00ad12a0(param_1,uVar3);
    FUN_00ad3020(param_1);
    FUN_00414480(&local_28);
    FUN_0043e5a0(&local_28,local_10);
    FUN_00414b50(&local_10,local_28);
    FUN_00414480(&local_28);
    iVar2 = FUN_00416db0(local_10,L"HTML");
    if (iVar2 == 0) break;
    iVar2 = FUN_00416db0(local_10,L"HEAD");
    if (iVar2 == 0) break;
    iVar2 = FUN_00416db0(local_10,L"BODY");
  } while (iVar2 != 0);
  local_58 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(local_58 + 0x28) + 8) =
       *(longlong *)(local_58 + 8) + (longlong)local_3c;
  local_30 = (undefined8 *)(param_1 + 0xe8);
  local_38 = *local_30;
  *local_30 = 0;
  FUN_00410f20(local_38);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return local_11;
}

