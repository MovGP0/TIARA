/* Ghidra address: 00e0f470 */
/* Ghidra symbol: FUN_00e0f470 */


undefined4 FUN_00e0f470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  lVar3 = FUN_00e0f340();
  if (lVar3 != 0) {
    uVar2 = FUN_00e0ee10(*(undefined8 *)(*(longlong *)(lVar3 + 0x828) + 0x30),param_3);
    if ((char)uVar2 == '\0') {
      uVar2 = FUN_00e0ee10(*(undefined8 *)(*(longlong *)(lVar3 + 0x828) + 0x38),param_3);
    }
    if (((char)uVar2 == '\0') &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x828) + 0x40), lVar1 != 0)) {
      uVar2 = FUN_00e0ee10(lVar1,param_3);
    }
    if (((char)uVar2 == '\0') &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x828) + 0x48), lVar3 != 0)) {
      uVar2 = FUN_00e0ee10(lVar3,param_3);
    }
  }
  return uVar2;
}

