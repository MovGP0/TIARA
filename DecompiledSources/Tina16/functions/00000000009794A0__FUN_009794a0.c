/* Ghidra address: 009794a0 */
/* Ghidra symbol: FUN_009794a0 */


void FUN_009794a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  wchar_t *local_40;
  undefined8 local_38;
  wchar_t *local_30;
  
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2 + 0x80;
  }
  FUN_00978130(param_1,1,lVar1);
  if ((int)param_1[0x1a] < 1) {
    local_40 = L"<!--";
    local_38 = *(undefined8 *)(param_2 + 0x88);
    local_30 = L"-->\n";
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,&local_40,2,0);
  }
  else {
    local_40 = L"<!--";
    local_38 = *(undefined8 *)(param_2 + 0x88);
    local_30 = L"-->";
    if (param_2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_2 + 0x80;
    }
    (**(code **)(*param_1 + 0xb8))(param_1,*(undefined8 *)(param_2 + 0x38),lVar1,&local_40,2,0);
  }
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x80;
  }
  FUN_009780f0(param_1,1,param_2);
  return;
}

