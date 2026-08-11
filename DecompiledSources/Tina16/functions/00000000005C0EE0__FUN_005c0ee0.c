/* Ghidra address: 005c0ee0 */
/* Ghidra symbol: FUN_005c0ee0 */


void FUN_005c0ee0(short *param_1,undefined2 *param_2,undefined2 *param_3,undefined2 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  undefined4 local_20;
  char local_19;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_38 = 0;
  local_18 = 0;
  local_10 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 1;
  if ((param_1 == (short *)0x0) || (*param_1 != 0x2d)) {
    local_19 = '\0';
  }
  else {
    local_19 = '\x01';
  }
  if (local_19 == '\0') {
    FUN_00414b50(&local_18,param_1);
  }
  else {
    local_30 = auStack_78;
    FUN_00414480(&local_10);
    local_20 = 0;
    if (param_1 != (short *)0x0) {
      local_20 = *(undefined4 *)(param_1 + -2);
    }
    FUN_00416dc0(&local_10,param_1,2,local_20);
    FUN_00414b50(&local_18,local_10);
    FUN_00414480(&local_10);
  }
  local_24 = 0;
  if (local_18 != 0) {
    local_24 = *(int *)(local_18 + -4);
  }
  if (local_24 < 4) {
    FUN_0041ddd0(&local_38,PTR_PTR_02005868);
    local_48 = local_18;
    local_40 = 0x11;
    local_58 = 0;
    uVar1 = FUN_0044d530(&PTR_FUN_005bb1e0,1,local_38,&local_48);
    FUN_004134c0(uVar1);
  }
  FUN_005c0bc0(auStack_78,local_18);
  FUN_00414480(&local_38);
  FUN_00414560(&local_18,2);
  return;
}

