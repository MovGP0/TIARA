/* Ghidra address: 00d875c0 */
/* Ghidra symbol: FUN_00d875c0 */


bool FUN_00d875c0(longlong param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = FUN_00416db0(param_3,L"default");
  if (iVar1 != 0) {
    lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_3);
    bVar3 = lVar2 != 0;
  }
  if (bVar3 == false) {
    if (param_2 == '\0') {
      bVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x30) != 0;
    }
    else if (param_2 == '\x01') {
      bVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x38) != 0;
    }
  }
  return bVar3;
}

