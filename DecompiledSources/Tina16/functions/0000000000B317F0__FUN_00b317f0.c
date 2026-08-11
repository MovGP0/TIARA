/* Ghidra address: 00b317f0 */
/* Ghidra symbol: FUN_00b317f0 */


void FUN_00b317f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_21;
  uint local_20;
  uint local_1c [3];
  
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_30 = 0;
  local_38 = 0;
  **(undefined1 **)(param_1 + 0x38) = 3;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,4)
  ;
  local_1c[0] = 0;
  local_20 = 0;
  local_21 = 0;
  uVar1 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(uVar1,local_1c,2);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 2,&local_20,1);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 3,&local_21,1);
  bVar3 = (local_21 & 0x80) != 0;
  bVar4 = (local_21 & 0x40) != 0;
  if (*(char *)(param_1 + 0x33) != '\0') {
    if (bVar3) {
      local_1c[0] = local_1c[0] + *(ushort *)(*(longlong *)(param_1 + 0x60) + 0x18) & 0xffff;
    }
    if (bVar4) {
      local_20 = local_20 + *(byte *)(*(longlong *)(param_1 + 0x60) + 0x1a) & 0xff;
    }
  }
  if (bVar3) {
    FUN_004144d0(&local_30);
  }
  else {
    FUN_00414c70(&local_30,&LAB_00b31a40);
  }
  if (bVar4) {
    FUN_004144d0(&local_38);
  }
  else {
    FUN_00414c70(&local_38,&LAB_00b31a40);
  }
  FUN_00b20e40(&local_40,local_20);
  FUN_0043f750(&local_48,local_1c[0] + 1);
  FUN_00415dd0(&local_50,local_48,0);
  FUN_00415980(*(longlong *)(param_1 + 0x38) + 10,4,local_38,local_40,local_30,local_50);
  FUN_004144d0(&local_50);
  FUN_00414480(&local_48);
  FUN_00414590(&local_40,3);
  return;
}

