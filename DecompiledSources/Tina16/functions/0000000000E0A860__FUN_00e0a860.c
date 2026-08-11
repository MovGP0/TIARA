/* Ghidra address: 00e0a860 */
/* Ghidra symbol: FUN_00e0a860 */


void FUN_00e0a860(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  int local_1c;
  
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    local_20 = *(int *)(*(longlong *)(param_1 + 0x10) + -4);
  }
  local_1c = 1;
  iVar2 = 0;
  if (1 < local_20) {
    do {
      iVar1 = FUN_00e0a820(auStack_58,0x3a);
      FUN_00416dc0(&local_28,*(undefined8 *)(param_1 + 0x10),iVar2 + 1,(iVar1 - iVar2) + -1);
      iVar2 = FUN_00e0a820(auStack_58,0x2c);
      FUN_00416dc0(&local_30,*(undefined8 *)(param_1 + 0x10),iVar1 + 1,(iVar2 - iVar1) + -1);
      uVar3 = FUN_00e0a5e0(&DAT_00e0a038,1,local_28,local_30);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x18),uVar3);
    } while (local_1c < local_20);
  }
  FUN_00414560(&local_30,2);
  return;
}

