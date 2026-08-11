/* Ghidra address: 01d6f270 */
/* Ghidra symbol: FUN_01d6f270 */


int FUN_01d6f270(longlong param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar1 = *(undefined1 **)(param_1 + 0x68);
  cVar2 = FUN_00dd56d0(*(undefined8 *)
                        (*(longlong *)(puVar1 + 0x20) + -8 + (longlong)(param_2 + 9) * 8),*puVar1);
  if (cVar2 == puVar1[0x6e]) {
    iVar3 = 1;
    do {
      cVar2 = FUN_00dd56d0(*(undefined8 *)(*(longlong *)(puVar1 + 0x20) + -8 + (longlong)iVar3 * 8),
                           *puVar1);
      if (cVar2 == puVar1[0x6e]) {
        iVar4 = iVar4 + 1;
      }
      if (iVar3 < 8) {
        iVar4 = iVar4 * 2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 9);
  }
  else {
    cVar2 = FUN_015f74b0(*(undefined8 *)(param_1 + 0x60));
    if (cVar2 == '\0') {
      iVar4 = 0xff;
    }
    else {
      iVar4 = FUN_015f7660(*(undefined8 *)(param_1 + 0x60),param_2,param_3,3);
    }
  }
  return iVar4;
}

