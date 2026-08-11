/* Ghidra address: 00c22e40 */
/* Ghidra symbol: FUN_00c22e40 */


void FUN_00c22e40(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_004b89e0(param_2,*(undefined8 *)(param_1 + 8),(longlong)(*(int *)(param_1 + 0x10) * 3));
    bVar1 = FUN_00c239c0(param_1);
    local_1b = 0;
    local_1a = 0;
    local_19 = 0;
    for (iVar2 = (1 << (bVar1 & 0x1f)) - *(int *)(param_1 + 0x10); 0 < iVar2; iVar2 = iVar2 + -1) {
      FUN_004b89e0(param_2,&local_1b,3);
    }
  }
  return;
}

