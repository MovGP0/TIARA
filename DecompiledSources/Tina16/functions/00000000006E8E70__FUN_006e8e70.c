/* Ghidra address: 006e8e70 */
/* Ghidra symbol: FUN_006e8e70 */


undefined4 FUN_006e8e70(longlong *param_1,undefined8 param_2,int param_3,int *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_2c;
  
  local_70 = auStack_b8;
  local_80 = 0;
  local_78 = 0;
  local_58 = 0;
  local_2c = 0;
  plVar1 = (longlong *)*param_1;
  local_48 = param_1[1];
  local_40 = param_1[2];
  local_38 = param_1[3];
  *param_4 = 0;
  puVar3 = auStack_b8;
  local_50 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    FUN_00419260(&local_58,&DAT_00406578,1,(longlong)param_3);
    FUN_00409a70(param_2,local_58,(longlong)param_3);
    lVar2 = local_38;
    if ((char)local_40 != '\0') {
      if (local_38 == 0) {
        uVar6 = FUN_0045adf0();
        uVar7 = FUN_00458d50();
        local_98 = local_58;
        FUN_00458ac0(&PTR_FUN_0043a338,&local_78,uVar6,uVar7);
        FUN_004194b0(&local_58,local_78,&DAT_00406578);
      }
      else {
        plVar8 = (longlong *)FUN_0045adf0();
        cVar4 = (**(code **)(*plVar8 + -0x70))(plVar8,lVar2);
        if (cVar4 == '\0') {
          uVar6 = FUN_0045adf0();
          local_98 = local_58;
          FUN_00458ac0(&PTR_FUN_0043a338,&local_80,uVar6,lVar2);
          FUN_004194b0(&local_58,local_80,&DAT_00406578);
        }
      }
    }
    local_60 = local_58;
    if (local_58 != 0) {
      local_60 = *(ulonglong *)(local_58 - 8);
    }
    iVar5 = (**(code **)(*plVar1 + 0x10))(plVar1,local_48,local_58,local_60 & 0xffffffff);
    *param_4 = iVar5;
    puVar3 = local_70;
    if (*param_4 != param_3) {
      local_68 = local_58;
      if (local_58 != 0) {
        local_68 = *(ulonglong *)(local_58 - 8);
      }
      if ((longlong)*param_4 == local_68) {
        *param_4 = param_3;
      }
    }
  }
  local_70 = puVar3;
  FUN_00417840(&local_80,&DAT_00406578,2);
  FUN_00419430(&local_58,&DAT_00406578);
  return local_2c;
}

