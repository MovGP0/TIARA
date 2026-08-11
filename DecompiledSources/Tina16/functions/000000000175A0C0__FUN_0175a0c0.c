/* Ghidra address: 0175a0c0 */
/* Ghidra symbol: FUN_0175a0c0 */


void FUN_0175a0c0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  int local_78;
  int local_74;
  undefined1 local_63 [2];
  undefined1 local_61;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  
  local_4c = *param_3;
  uStack_44 = param_3[1];
  uStack_3c = *(undefined4 *)(param_3 + 2);
  iVar1 = (**(code **)(*param_2 + 0x48))();
  local_74 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar4 = FUN_0060a050(param_2,local_74);
      iVar2 = (**(code **)(*param_2 + 0x60))();
      local_78 = 0;
      if (-1 < iVar2 + -1) {
        do {
          iVar8 = 5;
          puVar6 = &DAT_01f9b2ac;
          puVar7 = &local_4c;
          do {
            lVar5 = (longlong)local_78;
            _local_63 = CONCAT12(*(undefined1 *)(lVar4 + lVar5 * 3),
                                 CONCAT11(*(undefined1 *)(lVar4 + 1 + lVar5 * 3),
                                          *(undefined1 *)(lVar4 + 2 + lVar5 * 3)));
            uVar3 = FUN_005fbf20(*puVar6);
            if (_local_63 == uVar3) {
              *(char *)(lVar4 + 2 + lVar5 * 3) = (char)*(undefined4 *)puVar7;
              *(char *)(lVar4 + 1 + (longlong)local_78 * 3) =
                   (char)((uint)*(undefined4 *)puVar7 >> 8);
              *(char *)(lVar4 + (longlong)local_78 * 3) =
                   (char)((uint)*(undefined4 *)puVar7 >> 0x10);
            }
            puVar7 = (undefined8 *)((longlong)puVar7 + 4);
            puVar6 = puVar6 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          local_78 = local_78 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      local_74 = local_74 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

