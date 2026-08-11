/* Ghidra address: 01576400 */
/* Ghidra symbol: FUN_01576400 */


char FUN_01576400(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 8));
  iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x10),&DAT_0157644c);
  if (iVar3 == 0) {
    if (*(int *)(lVar1 + 0x18) < 0) {
      cVar2 = -1 - *(char *)(lVar1 + 0x18);
    }
    else {
      cVar2 = '\x04';
    }
  }
  else {
    cVar2 = '\x04';
  }
  return cVar2;
}

