/* Ghidra address: 00809140 */
/* Ghidra symbol: FUN_00809140 */


void FUN_00809140(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(*(longlong **)(param_1 + 0x38));
  if ((((*(longlong *)(param_1 + 0x58) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) == 0)) &&
      ((*(ushort *)(*(longlong *)(param_1 + 0x58) + 0x34) & 0x10) == 0)) &&
     (((*(char *)(*(longlong *)(param_1 + 0x58) + 0xa9) != '\0' &&
       (*(char *)(*(longlong *)(param_1 + 0x58) + 0xad) == (char)param_2)) &&
      (*(char *)(*(longlong *)(param_1 + 0x58) + 0x4d2) != '\x01')))) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x58));
  }
  iVar2 = FUN_008080c0();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_008080a0(*(undefined8 *)(param_1 + 0x50),iVar5);
      if (((*(longlong *)(lVar3 + 0x78) == 0) && (*(char *)(lVar3 + 0xad) == (char)param_2)) &&
         (((*(ushort *)(lVar3 + 0x34) & 0x10) == 0 &&
          (((*(char *)(lVar3 + 0xa9) != '\0' && (*(char *)(lVar3 + 0x4d2) != '\x01')) &&
           (lVar3 != *(longlong *)(param_1 + 0x58))))))) {
        for (iVar6 = 0; iVar6 < *(int *)(*(longlong *)(param_1 + 0x38) + 0x10); iVar6 = iVar6 + 1) {
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar6);
          cVar1 = FUN_00808df0(param_1,lVar3,uVar4,param_2);
          if (cVar1 != '\0') break;
        }
        FUN_004aec30(*(undefined8 *)(param_1 + 0x38),iVar6,lVar3);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x10);
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),iVar5);
      FUN_00808eb0(param_1,uVar4,param_2);
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

