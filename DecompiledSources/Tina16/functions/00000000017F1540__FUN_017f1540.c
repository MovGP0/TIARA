/* Ghidra address: 017f1540 */
/* Ghidra symbol: FUN_017f1540 */


undefined1 FUN_017f1540(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  local_29 = 1;
  if (*(char *)(*(longlong *)(param_1 + 0x868) + 0x5e0) != '\0') {
    if ((*(char *)(param_1 + 0xb60) == '\0') || (param_3 != 2)) {
      FUN_00f08d50(local_20,8);
      FUN_0043e130(&local_28,*(undefined8 *)(param_1 + 0x888));
      FUN_00416cd0(&local_10,3,local_20[0],local_28,&DAT_017f16d8);
    }
    else {
      FUN_00f08d50(&local_10,0xb);
    }
    iVar1 = FUN_0072d440(local_10,3,0xb,0);
    if ((*(char *)(param_1 + 0xb60) == '\0') || (param_3 != 2)) {
      if (iVar1 == 2) {
        local_29 = 0;
      }
      else if (iVar1 == 6) {
        FUN_017ef8e0(param_1,param_2);
      }
    }
    else if (iVar1 == 2) {
      local_29 = 0;
    }
    else if (iVar1 == 6) {
      *(undefined1 *)(param_1 + 0xb61) = 1;
    }
    else if (iVar1 == 7) {
      *(undefined1 *)(param_1 + 0xb61) = 0;
    }
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return local_29;
}

