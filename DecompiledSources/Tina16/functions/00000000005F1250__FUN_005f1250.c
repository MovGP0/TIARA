/* Ghidra address: 005f1250 */
/* Ghidra symbol: FUN_005f1250 */


char FUN_005f1250(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char local_21;
  undefined8 local_20 [2];
  short *local_10;
  
  local_20[0] = 0;
  local_10 = (short *)0x0;
  FUN_00414b50(&local_10,param_1);
  iVar1 = 0;
  if (local_10 != (short *)0x0) {
    iVar1 = *(int *)(local_10 + -2);
  }
  if ((iVar1 < 1) || (*local_10 != 0x78)) {
    local_21 = FUN_004a3210(local_10,param_2,&DAT_01dec168,0x93);
  }
  else {
    uVar2 = FUN_005f0fc0(local_10);
    *param_2 = uVar2;
    local_21 = '\x01';
  }
  if (local_21 == '\0') {
    iVar1 = 0;
    if (local_10 != (short *)0x0) {
      iVar1 = *(int *)(local_10 + -2);
    }
    if (3 < iVar1) {
      FUN_00456760(&local_10,local_20,2,&DAT_005f1384);
      FUN_00414b50(&local_10,local_20[0]);
      local_21 = FUN_004a3210(local_10,param_2,&DAT_01dec168,0x93);
    }
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return local_21;
}

