/* Ghidra address: 019ce470 */
/* Ghidra symbol: FUN_019ce470 */


void FUN_019ce470(longlong param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  bVar2 = cVar1 != '\0';
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  if (cVar1 != '\0') {
    bVar2 = bVar2 | 2;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  if (cVar1 != '\0') {
    bVar2 = bVar2 | 4;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x260))(*(longlong **)(param_1 + 0x6f0));
  if (cVar1 != '\0') {
    bVar2 = bVar2 | 8;
  }
  FUN_01a593b0(*(undefined8 *)PTR_DAT_02002c38,bVar2);
  return;
}

