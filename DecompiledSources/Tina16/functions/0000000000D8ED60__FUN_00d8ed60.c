/* Ghidra address: 00d8ed60 */
/* Ghidra symbol: FUN_00d8ed60 */


undefined8 FUN_00d8ed60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x180);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x48) != 0)) {
    lVar1 = FUN_00d74650(*(undefined8 *)(lVar1 + 0x48));
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_00d77610(lVar1,param_3);
    }
  }
  return uVar2;
}

