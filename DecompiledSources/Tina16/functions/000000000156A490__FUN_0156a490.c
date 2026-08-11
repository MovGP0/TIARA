/* Ghidra address: 0156a490 */
/* Ghidra symbol: FUN_0156a490 */


void FUN_0156a490(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40 [2];
  
  iVar4 = *(int *)(param_2 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_2,iVar3);
      cVar1 = FUN_015755e0(*(undefined8 *)(param_1 + 0x8d0),*(undefined4 *)(lVar2 + 0x30),local_40);
      if ((cVar1 != '\0') && (cVar1 = FUN_01574cc0(local_40[0]), cVar1 != '\0')) {
        FUN_004ae7e0(param_3,lVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

