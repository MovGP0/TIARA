/* Ghidra address: 00979bc0 */
/* Ghidra symbol: FUN_00979bc0 */


void FUN_00979bc0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  FUN_00978130(param_1,9,lVar1);
  local_40 = &DAT_00979c68;
  local_38 = *(undefined8 *)(param_2 + 0x88);
  local_30 = &LAB_00979c70;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,&local_40,2,0);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,9,param_2);
  return;
}

