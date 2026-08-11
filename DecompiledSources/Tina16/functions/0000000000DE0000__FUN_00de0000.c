/* Ghidra address: 00de0000 */
/* Ghidra symbol: FUN_00de0000 */


void FUN_00de0000(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  int local_1c;
  
  local_30 = auStack_58;
  local_28 = 0;
  FUN_0065f000(param_1,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_0041b800(&local_28);
    local_1c = (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x20))
                         (*(longlong **)(param_1 + 0x4b0),uVar2);
    if ((local_1c != 0) || (local_28 == 0)) {
      if (param_1 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = param_1 + 0x570;
      }
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x18))
                        (*(longlong **)(param_1 + 0x4b0),lVar3);
      FUN_006245b0(uVar1);
    }
    if (*(longlong *)(param_1 + 0x4c0) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x28))
                (*(longlong **)(param_1 + 0x4c0),0xffffffff);
    }
  }
  FUN_0041b800(&local_28);
  return;
}

