/* Ghidra address: 019597b0 */
/* Ghidra symbol: FUN_019597b0 */


void FUN_019597b0(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 char param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  int local_34;
  int local_30;
  int local_2c;
  
  if (param_6 == 0) {
    param_6 = 1;
  }
  local_2c = param_4 - param_2;
  if (local_2c == 0) {
    local_2c = param_6;
  }
  iVar6 = param_5 - param_3;
  if (param_5 - param_3 == 0) {
    iVar6 = param_6;
  }
  plVar3 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*plVar3 + 0x88))(plVar3,local_2c);
  (**(code **)(*plVar3 + 0x70))(plVar3,iVar6);
  lVar4 = FUN_00609e10(plVar3);
  FUN_005fdab0(*(undefined8 *)(lVar4 + 0x80),0);
  lVar4 = FUN_00609e10(plVar3);
  FUN_005fd4e0(*(undefined8 *)(lVar4 + 0x78),0);
  uVar2 = FUN_005fdaa0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x88) + 0x80));
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x88) + 0x80),
               *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x10));
  local_34 = 0;
  if (-1 < local_2c) {
    do {
      local_30 = 0;
      if (-1 < iVar6) {
        do {
          if (param_6 < 2) {
            plVar5 = (longlong *)FUN_00609e10(plVar3);
            (**(code **)(*plVar5 + 0x40))(plVar5,local_34,local_30,0);
          }
          else if (param_7 == '\0') {
            plVar5 = (longlong *)FUN_00609e10(plVar3);
            (**(code **)(*plVar5 + 0xf8))
                      (plVar5,local_34,local_30,local_34 + param_6,local_30 + param_6);
          }
          else {
            plVar5 = (longlong *)FUN_00609e10(plVar3);
            (**(code **)(*plVar5 + 0xa0))
                      (plVar5,local_34,local_30,local_34 + param_6,local_30 + param_6);
          }
          local_30 = local_30 + param_6 * 2;
        } while (local_30 <= iVar6);
      }
      local_34 = local_34 + param_6 * 2;
    } while (local_34 <= local_2c);
  }
  uVar1 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x88) + 0x90);
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x88) + 0x90) = 0xb8074a;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x88);
  (**(code **)(*plVar5 + 0x88))(plVar5,param_2 - param_6 / 2,param_3 - param_6 / 2,plVar3);
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x88) + 0x80),uVar2);
  *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x88) + 0x90) = uVar1;
  FUN_00410f20(plVar3);
  return;
}

