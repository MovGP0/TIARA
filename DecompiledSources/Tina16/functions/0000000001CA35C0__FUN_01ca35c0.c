/* Ghidra address: 01ca35c0 */
/* Ghidra symbol: FUN_01ca35c0 */


void FUN_01ca35c0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30 [2];
  longlong *local_20;
  
  local_50 = auStack_c8;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_90 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30[0] = (longlong *)0x0;
  local_40 = 0;
  local_20 = *(longlong **)(param_1 + 0x9e0);
  FUN_00414ad0(local_20 + 0x20,&DAT_01ca3a40);
  FUN_00414ad0(local_20 + 0x1c,L"XML File|*.XML");
  *(undefined4 *)(local_20 + 0x1d) = 1;
  cVar1 = (**(code **)(*local_20 + 0xa8))(local_20);
  if (cVar1 != '\0') {
    FUN_00bac3d0(local_30);
    (**(code **)(*local_30[0] + 0x118))(local_30[0],0);
    FUN_00724270(local_20,&local_58);
    cVar1 = (**(code **)(*local_30[0] + 0x170))(local_30[0],local_58);
    if (cVar1 != '\0') {
      (**(code **)(*local_30[0] + 0x100))(local_30[0],&local_60);
      if (local_60 != 0) {
        uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
        local_38 = FUN_0198b200(0,&PTR_FUN_01984d18,1,uVar2);
        if (local_38 != 0) {
          FUN_01293730(local_38,local_30[0],*(undefined8 *)PTR_DAT_02001f18,0);
          FUN_00417c40(PTR_DAT_02004010,local_38 + 0x492,&DAT_01d0d0b8);
          FUN_0199e310(local_38,0,1,0);
          *(longlong *)(param_1 + 0x27a8) = local_38;
          *(longlong *)(param_1 + 0x2788) = local_38;
          FUN_00724270(local_20,&local_68);
          FUN_004414c0(&local_40,local_68,L".TSC");
          FUN_014a1260(local_40,0);
          FUN_00414ad0(local_38 + 0x360,local_40);
          (**(code **)(**(longlong **)(param_1 + 0xa10) + 0x180))(*(longlong **)(param_1 + 0xa10));
          FUN_01c7d780(param_1,0);
          FUN_01c8ab30(param_1,0,0);
        }
        goto code_r0x01ca392c;
      }
    }
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_a0,0x593);
    FUN_00724270(local_20,&local_a8);
    local_88 = local_a8;
    local_80 = 0x11;
    FUN_00442f70(&local_98,local_a0,&local_88,0);
    FUN_016fd940(local_98);
  }
code_r0x01ca392c:
  FUN_00414480(&local_a8);
  FUN_00414560(&local_a0,2);
  FUN_00414480(&local_90);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_68);
  FUN_0041b800(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(&local_40);
  FUN_0041b800(local_30);
  return;
}

