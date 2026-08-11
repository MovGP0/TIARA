/* Ghidra address: 00abf7f0 */
/* Ghidra symbol: FUN_00abf7f0 */


void FUN_00abf7f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x10); iVar3 = iVar3 + 1) {
    lVar2 = FUN_004aeac0(param_1,iVar3);
    cVar1 = FUN_004113d0(lVar2,&DAT_00abf6c0);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0xe8))
                (*(longlong **)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),
                 *(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                 *(undefined4 *)(lVar2 + 0x20),*(undefined8 *)(lVar2 + 0x28));
    }
  }
  return;
}

