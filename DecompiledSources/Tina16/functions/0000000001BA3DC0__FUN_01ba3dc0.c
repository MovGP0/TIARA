/* Ghidra address: 01ba3dc0 */
/* Ghidra symbol: FUN_01ba3dc0 */


void FUN_01ba3dc0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0xa8))(*(longlong **)(param_1 + 0x700));
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    *(longlong **)(param_1 + 0x720) = plVar2;
    FUN_00724270(*(undefined8 *)(param_1 + 0x700),local_20);
    (**(code **)(*plVar2 + 0xd8))(plVar2,local_20[0]);
    *(undefined4 *)(param_1 + 0x734) = 1;
    *(undefined1 *)(param_1 + 0x738) = 1;
    FUN_01ba42f0();
  }
  FUN_00414480(local_20);
  return;
}

