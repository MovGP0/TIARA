/* Ghidra address: 010b3670 */
/* Ghidra symbol: FUN_010b3670 */


undefined4 FUN_010b3670(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 unaff_RSI;
  int iVar6;
  
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10));
  if ((((iVar2 == 0) &&
       (cVar1 = FUN_004b33d0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20)),
       cVar1 != '\0')) &&
      (*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) ==
       *(int *)(*(longlong *)(param_2 + 0x18) + 0x10))) &&
     ((cVar1 = FUN_01b23730(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_2 + 0x30)),
      cVar1 != '\0' && (cVar1 = FUN_0043e2c0(param_1 + 0x28,param_2 + 0x28,6), cVar1 != '\0')))) {
    uVar5 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  if ((char)uVar5 != '\0') {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar6);
        uVar4 = FUN_004aeac0(*(undefined8 *)(param_2 + 0x18),iVar6);
        cVar1 = FUN_010aebe0(uVar3,uVar4);
        if (cVar1 == '\0') {
          return 0;
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return uVar5;
}

