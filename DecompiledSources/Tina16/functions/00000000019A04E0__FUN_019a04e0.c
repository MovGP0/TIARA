/* Ghidra address: 019a04e0 */
/* Ghidra symbol: FUN_019a04e0 */


undefined1 FUN_019a04e0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 local_29;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_1,iVar5);
      cVar2 = FUN_0198a580(plVar4);
      if (cVar2 == '\x04') {
        sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        cVar2 = FUN_015f5c70(*(undefined8 *)(param_1 + 0x230),plVar4,param_2,param_3,&local_29);
        if (((sVar3 == 0x39) && ((char)plVar4[0x34] == '\x01')) &&
           (*(longlong *)(plVar4[0x35] + 8) != 0)) {
          uVar1 = *(undefined8 *)(plVar4[0x35] + 8);
          FUN_019af590(uVar1,*(undefined8 *)(param_1 + 0x230));
          cVar2 = FUN_019a04e0(uVar1,param_2,param_3);
        }
        if (cVar2 != '\0') {
          return 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

