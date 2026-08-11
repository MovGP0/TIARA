/* Ghidra address: 0065dd00 */
/* Ghidra symbol: FUN_0065dd00 */


undefined8 FUN_0065dd00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x378) != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x378) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),iVar4);
        iVar1 = FUN_0043e420(*(undefined8 *)(lVar2 + 0x10),param_2);
        if (iVar1 == 0) {
          uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),iVar4);
          return uVar3;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

