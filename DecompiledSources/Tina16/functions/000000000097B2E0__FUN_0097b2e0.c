/* Ghidra address: 0097b2e0 */
/* Ghidra symbol: FUN_0097b2e0 */


void FUN_0097b2e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  FUN_00978130(param_1,0xd,lVar1);
  local_50 = L"\n<!ELEMENT ";
  local_48 = *(undefined8 *)(param_2 + 0x90);
  local_40 = &DAT_0097b3bc;
  local_38 = *(undefined8 *)(param_2 + 0x88);
  local_30 = &LAB_0097b3c4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,&local_50,4,0);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,0xd,param_2);
  return;
}

