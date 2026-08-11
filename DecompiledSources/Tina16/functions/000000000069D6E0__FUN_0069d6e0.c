/* Ghidra address: 0069d6e0 */
/* Ghidra symbol: FUN_0069d6e0 */


void FUN_0069d6e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_0069e100(param_1);
  uVar1 = FUN_0069df70(param_1);
  lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,uVar1);
  uVar4 = FUN_00416740(*(undefined8 *)(lVar3 + 0x10));
  FUN_004424b0(param_2,uVar4);
  uVar4 = FUN_00416740(*(undefined8 *)(lVar3 + 8));
  FUN_004424b0(param_3,uVar4);
  uVar4 = FUN_00416740(*(undefined8 *)(lVar3 + 0x18));
  FUN_004424b0(param_4,uVar4);
  *param_5 = *(undefined8 *)(param_1 + 0x58);
  return;
}

