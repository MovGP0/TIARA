/* Ghidra address: 0074dba0 */
/* Ghidra symbol: FUN_0074dba0 */


void FUN_0074dba0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  
  if ((*(char *)(param_1 + 0x78) != (char)param_2) &&
     (*(char *)(param_1 + 0x78) = (char)param_2, (*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
    plVar1 = *(longlong **)(param_1 + 0xb0);
    if (plVar1 != (longlong *)0x0) {
      iVar3 = (**(code **)(*plVar1 + 0x90))(plVar1);
      if ((0 < iVar3) && (*(char *)(param_1 + 0xd4) != '\0')) {
        FUN_00742eb0(*(undefined8 *)(param_1 + 0xc0),param_2);
      }
    }
    if (*(char *)(param_1 + 0x78) == '\0') {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x40))(*(longlong **)(param_1 + 0x98));
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x10))
                  (*(longlong **)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98));
      }
    }
  }
  return;
}

