/* Ghidra address: 019a1420 */
/* Ghidra symbol: FUN_019a1420 */


undefined1 FUN_019a1420(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 local_41;
  byte local_2d;
  undefined1 local_2c [4];
  
  local_41 = 0;
  iVar6 = *(int *)(param_1 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_1,iVar5);
      if (*param_2 != 0) {
        return 1;
      }
      cVar1 = FUN_0198a580(plVar4);
      if (cVar1 == '\x04') {
        sVar3 = (**(code **)(*plVar4 + 0xf8))(plVar4);
        bVar2 = FUN_015f5c70(*(undefined8 *)(param_1 + 0x230),plVar4,0x1ffff,local_2c,&local_2d);
        if ((local_2d & bVar2) != 0) {
          *param_2 = (longlong)plVar4;
          return 1;
        }
        if (((sVar3 == 0x39) && ((char)plVar4[0x34] == '\x01')) &&
           (*(longlong *)(plVar4[0x35] + 8) != 0)) {
          local_41 = FUN_019a1420(*(undefined8 *)(plVar4[0x35] + 8),param_2);
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return local_41;
}

