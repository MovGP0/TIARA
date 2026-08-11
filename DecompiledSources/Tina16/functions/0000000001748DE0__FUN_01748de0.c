/* Ghidra address: 01748de0 */
/* Ghidra symbol: FUN_01748de0 */


longlong *
FUN_01748de0(undefined8 param_1,longlong *param_2,int param_3,int param_4,undefined8 param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 extraout_AH;
  undefined1 extraout_var;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_4c;
  double local_48;
  double local_40 [2];
  
  plVar7 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*plVar7 + 0x88))(plVar7,uVar4);
  uVar4 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*plVar7 + 0x70))(plVar7,uVar4);
  FUN_0060bbf0(plVar7,6);
  FUN_00526090(param_5,local_40,&local_48);
  iVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
  iVar5 = iVar5 + -1;
  if (-1 < iVar5) {
    do {
      lVar8 = FUN_0060a050(plVar7,iVar5);
      iVar13 = (iVar5 - param_4) * 2 + 1;
      local_4c = (**(code **)(*plVar7 + 0x60))(plVar7);
      local_4c = local_4c + -1;
      if (-1 < local_4c) {
        do {
          iVar11 = (local_4c - param_3) * 2 + 1;
          iVar6 = FUN_0040c770((double)iVar11 * local_48 - (double)iVar13 * local_40[0]);
          iVar11 = FUN_0040c770((double)iVar11 * local_40[0] + (double)iVar13 * local_48);
          iVar6 = (iVar6 + -1) / 2 + param_3;
          iVar12 = (iVar11 + -1) / 2 + param_4;
          if (iVar6 < 0) {
LAB_01748f8d:
            plVar10 = (longlong *)FUN_00609e10(param_2);
            uVar3 = (**(code **)(*plVar10 + 0x30))(plVar10,0,0);
            lVar9 = (longlong)local_4c;
            *(undefined1 *)(lVar8 + 2 + lVar9 * 3) = uVar3;
            plVar10 = (longlong *)FUN_00609e10(param_2);
            (**(code **)(*plVar10 + 0x30))(plVar10,0,0);
            *(undefined1 *)(lVar8 + 1 + lVar9 * 3) = extraout_AH;
            plVar10 = (longlong *)FUN_00609e10(param_2);
            (**(code **)(*plVar10 + 0x30))(plVar10,0,0);
            *(undefined1 *)(lVar8 + lVar9 * 3) = extraout_var;
          }
          else {
            iVar11 = (**(code **)(*param_2 + 0x60))
                               (param_2,(longlong)(iVar11 + -1) % 2 & 0xffffffff);
            if ((iVar11 + -1 < iVar6) || (iVar12 < 0)) goto LAB_01748f8d;
            iVar11 = (**(code **)(*param_2 + 0x48))(param_2);
            if (iVar11 + -1 < iVar12) goto LAB_01748f8d;
            lVar9 = FUN_0060a050(param_2,iVar12);
            puVar1 = (undefined2 *)(lVar8 + (longlong)local_4c * 3);
            puVar2 = (undefined2 *)(lVar9 + (longlong)iVar6 * 3);
            *puVar1 = *puVar2;
            *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
          }
          local_4c = local_4c + -1;
        } while (local_4c != -1);
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  (**(code **)(*plVar7 + 0x80))(plVar7,1);
  plVar10 = (longlong *)FUN_00609e10(param_2);
  uVar4 = (**(code **)(*plVar10 + 0x30))(plVar10,0,0);
  FUN_0060be30(plVar7,uVar4);
  FUN_00410f20(param_2);
  return plVar7;
}

