/* Ghidra address: 015c3da0 */
/* Ghidra symbol: FUN_015c3da0 */


undefined1 FUN_015c3da0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 local_19;
  
  local_19 = 0;
  uVar4 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x280) + 8));
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x280) + 8),param_2);
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x280) + 8);
  lVar5 = (**(code **)*puVar1)(puVar1);
  lVar6 = FUN_004b6da0(*(undefined8 *)(*(longlong *)(param_1 + 0x280) + 8));
  if (0x1d < lVar5 - lVar6) {
    FUN_004b84c0(*(undefined8 *)(*(longlong *)(param_1 + 0x280) + 8),param_1 + 0x232,0x1e);
    FUN_00415d10(param_1 + 0x228,*(undefined2 *)(param_1 + 0x24c),0);
    uVar7 = FUN_00415ab0(*(undefined8 *)(param_1 + 0x228));
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x280) + 8);
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,uVar7,*(undefined2 *)(param_1 + 0x24c));
    if (((uVar3 == *(ushort *)(param_1 + 0x24c)) &&
        ((*(int *)(param_1 + 0x232) == 0x4034b50 || (*(int *)(param_1 + 0x232) == 0x5045c61)))) &&
       ((param_2 == 0 ||
        ((((*(int *)(param_1 + 0x240) == *(int *)(param_1 + 0x20a) &&
           (*(short *)(param_1 + 0x236) == *(short *)(param_1 + 0x200))) &&
          (*(short *)(param_1 + 0x23a) == *(short *)(param_1 + 0x204))) &&
         (((*(short *)(param_1 + 0x23c) == *(short *)(param_1 + 0x206) &&
           (*(short *)(param_1 + 0x23e) == *(short *)(param_1 + 0x208))) &&
          ((*(int *)(param_1 + 0x244) == *(int *)(param_1 + 0x20e) &&
           (*(int *)(param_1 + 0x248) == *(int *)(param_1 + 0x212))))))))))) {
      local_19 = 1;
    }
  }
  FUN_004b6dc0(*(undefined8 *)(*(longlong *)(param_1 + 0x280) + 8),uVar4);
  return local_19;
}

