/* Ghidra address: 019a1120 */
/* Ghidra symbol: FUN_019a1120 */


void FUN_019a1120(longlong param_1,undefined8 param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint local_2c;
  
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar6);
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((sVar2 == 0x39) && ((char)plVar3[0x34] == '\x01')) &&
           (*(longlong *)(plVar3[0x35] + 8) != 0)) {
          uVar4 = *(undefined8 *)(plVar3[0x35] + 8);
          FUN_019af590(uVar4,*(undefined8 *)(param_1 + 0x230));
          FUN_019a1120(uVar4,param_2,param_3,param_4);
        }
        if ((sVar2 == 0x39) && ((char)plVar3[0x34] != '\x01')) {
          lVar5 = plVar3[0x35];
          if (*(longlong *)(param_1 + 0x230) == 0) {
            uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,
                                 L"TCircuit._GetHDLMacroKind: session_folder is not set");
            lVar5 = FUN_004134c0(uVar4);
          }
          if ((lVar5 != 0) &&
             ((*(char *)(lVar5 + 0x70) == '\x03' || (*(char *)(lVar5 + 0x70) == '\x04')))) {
            FUN_015f5a30(*(undefined8 *)(param_1 + 0x230),plVar3,param_2,&local_2c,param_4);
            *param_3 = *param_3 | local_2c;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

