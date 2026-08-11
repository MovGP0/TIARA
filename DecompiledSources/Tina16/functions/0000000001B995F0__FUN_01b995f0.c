/* Ghidra address: 01b995f0 */
/* Ghidra symbol: FUN_01b995f0 */


void FUN_01b995f0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined1 *local_30;
  int local_1c;
  longlong local_18;
  undefined8 local_10;
  
  local_30 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_40);
  FUN_0043ea00(&local_38,local_40);
  if (local_38 != 0) {
    local_10 = 0;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_10);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_48);
    local_18 = local_48;
    local_1c = 0;
    if (local_48 != 0) {
      local_1c = *(int *)(local_48 + -4);
    }
    FUN_00416dc0(&local_50,local_10,2,local_1c + -2);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x718),local_50);
    FUN_00414480(&local_10);
  }
  uVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x7e8));
  FUN_01b96ae0(param_1,uVar1,1);
  FUN_00414560(&local_50,3);
  FUN_00414480(&local_38);
  return;
}

