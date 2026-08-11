/* Ghidra address: 01598dc0 */
/* Ghidra symbol: FUN_01598dc0 */


undefined8
FUN_01598dc0(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            char *param_7,int param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int local_res10;
  int local_res20;
  undefined4 local_28;
  
  local_28 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != s_1_2_5_01f68300[0])) || (param_8 != 0x54)) {
    uVar1 = 0xfffffffa;
  }
  else if (param_1 == 0) {
    uVar1 = 0xfffffffe;
  }
  else {
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(longlong *)(param_1 + 0x30) == 0) {
      *(code **)(param_1 + 0x30) = FUN_01596960;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(longlong *)(param_1 + 0x38) == 0) {
      *(code **)(param_1 + 0x38) = FUN_01596990;
    }
    local_res10 = param_2;
    if (param_2 == -1) {
      local_res10 = 6;
    }
    if (param_4 < 0) {
      local_28 = 0;
      local_res20 = -param_4;
    }
    else {
      local_res20 = param_4;
      if (0xf < param_4) {
        local_28 = 2;
        local_res20 = param_4 + -0x10;
      }
    }
    if (((((param_5 < 1) || (9 < param_5)) ||
         ((param_3 != 8 || ((local_res20 < 8 || (0xf < local_res20)))))) || (local_res10 < 0)) ||
       (((9 < local_res10 || (param_6 < 0)) || (4 < param_6)))) {
      uVar1 = 0xfffffffe;
    }
    else {
      if (local_res20 == 8) {
        local_res20 = 9;
      }
      plVar2 = (longlong *)(**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0x40),1,0x16f8);
      if (plVar2 == (longlong *)0x0) {
        uVar1 = 0xfffffffc;
      }
      else {
        *(longlong **)(param_1 + 0x28) = plVar2;
        *plVar2 = param_1;
        *(undefined4 *)((longlong)plVar2 + 0x24) = local_28;
        plVar2[5] = 0;
        *(int *)((longlong)plVar2 + 0x3d) = local_res20;
        *(int *)((longlong)plVar2 + 0x39) =
             1 << ((byte)*(undefined4 *)((longlong)plVar2 + 0x3d) & 0x1f);
        *(int *)((longlong)plVar2 + 0x41) = *(int *)((longlong)plVar2 + 0x39) + -1;
        *(int *)((longlong)plVar2 + 0x69) = param_5 + 7;
        *(int *)((longlong)plVar2 + 0x65) =
             1 << ((byte)*(undefined4 *)((longlong)plVar2 + 0x69) & 0x1f);
        *(int *)((longlong)plVar2 + 0x6d) = *(int *)((longlong)plVar2 + 0x65) + -1;
        *(uint *)((longlong)plVar2 + 0x71) = (*(int *)((longlong)plVar2 + 0x69) + 2U) / 3;
        uVar1 = (**(code **)(param_1 + 0x30))
                          (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar2 + 0x39),
                           2);
        *(undefined8 *)((longlong)plVar2 + 0x45) = uVar1;
        uVar1 = (**(code **)(param_1 + 0x30))
                          (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar2 + 0x39),
                           2);
        *(undefined8 *)((longlong)plVar2 + 0x51) = uVar1;
        uVar1 = (**(code **)(param_1 + 0x30))
                          (*(undefined8 *)(param_1 + 0x40),*(undefined4 *)((longlong)plVar2 + 0x65),
                           2);
        *(undefined8 *)((longlong)plVar2 + 0x59) = uVar1;
        *(undefined4 *)((longlong)plVar2 + 0x16f4) = 0;
        *(int *)((longlong)plVar2 + 0x16ce) = 1 << ((char)param_5 + 6U & 0x1f);
        lVar3 = (**(code **)(param_1 + 0x30))
                          (*(undefined8 *)(param_1 + 0x40),
                           *(undefined4 *)((longlong)plVar2 + 0x16ce),4);
        *(longlong *)((longlong)plVar2 + 0xc) = lVar3;
        *(int *)((longlong)plVar2 + 0x14) = *(int *)((longlong)plVar2 + 0x16ce) << 2;
        if (((*(longlong *)((longlong)plVar2 + 0x45) == 0) ||
            (*(longlong *)((longlong)plVar2 + 0x51) == 0)) ||
           ((*(longlong *)((longlong)plVar2 + 0x59) == 0 ||
            (*(longlong *)((longlong)plVar2 + 0xc) == 0)))) {
          *(undefined4 *)(plVar2 + 1) = 0x29a;
          *(undefined **)(param_1 + 0x20) = PTR_s_insufficient_memory_01f68278;
          FUN_01597eb0(param_1);
          uVar1 = 0xfffffffc;
        }
        else {
          *(ulonglong *)((longlong)plVar2 + 0x16d6) =
               lVar3 + ((ulonglong)*(uint *)((longlong)plVar2 + 0x16ce) / 2) * 2;
          *(ulonglong *)((longlong)plVar2 + 0x16c6) =
               (ulonglong)*(uint *)((longlong)plVar2 + 0x16ce) * 3 +
               *(longlong *)((longlong)plVar2 + 0xc);
          *(int *)((longlong)plVar2 + 0x9d) = local_res10;
          *(int *)((longlong)plVar2 + 0xa1) = param_6;
          *(undefined1 *)((longlong)plVar2 + 0x34) = 8;
          uVar1 = FUN_015986b0(param_1,(ulonglong)*(uint *)((longlong)plVar2 + 0x16ce) % 2);
        }
      }
    }
  }
  return uVar1;
}

