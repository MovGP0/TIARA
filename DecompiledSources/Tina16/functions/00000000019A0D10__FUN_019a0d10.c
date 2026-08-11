/* Ghidra address: 019a0d10 */
/* Ghidra symbol: FUN_019a0d10 */


void FUN_019a0d10(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined1 local_35;
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  
  iVar8 = *(int *)(param_1 + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_1,iVar7);
      cVar2 = FUN_0198a580(plVar5);
      if (cVar2 == '\x04') {
        sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if (((sVar3 == 0x39) && ((char)plVar5[0x34] == '\x01')) &&
           (*(longlong *)(plVar5[0x35] + 8) != 0)) {
          FUN_019a0d10(*(undefined8 *)(plVar5[0x35] + 8),param_2);
        }
        if ((sVar3 == 0x39) && ((char)plVar5[0x34] != '\x01')) {
          lVar1 = plVar5[0x35];
          if (*(longlong *)(param_1 + 0x230) == 0) {
            uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,
                                 L"TCircuit.GetHDLLineCount: session_folder is not set");
            FUN_004134c0(uVar6);
          }
          if (lVar1 != 0) {
            if ((*(char *)(lVar1 + 0x70) == '\x03') &&
               (cVar2 = FUN_015f5c70(*(undefined8 *)(param_1 + 0x230),plVar5,0xffff,local_2c,
                                     &local_35), cVar2 == '\0')) {
              uVar4 = FUN_015f5740(*(undefined8 *)(param_1 + 0x230),plVar5,local_2c,local_34,
                                   local_30);
              FUN_017761b0(lVar1,param_2,uVar4);
            }
            else if (*(char *)(lVar1 + 0x70) == '\x04') {
              uVar4 = FUN_015f5740(*(undefined8 *)(param_1 + 0x230),plVar5,local_2c,local_34,
                                   local_30);
              FUN_01778430(lVar1,param_2,uVar4);
            }
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

