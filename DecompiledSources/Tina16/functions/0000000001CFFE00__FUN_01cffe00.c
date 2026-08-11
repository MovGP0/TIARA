/* Ghidra address: 01cffe00 */
/* Ghidra symbol: FUN_01cffe00 */


void FUN_01cffe00(longlong param_1)

{
  undefined2 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 local_42 [2];
  undefined4 local_40;
  undefined4 local_3c [3];
  
  uVar1 = *(undefined2 *)(param_1 + 0xec);
  plVar6 = (longlong *)FUN_01d013c0(param_1,0);
  do {
    cVar2 = FUN_01d3d920(plVar6,0xe,0,local_42);
    if (cVar2 != '\0') {
      iVar4 = (**(code **)(*plVar6 + 0x1c8))();
      iVar7 = 0;
      if (-1 < iVar4 + -1) {
        do {
          if (*(char *)(*(longlong *)(param_1 + 0x168) + (ulonglong)*(ushort *)(param_1 + 0xec) * 99
                        + 3 + (longlong)iVar7 * 2) == '\0') {
            cVar2 = *(char *)(*(longlong *)(param_1 + 0x168) +
                              (ulonglong)*(ushort *)(param_1 + 0xec) * 99 + 4 + (longlong)iVar7 * 2)
            ;
            if (cVar2 == '\0') {
              uVar5 = 4;
            }
            else {
              uVar5 = FUN_01d3e4a0(param_1,cVar2);
            }
            bVar3 = FUN_01d3e5c0(plVar6,iVar7 + 1,local_3c,&local_40);
            if ((bVar3 & cVar2 != '\0') != 0) {
              FUN_01d3e530(plVar6,local_3c[0],local_40,uVar5);
            }
          }
          iVar7 = iVar7 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
    FUN_01d018f0(param_1);
    plVar6 = (longlong *)FUN_01d013c0(param_1,0);
  } while (plVar6 != (longlong *)0x0);
  *(undefined2 *)(param_1 + 0xec) = uVar1;
  return;
}

