/* Ghidra address: 00d88370 */
/* Ghidra symbol: FUN_00d88370 */


undefined1 FUN_00d88370(longlong param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  iVar1 = FUN_00416db0(param_3,L"default");
  if (iVar1 != 0) {
    lVar3 = FUN_00d74650(*(undefined8 *)(param_1 + 0x48),param_3);
  }
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x50);
  }
  uVar2 = 0;
  if (param_2 == '\0') {
    lVar3 = FUN_00d77610(lVar3,L"Frame");
    if (lVar3 != 0) {
      uVar2 = *(undefined1 *)(lVar3 + 0xf5);
    }
  }
  return uVar2;
}

