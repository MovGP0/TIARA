/* Ghidra address: 017b7ed0 */
/* Ghidra symbol: FUN_017b7ed0 */


longlong * FUN_017b7ed0(undefined8 param_1,longlong *param_2,char param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int local_30;
  int local_2c;
  
  plVar7 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
  (**(code **)(*plVar7 + 0x88))(plVar7,uVar3);
  uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)(*plVar7 + 0x70))(plVar7,uVar3);
  FUN_0060bbf0(plVar7,6);
  iVar4 = (**(code **)(*plVar7 + 0x48))();
  local_2c = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar8 = FUN_0060a050(plVar7,local_2c);
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      local_30 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar9 = FUN_0060a050(param_2,local_30);
          if (param_3 == '\0') {
            iVar6 = (**(code **)(*plVar7 + 0x60))(plVar7);
            puVar1 = (undefined2 *)(lVar8 + (longlong)((iVar6 - local_30) + -1) * 3);
            puVar2 = (undefined2 *)(lVar9 + (longlong)local_2c * 3);
            *puVar1 = *puVar2;
            *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
          }
          else {
            iVar6 = (**(code **)(*plVar7 + 0x48))(plVar7);
            puVar1 = (undefined2 *)(lVar8 + (longlong)local_30 * 3);
            puVar2 = (undefined2 *)(lVar9 + (longlong)((iVar6 - local_2c) + -1) * 3);
            *puVar1 = *puVar2;
            *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
          }
          local_30 = local_30 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      local_2c = local_2c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00410f20(param_2);
  return plVar7;
}

