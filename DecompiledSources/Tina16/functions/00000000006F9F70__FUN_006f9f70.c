/* Ghidra address: 006f9f70 */
/* Ghidra symbol: FUN_006f9f70 */


byte FUN_006f9f70(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (((*(char *)((longlong)param_1 + 0x31a) != '\0') &&
      (bVar3 = DAT_01e023be, *(char *)((longlong)param_1 + 0x33a) == '\x01')) &&
     (cVar2 = (**(code **)(*param_1 + 0xf0))(param_1), bVar3 = 0, cVar2 != '\0')) {
    bVar3 = DAT_01e023bc;
  }
  cVar2 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (((cVar2 != '\0') || ((char)param_1[0x67] != '\0')) &&
     ((plVar1 = (longlong *)param_1[0x68], plVar1 == (longlong *)0x0 ||
      (cVar2 = (**(code **)(*plVar1 + 0xf0))(plVar1), cVar2 != '\0')))) {
    bVar3 = bVar3 | DAT_01e023c0;
  }
  if ((*(char *)((longlong)param_1 + 0xa9) == '\0') &&
     ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
    bVar3 = bVar3 | DAT_01e023c2;
  }
  if (((char)param_1[100] != '\0') || ((char)param_1[0x67] != '\0')) {
    bVar3 = bVar3 | DAT_01e023c4;
  }
  if (*(char *)((longlong)param_1 + 0x339) != '\0') {
    bVar3 = bVar3 | DAT_01e023c6;
  }
  if (*(char *)((longlong)param_1 + 0x321) != '\0') {
    bVar3 = bVar3 | DAT_01e023ca;
  }
  return bVar3;
}

