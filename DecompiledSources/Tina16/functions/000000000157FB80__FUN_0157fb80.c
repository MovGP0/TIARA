/* Ghidra address: 0157fb80 */
/* Ghidra symbol: FUN_0157fb80 */


void FUN_0157fb80(longlong param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  FUN_0157fc90(param_1);
  if (param_3 == 0) {
    uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_020014f0);
    FUN_004134c0(uVar1);
  }
  if (param_3 == 1) {
    lVar2 = (**(code **)*param_2)(param_2);
    if (lVar2 == 0) {
      uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_020050b8);
      FUN_004134c0(uVar1);
    }
  }
  *(undefined8 **)(param_1 + 0x10) = param_2;
  uVar1 = FUN_004b6da0(param_2);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  if (param_3 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (param_3 & 0x1f) & 6U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_0157e010(param_1);
  }
  *(byte *)(param_1 + 8) = param_3;
  return;
}

