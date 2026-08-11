/* Ghidra address: 00f0c7f0 */
/* Ghidra symbol: FUN_00f0c7f0 */


void FUN_00f0c7f0(longlong param_1)

{
  longlong *plVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  if ((*(double *)(param_1 + 0x7b0) <= 0.0) || (*(double *)(param_1 + 0x7a8) <= 0.0)) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8))
    ;
    uVar6 = FUN_01a8dc50(uVar4);
    if ((byte)uVar6 < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 6U) != 0;
    }
    else {
      bVar7 = false;
    }
    if ((bVar7) &&
       (*(undefined8 *)(param_1 + 0x7b0) = 0x3f50624dd2f1a9fc,
       *(double *)(param_1 + 0x7a8) <= *(double *)(param_1 + 0x7b0) &&
       *(double *)(param_1 + 0x7b0) != *(double *)(param_1 + 0x7a8))) {
      *(double *)(param_1 + 0x7a8) = *(double *)(param_1 + 0x7b0) + 0.001;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x6e8);
  if (*(double *)(param_1 + 0x7b0) <= 0.0) {
    uVar4 = (**(code **)(*plVar1 + 0x260))(plVar1);
    uVar6 = FUN_01a8dc50(uVar4);
    if ((byte)uVar6 < 8) {
      bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 6U) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      uVar2 = FUN_01a8dc20(0);
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
    }
  }
  uVar5 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  uVar3 = FUN_01a8dc20(1);
  if (uVar5 == uVar3) {
    uVar6 = FUN_00c44470(*(undefined8 *)(param_1 + 0x7b0),0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x710),uVar6);
    uVar6 = FUN_00c44470(*(undefined8 *)(param_1 + 0x7a8),0);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x718),uVar6);
  }
  else {
    FUN_00b90440(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x7b0));
    FUN_00b90440(*(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 0x7a8));
  }
  return;
}

