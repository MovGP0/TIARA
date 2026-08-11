/* Ghidra address: 00d86f50 */
/* Ghidra symbol: FUN_00d86f50 */


undefined1 FUN_00d86f50(longlong param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  iVar1 = FUN_00416db0(param_3,L"default");
  if (iVar1 != 0) {
    lVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_3);
  }
  if (lVar3 == 0) {
    if (param_2 == '\0') {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x28);
    }
    else if (param_2 == '\x04') {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xb8);
    }
    else if (param_2 == '\x05') {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xb8);
    }
    else {
      lVar3 = 0;
    }
  }
  if ((lVar3 != 0) && (lVar2 = FUN_00d77610(lVar3,L"Face"), lVar2 != 0)) {
    lVar3 = FUN_00d77610(lVar3,L"Face");
    return *(undefined1 *)(lVar3 + 0xf5);
  }
  return 0;
}

