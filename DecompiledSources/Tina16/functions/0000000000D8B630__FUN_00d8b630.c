/* Ghidra address: 00d8b630 */
/* Ghidra symbol: FUN_00d8b630 */


bool FUN_00d8b630(longlong param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
      bVar3 = false;
      iVar1 = FUN_00416db0(param_3,L"default");
      if (iVar1 != 0) {
        lVar2 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_3);
        bVar3 = lVar2 != 0;
      }
      if (bVar3 != false) {
        return bVar3;
      }
      return *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x118) != 0;
    }
    if (param_2 != '\x02') {
      return false;
    }
  }
  return false;
}

