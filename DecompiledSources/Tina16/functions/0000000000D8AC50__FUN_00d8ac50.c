/* Ghidra address: 00d8ac50 */
/* Ghidra symbol: FUN_00d8ac50 */


bool FUN_00d8ac50(longlong param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  iVar1 = FUN_00416db0(param_3,L"default");
  if (iVar1 == 0) {
    if (param_2 == '\0') {
      bVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xc0) != 0;
    }
    else if (param_2 == '\x01') {
      bVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xc0) != 0;
    }
    else {
      bVar3 = false;
    }
  }
  else {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_3);
    bVar3 = lVar2 != 0;
  }
  return bVar3;
}

