/* Ghidra address: 00ad2cc0 */
/* Ghidra symbol: FUN_00ad2cc0 */


undefined1 FUN_00ad2cc0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_58;
  char local_49;
  longlong local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_9;
  
  local_60 = auStack_88;
  local_38 = 0;
  local_18 = 0;
  local_20 = 0;
  uVar3 = FUN_00610ca0(&PTR_FUN_00a90138,1);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  local_48 = *(longlong *)(param_1 + 0x30);
  local_3c = *(int *)(*(longlong *)(local_48 + 0x28) + 8) - *(int *)(local_48 + 8);
  local_9 = 1;
  do {
    FUN_00ad1b80(auStack_88);
    FUN_00ad1af0(auStack_88);
    if (*(short *)(param_1 + 0x20) == 0) break;
    if (*(short *)(param_1 + 0x20) == 0x21) {
      FUN_00ad1af0(auStack_88);
      uVar3 = FUN_00414480(&local_38);
      FUN_00ad12a0(param_1,uVar3);
      FUN_00414480(&local_18);
      FUN_0043e5a0(&local_18,local_38);
      iVar2 = FUN_00416db0(local_18,L"DOCTYPE");
      local_49 = iVar2 != 0;
      FUN_00414480(&local_18);
      if (local_49 == '\0') {
        cVar1 = FUN_00ad1da0(auStack_88);
        if (cVar1 != '\0') {
          local_9 = 0;
          break;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x80) = 1;
        FUN_00ad1b30(auStack_88);
      }
    }
    uVar3 = FUN_00414480(&local_38);
    FUN_00ad12a0(param_1,uVar3);
    FUN_00ad3020(param_1);
    FUN_00414480(&local_20);
    FUN_0043e5a0(&local_20,local_38);
    FUN_00414b50(&local_38,local_20);
    FUN_00414480(&local_20);
    iVar2 = FUN_00416db0(local_38,L"HTML");
    if (iVar2 == 0) break;
    iVar2 = FUN_00416db0(local_38,L"HEAD");
    if (iVar2 == 0) break;
    iVar2 = FUN_00416db0(local_38,L"BODY");
  } while (iVar2 != 0);
  local_58 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(*(longlong *)(local_58 + 0x28) + 8) =
       *(longlong *)(local_58 + 8) + (longlong)local_3c;
  local_28 = (undefined8 *)(param_1 + 0xe8);
  local_30 = *local_28;
  *local_28 = 0;
  FUN_00410f20(local_30);
  FUN_00414480(&local_38);
  FUN_00414560(&local_20,2);
  return local_9;
}

