/* Ghidra address: 00b5b370 */
/* Ghidra symbol: FUN_00b5b370 */


void FUN_00b5b370(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [42];
  ushort local_1e [7];
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00415d10(&local_10,2,0);
  uVar2 = FUN_00414df0(&local_10);
  FUN_00409a70(*(longlong *)(param_1 + 0x10) + 0x10,uVar2,2);
  FUN_00b5b250(auStack_48,0);
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x10) + 8);
  local_1e[0] = (**(code **)*puVar1)(puVar1);
  uVar2 = FUN_00414df0(&local_10);
  FUN_00409a70(local_1e,uVar2,2);
  FUN_00b5b250(auStack_48,0);
  if (local_1e[0] != 0) {
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x10) == 0x85) {
      FUN_00415d10(&local_10,4,0);
      uVar2 = FUN_00414df0(&local_10);
      FUN_00409a70(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 8),uVar2,4);
      FUN_00b5b250(auStack_48,0);
      FUN_00415d10(&local_10,local_1e[0] - 4,0);
      uVar2 = FUN_00414df0(&local_10);
      FUN_00409a70(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 8) + 4,uVar2,
                   (longlong)(int)(local_1e[0] - 4));
      FUN_00b5b250(auStack_48,*(undefined1 *)(param_1 + 0x18));
    }
    else {
      FUN_00415d10(&local_10,local_1e[0],0);
      uVar2 = FUN_00414df0(&local_10);
      FUN_00409a70(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) + 8),uVar2,
                   local_1e[0]);
      FUN_00b5b250(auStack_48,*(undefined1 *)(param_1 + 0x18));
    }
  }
  FUN_004144d0(&local_10);
  return;
}

