/* Ghidra address: 00d02d20 */
/* Ghidra symbol: FUN_00d02d20 */


bool FUN_00d02d20(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  
  cVar2 = FUN_00cb0720(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x100));
  bVar3 = cVar2 == '\0';
  if (!bVar3) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x100);
    (**(code **)(*plVar1 + 0x118))(plVar1,param_2);
    cVar2 = FUN_00cb0720(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x100));
    bVar3 = cVar2 == '\0';
  }
  return bVar3;
}

