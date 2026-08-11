/* Ghidra address: 005f0fc0 */
/* Ghidra symbol: FUN_005f0fc0 */


undefined4 FUN_005f0fc0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined4 local_28;
  undefined4 local_24;
  short *local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = (short *)0x0;
  local_10 = 0;
  FUN_00414b50(&local_20,param_1);
  iVar2 = FUN_00416db0(local_20,&DAT_005f115c);
  if (iVar2 == 0) {
    FUN_00414b50(&local_20,&DAT_005f116c);
  }
  else if ((local_20 != (short *)0x0) && ((*local_20 == 0x23 || (*local_20 == 0x78)))) {
    FUN_00414480(&local_10);
    local_28 = 0;
    if (local_20 != (short *)0x0) {
      local_28 = *(undefined4 *)(local_20 + -2);
    }
    FUN_00416dc0(&local_10,local_20,2,local_28);
    FUN_00416ba0(&local_20,&DAT_005f1180,local_10);
    FUN_00414480(&local_10);
  }
  FUN_00416ba0(&local_38,&LAB_005f1190,local_20);
  cVar1 = FUN_005f1250(local_38,&local_24);
  if (cVar1 == '\0') {
    cVar1 = FUN_005f1250(local_20,&local_24);
    if (cVar1 == '\0') {
      local_14 = FUN_0043fcb0(local_20);
      goto code_r0x005f10d7;
    }
  }
  local_14 = local_24;
code_r0x005f10d7:
  FUN_00414480(&local_38);
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  return local_14;
}

