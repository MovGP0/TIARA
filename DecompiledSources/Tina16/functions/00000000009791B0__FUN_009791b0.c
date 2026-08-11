/* Ghidra address: 009791b0 */
/* Ghidra symbol: FUN_009791b0 */


void FUN_009791b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined *local_20 [2];
  
  local_38 = (undefined *)0x0;
  local_20[0] = &DAT_009793ac;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,local_20,0,0);
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  FUN_00978130(param_1,10,lVar1);
  local_30 = *(undefined8 *)(param_2 + 0x90);
  local_28 = &DAT_009793b4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,&local_30,1,0);
  FUN_00947aa0(&local_38,*(undefined8 *)(param_2 + 0x98));
  local_20[0] = local_38;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,local_20,0,1);
  local_20[0] = &LAB_009793c0;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,local_20,0,0);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,10,param_2);
  FUN_00414520(&local_38);
  return;
}

