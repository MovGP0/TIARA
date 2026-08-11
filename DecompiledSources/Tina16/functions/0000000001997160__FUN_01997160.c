/* Ghidra address: 01997160 */
/* Ghidra symbol: FUN_01997160 */


longlong * FUN_01997160(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  plVar2 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0));
  (**(code **)(*plVar2 + 0x1f0))(plVar2,param_3,&local_2c,&local_30);
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar4 = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x68) + -1;
  if (iVar3 <= iVar4) {
    iVar4 = (iVar4 - iVar3) + 1;
    do {
      plVar2 = (longlong *)FUN_00b94e60(*(undefined8 *)(param_1 + 0xd0),iVar3);
      cVar1 = FUN_017c3740(plVar2);
      if ((cVar1 != '\0') &&
         (cVar1 = (**(code **)(*plVar2 + 0x98))
                            (plVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x210),local_2c,
                             local_30), cVar1 != '\0')) {
        return plVar2;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return (longlong *)0x0;
}

