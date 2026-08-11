/* Ghidra address: 00d8b6c0 */
/* Ghidra symbol: FUN_00d8b6c0 */


undefined1 FUN_00d8b6c0(longlong param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_2 != '\0') {
    if (param_2 == '\x01') {
      uVar2 = 0;
      lVar3 = 0;
      iVar1 = FUN_00416db0(param_3,L"default");
      if ((iVar1 != 0) &&
         (lVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_3), lVar3 != 0)) {
        uVar2 = *(undefined1 *)(lVar3 + 0xf5);
      }
      if (lVar3 != 0) {
        return uVar2;
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x118) == 0) {
        return uVar2;
      }
      lVar3 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x118),L"Caption");
      if (lVar3 == 0) {
        return uVar2;
      }
      lVar3 = FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x118),L"Caption");
      return *(undefined1 *)(lVar3 + 0xf5);
    }
    if (param_2 != '\x02') {
      return 0;
    }
  }
  return 0;
}

