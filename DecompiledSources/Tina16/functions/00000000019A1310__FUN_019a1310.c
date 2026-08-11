/* Ghidra address: 019a1310 */
/* Ghidra symbol: FUN_019a1310 */


void FUN_019a1310(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_1,iVar5);
      cVar2 = FUN_0198a580(plVar4);
      if (cVar2 == '\x04') {
        sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        if (((sVar3 == 0x39) && ((char)plVar4[0x34] == '\x01')) &&
           (*(longlong *)(plVar4[0x35] + 8) != 0)) {
          uVar1 = *(undefined8 *)(plVar4[0x35] + 8);
          FUN_019af590(uVar1,*(undefined8 *)(param_1 + 0x230));
          FUN_019a1310(uVar1,param_2,param_3);
        }
        if (((sVar3 == 0x39) && ((char)plVar4[0x34] != '\x01')) &&
           (*(char *)(plVar4[0x35] + 0x70) == param_3)) {
          FUN_004ae7e0(param_2,plVar4);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

