/* Ghidra address: 00e0fb30 */
/* Ghidra symbol: FUN_00e0fb30 */


void FUN_00e0fb30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_00e0ee10(*(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0x30),param_2);
  if (cVar2 == '\0') {
    cVar2 = FUN_00e0ee10(*(undefined8 *)(*(longlong *)(param_1 + 0x828) + 0x38),param_2);
  }
  if ((cVar2 == '\0') && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x828) + 0x40), lVar1 != 0))
  {
    cVar2 = FUN_00e0ee10(lVar1,param_2);
  }
  if ((cVar2 == '\0') && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x828) + 0x48), lVar1 != 0))
  {
    FUN_00e0ee10(lVar1,param_2);
  }
  return;
}

