/* Ghidra address: 0060b9b0 */
/* Ghidra symbol: FUN_0060b9b0 */


void FUN_0060b9b0(longlong *param_1,byte param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 local_a0 [2];
  ushort local_90;
  ushort local_8e;
  undefined4 local_80;
  ushort local_74;
  ushort local_72;
  
  lVar1 = param_1[0xc];
  if ((*(short *)(lVar1 + 0x6c) == 1) && (*(short *)(lVar1 + 0x6e) == 1)) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  if (param_2 != bVar2) {
    FUN_0060a460(param_1);
    puVar4 = (undefined8 *)(lVar1 + 0x40);
    puVar5 = local_a0;
    for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    local_80 = 0;
    local_90 = (ushort)param_2;
    local_8e = local_90;
    local_74 = local_90;
    local_72 = local_90;
    FUN_00608f90(param_1,*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x20),local_a0);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

