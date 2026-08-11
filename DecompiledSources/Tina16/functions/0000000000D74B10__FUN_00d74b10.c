/* Ghidra address: 00d74b10 */
/* Ghidra symbol: FUN_00d74b10 */


void FUN_00d74b10(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  longlong local_50;
  longlong local_48;
  undefined1 local_39;
  longlong *local_38;
  longlong *local_30;
  uint local_28 [2];
  undefined8 local_20;
  
  local_60 = auStack_b8;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  puVar1 = auStack_b8;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_50 = *(longlong *)(param_1 + 8);
    FUN_00d73240(local_50);
    FUN_00d57480(&local_68,param_2);
    FUN_00414ad0(local_50 + 0x78,local_68);
    FUN_00d57480(&local_70,param_2);
    FUN_00414ad0(local_50 + 0x88,local_70);
    FUN_00d57480(&local_78,param_2);
    FUN_00414ad0(local_50 + 0x90,local_78);
    FUN_00d57480(&local_80,param_2);
    FUN_00414ad0(local_50 + 0x98,local_80);
    FUN_00d57480(&local_88,param_2);
    FUN_00414ad0(local_50 + 0x80,local_88);
    iVar2 = FUN_00414f50(param_1 + 0x10,s_VCL_STYLE_1_0VCL_STYLE_2_0_01ecf378 + 0xd,0xd);
    if (iVar2 == 0) {
      FUN_004b84c0(param_2,local_50 + 0xa8,1);
      FUN_004b84c0(param_2,local_50 + 0xa9,1);
      FUN_00d57480(&local_90,param_2);
      FUN_00414ad0(local_50 + 0xb0,local_90);
    }
    else {
      *(undefined1 *)(local_50 + 0xa8) = 0;
      *(undefined1 *)(local_50 + 0xa9) = 0;
      FUN_00414480(local_50 + 0xb0);
    }
    (**(code **)(*param_2 + 0x18))(param_2,&local_48,8);
    if (local_48 == 0) {
      (**(code **)(**(longlong **)(local_50 + 0xa0) + 0x90))(*(longlong **)(local_50 + 0xa0));
    }
    else {
      local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
      FUN_004b8ba0(local_20,param_2,local_48);
      FUN_004b6dc0(local_20,0);
      (**(code **)(**(longlong **)(local_50 + 0xa0) + 0xe8))
                (*(longlong **)(local_50 + 0xa0),local_20);
      FUN_00410f20(local_20);
    }
    (**(code **)(*param_2 + 0x18))(param_2,local_28,4);
    FUN_004aef40(*(undefined8 *)(local_50 + 0xc0),local_28[0]);
    local_28[1] = 0;
    uVar3 = local_28[0];
    if (-1 < (int)(local_28[0] - 1)) {
      do {
        local_38 = (longlong *)FUN_00d58750(&PTR_FUN_00d55dd8,1);
        (**(code **)(*local_38 + 0xc0))(local_38,param_2);
        (**(code **)(*param_2 + 0x18))(param_2,&local_39,1);
        (**(code **)(*local_38 + 0x80))(local_38,0);
        (**(code **)(*param_2 + 0x18))(param_2,&local_39,1);
        FUN_004ae7e0(*(undefined8 *)(local_50 + 0xc0),local_38);
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    (**(code **)(*param_2 + 0x18))(param_2,local_28,4);
    FUN_004aef40(*(undefined8 *)(local_50 + 0xb8),local_28[0]);
    local_28[1] = 0;
    uVar3 = local_28[0];
    if (-1 < (int)(local_28[0] - 1)) {
      do {
        local_30 = (longlong *)FUN_00d75780(param_2,0);
        if (local_30 != (longlong *)0x0) {
          FUN_004ae7e0(*(undefined8 *)(local_50 + 0xb8),local_30);
          FUN_00d77e50(local_30);
          (**(code **)(*local_30 + 0xa0))(local_30);
        }
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    (**(code **)(**(longlong **)(local_50 + 200) + 0x20))(*(longlong **)(local_50 + 200),param_2);
    (**(code **)(**(longlong **)(local_50 + 0xd0) + 0x20))(*(longlong **)(local_50 + 0xd0),param_2);
    (**(code **)(**(longlong **)(local_50 + 0xd8) + 0x20))(*(longlong **)(local_50 + 0xd8),param_2);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  FUN_00414560(&local_90,6);
  return;
}

