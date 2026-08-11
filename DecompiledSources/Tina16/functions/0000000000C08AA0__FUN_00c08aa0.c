/* Ghidra address: 00c08aa0 */
/* Ghidra symbol: FUN_00c08aa0 */


undefined8 FUN_00c08aa0(longlong param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x5e8) + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar2 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),iVar4);
        cVar1 = FUN_00c11270(uVar2);
        if ((cVar1 != '\0') &&
           (lVar3 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),iVar4),
           *(int *)(lVar3 + 0x24) == param_2)) {
          lVar3 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),iVar4);
          *param_3 = *(undefined4 *)(lVar3 + 0xc);
          lVar3 = FUN_00c11460(*(undefined8 *)(param_1 + 0x5e8),iVar4);
          *param_4 = *(undefined4 *)(lVar3 + 8);
          return 1;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

