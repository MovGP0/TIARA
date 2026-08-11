/* Ghidra address: 00842290 */
/* Ghidra symbol: FUN_00842290 */


ulonglong FUN_00842290(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  ulonglong uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  pcVar4 = (code *)FUN_00411550(uVar1,0xffc5);
  cVar2 = (*pcVar4)(uVar1);
  if (cVar2 == '\0') {
    uVar5 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x78) >> 8),
                     *(int *)(*(longlong *)(param_1 + 0x78) + 4) <= *(int *)(param_1 + 0x48));
  }
  else {
    iVar3 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x40));
    iVar3 = iVar3 - *(int *)(*(longlong *)(param_1 + 0x78) + 4);
    uVar5 = (ulonglong)CONCAT31((int3)((uint)iVar3 >> 8),*(int *)(param_1 + 0x48) <= iVar3);
  }
  return uVar5;
}

