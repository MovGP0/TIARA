/* Ghidra address: 01bfab60 */
/* Ghidra symbol: FUN_01bfab60 */


undefined8 FUN_01bfab60(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) &&
     (cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x40))(*(longlong **)(lVar1 + 0x18)),
     cVar2 == '\0')) {
    return 1;
  }
  return 0;
}

