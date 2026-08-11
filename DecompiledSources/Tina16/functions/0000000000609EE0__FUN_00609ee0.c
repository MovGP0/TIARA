/* Ghidra address: 00609ee0 */
/* Ghidra symbol: FUN_00609ee0 */


undefined8 FUN_00609ee0(longlong param_1)

{
  longlong lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  uVar3 = (undefined7)((ulonglong)lVar1 >> 8);
  if ((*(longlong *)(lVar1 + 0x10) == 0) ||
     (*(longlong *)(lVar1 + 0x10) == *(longlong *)(lVar1 + 0x28))) {
    if (*(longlong *)(lVar1 + 0x28) == 0) {
      if (*(int *)(lVar1 + 0x60) == 0) {
        uVar2 = CONCAT71(uVar3,1);
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = CONCAT71(uVar3,1);
  }
  return uVar2;
}

