/* Ghidra address: 01a9ee80 */
/* Ghidra symbol: FUN_01a9ee80 */


longlong * FUN_01a9ee80(undefined8 param_1,longlong *param_2,char param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *local_38;
  int local_30;
  int local_2c;
  
  local_38 = param_2;
  if ((param_3 != '\0') && (param_3 != '\x02')) {
    local_38 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
    (**(code **)(*local_38 + 0x88))(local_38,uVar3);
    uVar3 = (**(code **)(*param_2 + 0x60))(param_2);
    (**(code **)(*local_38 + 0x70))(local_38,uVar3);
    FUN_0060bbf0(local_38,6);
    iVar4 = (**(code **)(*local_38 + 0x48))();
    local_2c = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar6 = FUN_0060a050(local_38,local_2c);
        iVar5 = (**(code **)(*local_38 + 0x60))();
        local_30 = 0;
        if (-1 < iVar5 + -1) {
          do {
            lVar7 = FUN_0060a050(param_2,local_30);
            puVar1 = (undefined2 *)(lVar6 + (longlong)local_30 * 3);
            puVar2 = (undefined2 *)(lVar7 + (longlong)local_2c * 3);
            *puVar1 = *puVar2;
            *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
            local_30 = local_30 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_2c = local_2c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(param_2);
  }
  return local_38;
}

