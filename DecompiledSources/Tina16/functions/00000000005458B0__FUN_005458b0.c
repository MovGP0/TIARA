/* Ghidra address: 005458b0 */
/* Ghidra symbol: FUN_005458b0 */


undefined8 FUN_005458b0(longlong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_30 = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    local_40 = auStack_68;
    FUN_004192a0(param_2,*(undefined8 *)(param_1 + 0x20),&DAT_0052f588);
  }
  else {
    puVar1 = auStack_68;
    if (DAT_020116b8 == 0) {
      DAT_020116b8 = FUN_00410e60(&DAT_00401a88,1);
      puVar1 = local_40;
    }
    local_40 = puVar1;
    if (*(longlong *)PTR_PTR_02002ff8 == 0) {
      FUN_004098e0(0x1a);
    }
    uVar2 = FUN_004121f0(DAT_020116b8);
    FUN_00411f00(uVar2,0xffffffff);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_004192a0(param_2,*(undefined8 *)(param_1 + 0x20),&DAT_0052f588);
    }
    else {
      if (**(short **)(param_1 + 0x28) != 2) {
        lVar3 = FUN_00410e60(&DAT_00534928,1);
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          lVar3 = lVar3 + 0x28;
        }
        FUN_0041b840(param_1 + 0x18,lVar3);
        FUN_005439a0(&local_48,*(undefined8 *)(param_1 + 0x28));
        FUN_004194b0(param_1 + 0x20,local_48,&DAT_0052f588);
        FUN_004194b0(&local_30,*(undefined8 *)(param_1 + 0x20),&DAT_0052f588);
        local_28 = 0;
        while( true ) {
          local_38 = local_30;
          if (local_30 != 0) {
            local_38 = *(ulonglong *)(local_30 - 8);
          }
          if (local_38 <= local_28) break;
          local_20 = *(undefined8 *)(local_30 + local_28 * 8);
          (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
                    (*(longlong **)(param_1 + 0x18),local_20);
          local_28 = local_28 + 1;
        }
        FUN_00419430(&local_30,&DAT_0052f588);
        *(undefined8 *)(param_1 + 0x28) = 0;
        FUN_004192a0(param_2,*(undefined8 *)(param_1 + 0x20),&DAT_0052f588);
        if (DAT_020116b8 == 0) {
          DAT_020116b8 = FUN_00410e60(&DAT_00401a88,1);
        }
        FUN_00412130(DAT_020116b8);
        goto LAB_00545ae7;
      }
      FUN_00419430(param_1 + 0x20,&DAT_0052f588);
      *(undefined8 *)(param_1 + 0x28) = 0;
      FUN_00419430(param_2,&DAT_0052f588);
    }
    FUN_00545b20(0,local_40);
  }
LAB_00545ae7:
  FUN_00419430(&local_48,&DAT_0052f588);
  FUN_00419430(&local_30,&DAT_0052f588);
  return param_2;
}

