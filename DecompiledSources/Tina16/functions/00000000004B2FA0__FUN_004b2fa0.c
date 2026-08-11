/* Ghidra address: 004b2fa0 */
/* Ghidra symbol: FUN_004b2fa0 */


void FUN_004b2fa0(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_28 = param_2;
  if (param_2 != 0) {
    local_28 = *(longlong *)(param_2 + -8);
  }
  local_30 = param_3;
  if (param_3 != 0) {
    local_30 = *(longlong *)(param_3 + -8);
  }
  local_48 = param_2;
  puVar1 = auStack_68;
  if (local_28 != local_30) {
    uVar2 = FUN_0044d710(&PTR_FUN_00434000,1,PTR_PTR_02005388);
    FUN_004134c0(uVar2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_004b3260(param_1);
  local_38 = local_48;
  if (local_48 != 0) {
    local_38 = *(longlong *)(local_48 + -8);
  }
  iVar3 = (int)local_38;
  local_1c = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(*param_1 + 0x80))
                (param_1,*(undefined8 *)(param_2 + (longlong)local_1c * 8),
                 *(undefined8 *)(param_3 + (longlong)local_1c * 8));
      local_1c = local_1c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004b3390(param_1);
  return;
}

