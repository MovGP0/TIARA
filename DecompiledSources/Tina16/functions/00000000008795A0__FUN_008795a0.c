/* Ghidra address: 008795a0 */
/* Ghidra symbol: FUN_008795a0 */


undefined1 FUN_008795a0(undefined8 *param_1,longlong *param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong local_res20;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 *local_78;
  longlong *local_70;
  int local_68;
  undefined1 local_61;
  undefined8 local_60 [2];
  undefined8 local_50;
  char local_41;
  longlong local_40;
  undefined8 local_38;
  int local_2c [3];
  
  local_60[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_res20 = param_4;
  local_78 = param_1;
  local_70 = param_2;
  local_68 = param_3;
  FUN_0041b910(param_4);
  FUN_00414480(local_70);
  FUN_00419430(&local_40,&DAT_0086e978);
  if (local_68 < 0) {
    local_68 = 0x7fffffff;
  }
  lVar3 = FUN_004b6da0(local_78);
  lVar4 = (**(code **)*local_78)(local_78);
  if (lVar3 < lVar4) {
    FUN_00419260(&local_38,&DAT_0086e978,1,0x800);
    local_41 = '\0';
    do {
      uVar5 = lVar4 - lVar3;
      if (0x800 < (longlong)uVar5) {
        uVar5 = 0x800;
      }
      local_88 = local_88 & 0xffffffff00000000;
      local_2c[0] = FUN_0086e810(&LAB_0086e608,local_78,&local_38,uVar5 & 0xffffffff);
      if (local_2c[0] < 1) break;
      iVar1 = FUN_00879530(auStack_a8,local_38,local_2c,&local_41);
      lVar3 = lVar3 + local_2c[0];
      iVar2 = 0;
      if (*local_70 != 0) {
        iVar2 = *(int *)(*local_70 + -4);
      }
      if (local_68 < iVar2 + iVar1) {
        iVar1 = local_68 - iVar2;
        local_41 = '\x01';
        lVar3 = (lVar3 - local_2c[0]) + (longlong)iVar1;
      }
      if (0 < iVar1) {
        local_2c[0] = 0;
        if (local_40 != 0) {
          local_2c[0] = (int)*(undefined8 *)(local_40 + -8);
        }
        FUN_00419260(&local_40,&DAT_0086e978,1,(longlong)(local_2c[0] + iVar1));
        local_50 = local_38;
        FUN_00409a70(local_38,local_40 + local_2c[0],(longlong)iVar1);
      }
    } while (lVar3 < lVar4 && local_41 == '\0');
    FUN_004b6dc0(local_78,lVar3);
    local_88 = local_res20;
    FUN_008785a0(local_60,local_40,0,0xffffffff);
    FUN_00414ad0(local_70,local_60[0]);
    local_61 = 1;
  }
  else {
    local_61 = 0;
  }
  FUN_00414480(local_60);
  FUN_00417840(&local_40,&DAT_0086e978,2);
  FUN_0041b800(&local_res20);
  return local_61;
}

