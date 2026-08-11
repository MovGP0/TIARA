/* Ghidra address: 008975c0 */
/* Ghidra symbol: FUN_008975c0 */


undefined4 FUN_008975c0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
  short *psVar1;
  char cVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined8 in_stack_ffffffffffffff08;
  uint uVar10;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90 [2];
  longlong local_88;
  short *local_80;
  undefined4 local_78;
  undefined4 *local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  short *local_48;
  undefined1 local_3b;
  undefined2 local_3a;
  undefined8 local_38;
  undefined4 local_2c [3];
  
  uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff08 >> 0x20);
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_38 = 0;
  local_48 = (short *)0x0;
  local_98 = 0;
  cVar2 = FUN_00879990(5,1);
  if (cVar2 == '\0') {
    uVar9 = 0;
    if (*param_3 != 0) {
      uVar9 = *(ulonglong *)(*param_3 + -8);
    }
    local_2c[0] = (**(code **)(*param_1 + 0x198))
                            (param_1,param_2,param_3,uVar9 & 0xffffffff,(ulonglong)uVar10 << 0x20,
                             &local_38,&local_3a,&local_3b);
    FUN_0089b6f0(param_4);
    FUN_00414ad0(param_4 + 8,local_38);
    *(undefined2 *)(param_4 + 0x10) = local_3a;
    *(undefined1 *)(param_4 + 0x18) = local_3b;
    *(undefined1 *)(param_4 + 0x30) = local_3b;
  }
  else {
    uVar5 = 0;
    if (*param_3 != 0) {
      uVar5 = *(undefined8 *)(*param_3 + -8);
    }
    uVar5 = FUN_0088eec0(uVar5);
    uVar5 = FUN_0088eec0(uVar5);
    FUN_00419260(&local_98,&DAT_0086e978,1,uVar5);
    local_90[0] = 0;
    if (*param_3 != 0) {
      local_90[0] = (undefined4)*(undefined8 *)(*param_3 + -8);
    }
    local_88 = *param_3;
    FUN_0040d200(&local_80,0x38,0);
    local_70 = local_90;
    local_68 = 1;
    local_60 = (undefined4)uVar5;
    local_58 = local_98;
    FUN_00419260(&local_48,&DAT_0086e978,1,0x80);
    psVar1 = local_48;
    local_80 = local_48;
    local_78 = 0;
    if (local_48 != (short *)0x0) {
      local_78 = (undefined4)*(undefined8 *)(local_48 + -4);
    }
    uVar4 = (**(code **)PTR_PTR_02001940)(param_2,&local_80,local_2c,0,0);
    FUN_0089c9c0(param_1,uVar4);
    FUN_0089b6f0(param_4);
    if (*psVar1 == 2) {
      FUN_00891ce0(param_1,&local_a0,psVar1 + 2,0);
      FUN_00414ad0(param_4 + 8,local_a0);
      uVar3 = (**(code **)PTR_PTR_02002a90)(psVar1[1]);
      *(undefined2 *)(param_4 + 0x10) = uVar3;
      *(undefined1 *)(param_4 + 0x18) = 0;
    }
    else if (*psVar1 == 0x17) {
      FUN_00891ce0(param_1,&local_a8,psVar1 + 4,1);
      FUN_00414ad0(param_4 + 8,local_a8);
      uVar3 = (**(code **)PTR_PTR_02002a90)(psVar1[1]);
      *(undefined2 *)(param_4 + 0x10) = uVar3;
      *(undefined1 *)(param_4 + 0x18) = 1;
    }
    else {
      local_2c[0] = 0;
      FUN_0089bf30(param_1);
    }
    lVar6 = 0;
    while (lVar6 = FUN_0088ee50(&local_80,lVar6), lVar6 != 0) {
      if (*(int *)(lVar6 + 0xc) == 0x13) {
        if (*psVar1 == 2) {
          lVar7 = FUN_0088eeb0(lVar6);
          FUN_00891ce0(param_1,&local_b0,lVar7,0);
          FUN_00414ad0(param_4 + 0x20,local_b0);
          *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(lVar7 + 4);
          *(undefined1 *)(param_4 + 0x30) = 0;
        }
        else if (*psVar1 == 0x17) {
          lVar7 = FUN_0088eeb0(lVar6);
          FUN_00891ce0(param_1,&local_b8,lVar7,1);
          FUN_00414ad0(param_4 + 0x20,local_b8);
          *(undefined4 *)(param_4 + 0x2c) = *(undefined4 *)(lVar7 + 0x10);
          *(undefined1 *)(param_4 + 0x30) = 1;
        }
      }
      else if (*(int *)(lVar6 + 0xc) == 0x15) {
        puVar8 = (undefined1 *)FUN_0088eeb0(lVar6);
        *(undefined1 *)(param_4 + 0x31) = *puVar8;
      }
    }
  }
  FUN_00414560(&local_b8,4);
  FUN_00419430(&local_98,&DAT_0086e978);
  FUN_00419430(&local_48,&DAT_0086e978);
  FUN_00414480(&local_38);
  return local_2c[0];
}

