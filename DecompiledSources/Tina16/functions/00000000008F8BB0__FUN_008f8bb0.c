/* Ghidra address: 008f8bb0 */
/* Ghidra symbol: FUN_008f8bb0 */


undefined8 FUN_008f8bb0(longlong param_1,undefined8 param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = 0;
  uVar3 = 0;
  iVar4 = *(int *)(param_1 + 0xc) + -1;
  if (-1 < iVar4) {
    do {
      uVar5 = uVar3 + iVar4 >> 1;
      iVar1 = FUN_008f7250(*(undefined8 *)
                            (*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar5 * 0x10),param_2);
      if (iVar1 < 0) {
        uVar3 = uVar5 + 1;
      }
      else {
        iVar4 = uVar5 - 1;
        if ((iVar1 == 0) && (uVar2 = 1, *(char *)(param_1 + 0x10) != '\x01')) {
          uVar3 = uVar5;
        }
      }
    } while ((int)uVar3 <= iVar4);
  }
  *param_3 = uVar3;
  return uVar2;
}

