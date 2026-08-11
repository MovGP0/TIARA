/* Ghidra address: 00b4fd10 */
/* Ghidra symbol: FUN_00b4fd10 */


void FUN_00b4fd10(undefined8 param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_00b4e330(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar2 = FUN_00b4fc70(param_1,iVar1);
      if ((((param_2 <= *(ushort *)(lVar2 + 0x48)) && (*(ushort *)(lVar2 + 0x48) <= param_3)) &&
          (param_4 <= *(ushort *)(lVar2 + 0x4a))) && (*(ushort *)(lVar2 + 0x4a) <= param_5)) {
        FUN_00b4e700(lVar2);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}

