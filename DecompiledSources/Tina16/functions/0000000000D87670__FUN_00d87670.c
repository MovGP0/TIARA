/* Ghidra address: 00d87670 */
/* Ghidra symbol: FUN_00d87670 */


undefined8 FUN_00d87670(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_30;
  
  local_30 = FUN_00d81570(param_1,param_2,param_3);
  lVar2 = 0;
  iVar1 = FUN_00416db0(param_3,L"default");
  if (iVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_3);
  }
  if (lVar2 == 0) {
    if ((char)param_2 == '\0') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x30);
    }
    else if ((char)param_2 == '\x01') {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x38);
    }
  }
  if (lVar2 != 0) {
    lVar2 = FUN_00d77610(lVar2,L"Checked");
    if (lVar2 != 0) {
      local_30 = *(undefined8 *)(lVar2 + 0x84);
    }
  }
  return local_30;
}

