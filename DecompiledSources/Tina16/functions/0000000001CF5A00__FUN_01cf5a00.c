/* Ghidra address: 01cf5a00 */
/* Ghidra symbol: FUN_01cf5a00 */


longlong *
FUN_01cf5a00(longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4,
            undefined2 param_5,undefined4 param_6)

{
  undefined2 uVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  plVar6 = (longlong *)FUN_00410920(param_1,local_res10);
  if (plVar6 != (longlong *)0xffffffffffffffff) {
    FUN_017bdbf0(plVar6,0);
    sVar3 = FUN_01d39f20(CONCAT62((int6)((param_4 & 0xffffffff) >> 0x10),
                                  (short)(param_4 & 0xffffffff) + -0x201));
    *(short *)((longlong)plVar6 + 0xba) = sVar3;
    if (sVar3 == 0) {
      param_1 = (longlong *)FUN_004109a0(plVar6,local_res10[0]);
    }
    else {
      iVar5 = FUN_01cfd2d0(plVar6);
      lVar7 = FUN_00409570((longlong)iVar5);
      plVar6[0x19] = lVar7;
      FUN_01cfdfc0(plVar6,0,1);
      *(undefined1 *)(plVar6 + 0x34) = 0;
      plVar6[0x35] = 0;
      lVar7 = FUN_0173bdb0(plVar6);
      plVar6[0x33] = lVar7;
      FUN_017feb40(plVar6);
      FUN_01d04c10(plVar6);
      uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (uVar4 < 0x100) {
        uVar4 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (uVar4 < 0xa8) {
          bVar8 = ((byte)(&LAB_01cf5c00)[(longlong)(ulonglong)uVar4 >> 3] >> ((ulonglong)uVar4 & 7)
                  & 1) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          *(undefined1 *)(plVar6 + 0x12) = 1;
        }
      }
      cVar2 = '\0';
      iVar5 = FUN_01d31a40(*param_3);
      if (iVar5 == 0) {
        cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,param_3,param_4 & 0xffffffff,param_5,param_6);
      }
      if ((cVar2 == '\0') && (iVar5 = FUN_01d31a40(*param_3), iVar5 == 0)) {
        uVar1 = *(undefined2 *)((longlong)plVar6 + 0xee);
        *(undefined2 *)((longlong)plVar6 + 0xee) = 0;
        plVar6[0x1b] = 0;
        lVar7 = plVar6[0x1e];
        *(undefined2 *)(plVar6 + 0x1e) = 0;
        plVar6[0x1c] = 0;
        FUN_01d01990(plVar6,uVar1);
        FUN_01d01aa0(plVar6,(short)lVar7);
        plVar6[0x2d] = 0;
        plVar6[0xa5] = 0;
        *(undefined4 *)((longlong)plVar6 + 0x154) = 0xffffffff;
        *(undefined1 *)(plVar6 + 0x2b) = 0;
        FUN_01d04aa0(plVar6,0);
        *(undefined1 *)(plVar6 + 0xa6) = 1;
        return plVar6;
      }
      param_1 = (longlong *)FUN_004109a0(plVar6,local_res10[0]);
    }
  }
  return param_1;
}

