/* Ghidra address: 01887480 */
/* Ghidra symbol: FUN_01887480 */


void FUN_01887480(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [44];
  int local_4c;
  undefined8 local_48;
  undefined1 *local_40;
  longlong local_28;
  undefined8 local_20;
  int local_14;
  longlong local_10;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_28 = 0;
  FUN_018872f0(param_1);
  iVar1 = FUN_01803a10();
  local_4c = iVar1 + -1;
  local_14 = 0;
  if (-1 < local_4c) {
    do {
      local_4c = iVar1;
      local_20 = FUN_018039f0(param_2,local_14);
      local_10 = FUN_018873e0(param_1);
      FUN_01803cc0(local_20,&local_48,L"stream");
      uVar3 = FUN_004aeac0(*(longlong *)(param_1 + 0x10),
                           *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1);
      FUN_01886db0(local_48,uVar3);
      iVar1 = FUN_01803a10(local_20);
      if (0 < iVar1) {
        uVar3 = FUN_018039f0(local_20,0);
        FUN_01803cc0(uVar3,&local_28,&DAT_01887670);
        if (local_28 != 0) {
          uVar2 = FUN_0043fc00(local_28);
          *(undefined4 *)(local_10 + 0xc) = uVar2;
        }
        uVar3 = FUN_018039f0(local_20,0);
        FUN_01803cc0(uVar3,&local_28,&LAB_01887680);
        if (local_28 != 0) {
          uVar2 = FUN_0043fc00(local_28);
          *(undefined4 *)(local_10 + 0x10) = uVar2;
        }
      }
      *(undefined4 *)(local_10 + 8) = 0;
      local_14 = local_14 + 1;
      local_4c = local_4c + -1;
      iVar1 = local_4c;
    } while (local_4c != 0);
  }
  FUN_00414480(&local_48);
  FUN_00414480(&local_28);
  return;
}

