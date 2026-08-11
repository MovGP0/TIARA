/* Ghidra address: 0065ed10 */
/* Ghidra symbol: FUN_0065ed10 */


void FUN_0065ed10(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if ((char)param_2 == '\0') {
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xffffdfff;
  }
  else {
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x2000;
  }
  if (*(longlong *)(param_1 + 0x378) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x378) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),iVar2);
        FUN_0065ed10(uVar1,param_2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

