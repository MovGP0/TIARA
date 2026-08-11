/* Ghidra address: 0083fa10 */
/* Ghidra symbol: FUN_0083fa10 */


bool FUN_0083fa10(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
  if (lVar1 == 0) {
    bVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x528) != 0;
  }
  else {
    cVar2 = FUN_0083db30(*(undefined8 *)(lVar1 + 0x528),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x528));
    bVar3 = cVar2 == '\0';
  }
  return bVar3;
}

