/* Ghidra address: 00b58f80 */
/* Ghidra symbol: FUN_00b58f80 */


undefined4 FUN_00b58f80(longlong param_1,undefined2 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  uVar2 = 0;
  iVar1 = FUN_00b573b0();
  iVar5 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_00b57390(*(undefined8 *)(param_1 + 0x28),iVar5);
      if (*(char *)(lVar3 + 0x20) != '\0') {
        uVar4 = FUN_00b57390(*(undefined8 *)(param_1 + 0x28),iVar5);
        uVar2 = FUN_00b223b0(uVar4,param_2,param_3,param_4);
        if ((char)uVar2 != '\0') {
          return uVar2;
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar2;
}

