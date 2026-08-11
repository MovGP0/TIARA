/* Ghidra address: 00b59060 */
/* Ghidra symbol: FUN_00b59060 */


ulonglong FUN_00b59060(longlong param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  int iVar4;
  
  iVar1 = FUN_00b4e330(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 != 0) {
    *param_2 = 0xffff;
    *(undefined1 *)(param_2 + 2) = 0xff;
    param_2[1] = 0;
    *(undefined1 *)((longlong)param_2 + 5) = 0;
    iVar2 = FUN_00b4e330();
    iVar4 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x10),iVar4);
        if (param_2[1] < *(ushort *)(lVar3 + 0x48)) {
          lVar3 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x10),iVar4);
          param_2[1] = *(ushort *)(lVar3 + 0x48);
        }
        lVar3 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x10),iVar4);
        if ((ushort)*(byte *)((longlong)param_2 + 5) < *(ushort *)(lVar3 + 0x4a)) {
          lVar3 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x10),iVar4);
          *(undefined1 *)((longlong)param_2 + 5) = *(undefined1 *)(lVar3 + 0x4a);
        }
        lVar3 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x10),iVar4);
        if (*(ushort *)(lVar3 + 0x48) < *param_2) {
          lVar3 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x10),iVar4);
          *param_2 = *(ushort *)(lVar3 + 0x48);
        }
        lVar3 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x10),iVar4);
        if (*(ushort *)(lVar3 + 0x4a) < (ushort)(byte)param_2[2]) {
          lVar3 = FUN_00b4fc70(*(undefined8 *)(param_1 + 0x10),iVar4);
          *(undefined1 *)(param_2 + 2) = *(undefined1 *)(lVar3 + 0x4a);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar1 != 0) & 0xffffffff;
}

