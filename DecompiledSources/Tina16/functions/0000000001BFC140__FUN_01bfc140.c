/* Ghidra address: 01bfc140 */
/* Ghidra symbol: FUN_01bfc140 */


undefined8 FUN_01bfc140(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = FUN_005b4b60(param_1);
  if (((cVar2 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x80) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x80),
     cVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1),
     cVar2 == *(char *)(*(longlong *)(param_1 + 0x18) + 0xd9))) {
    return 1;
  }
  return 0;
}

