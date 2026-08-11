/* Ghidra address: 0060ba60 */
/* Ghidra symbol: FUN_0060ba60 */


void FUN_0060ba60(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b0;
  longlong local_a0;
  undefined8 local_98 [13];
  undefined8 local_30;
  
  local_b0 = auStack_e8;
  if (*(longlong *)(param_1[0xc] + 0x20) != param_2) {
    local_a0 = param_1[0xc];
    if ((param_2 == 0) && (*(int *)(local_a0 + 8) == 1)) {
      local_b0 = auStack_e8;
      FUN_005fb100(*(undefined8 *)(local_a0 + 0x20));
      *(undefined8 *)(local_a0 + 0x20) = 0;
    }
    else {
      FUN_0060a440(param_1);
      FUN_0060a460(param_1);
      puVar2 = (undefined8 *)(local_a0 + 0x40);
      puVar3 = local_98;
      for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      local_c8 = 0;
      local_30 = FUN_00607e60(*(undefined8 *)(local_a0 + 0x10),*(undefined8 *)(local_a0 + 0x20),
                              param_2,local_98);
      local_c8 = CONCAT71(local_c8._1_7_,*(undefined1 *)(local_a0 + 0x39));
      local_c0 = 0;
      FUN_0060ab20(param_1,local_30,param_2,local_98);
    }
    FUN_00607cd0(*(undefined8 *)(param_1[0xc] + 0x28),param_2,param_1[0xc] + 0x40);
    *(undefined1 *)((longlong)param_1 + 0x3a) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

