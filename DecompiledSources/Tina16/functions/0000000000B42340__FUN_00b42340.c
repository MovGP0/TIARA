/* Ghidra address: 00b42340 */
/* Ghidra symbol: FUN_00b42340 */


void FUN_00b42340(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  short sVar8;
  undefined4 local_30;
  ushort local_2a;
  
  iVar4 = FUN_004b6da0(param_2);
  for (sVar8 = *(short *)(param_1 + 0x21); sVar8 != 0; sVar8 = sVar8 + -1) {
    iVar5 = FUN_00b258c0(param_2);
    if (5 < iVar5) {
      FUN_00b256e0(param_2,&local_2a);
      FUN_00b25710(param_2,&local_30);
      uVar1 = local_2a & 0x4000;
      uVar2 = local_2a & 0x8000;
      local_2a = local_2a & 0x3fff;
      if ((((local_2a == 0x104) && (uVar1 != 0)) && (uVar2 == 0)) &&
         (iVar5 = FUN_00b41f80(param_1), 0 < iVar5)) {
        iVar5 = FUN_00b41f80(param_1);
        uVar6 = FUN_00b41f60(param_1,iVar5 + -1);
        cVar3 = FUN_004113d0(uVar6,&DAT_00b40220);
        if (cVar3 != '\0') {
          iVar5 = FUN_00b41f80(param_1);
          lVar7 = FUN_00b41f60(param_1,iVar5 + -1);
          *(undefined4 *)(lVar7 + 0x38) = local_30;
        }
      }
    }
  }
  iVar5 = FUN_004b6da0(param_2);
  FUN_00b257f0(param_2,*(int *)(param_1 + 0x25) - (iVar5 - iVar4));
  return;
}

