/* Ghidra address: 018140f0 */
/* Ghidra symbol: FUN_018140f0 */


void FUN_018140f0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
  }
  local_20 = 0;
  local_res20 = param_4;
  puVar1 = auStack_58;
  if (param_4 == 0) {
    local_20 = FUN_01804390(&DAT_01802268,1);
    local_res20 = *(longlong *)(local_20 + 0x28);
    *(undefined1 *)(local_20 + 8) = 1;
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01813e80(auStack_58,local_res20,param_2);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar2 = FUN_01803a30(*(undefined8 *)(local_20 + 0x28));
    FUN_00414ad0(lVar2 + 0x20,L"FrxCustomData");
    (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x70),lVar2);
  }
  if (local_20 != 0) {
    FUN_01804950(local_20,*(undefined8 *)(param_1 + 0x38));
  }
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  return;
}

