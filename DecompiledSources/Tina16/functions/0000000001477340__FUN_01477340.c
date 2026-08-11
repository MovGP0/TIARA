/* Ghidra address: 01477340 */
/* Ghidra symbol: FUN_01477340 */


void FUN_01477340(longlong param_1,char param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_c8 [39];
  char local_a1;
  undefined8 *local_a0;
  undefined8 *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_30 = *(longlong *)(param_1 + 0x208);
  local_a1 = param_2;
  local_a0 = param_3;
  local_98 = param_4;
  local_90 = param_1;
  iVar1 = (**(code **)(**(longlong **)(local_30 + 8) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(local_30 + 8) + 0x18))
                (*(longlong **)(local_30 + 8),&local_38,iVar6);
      iVar2 = FUN_004170c0(&DAT_014776bc,local_38,1);
      FUN_00416dc0(&local_40,local_38,1,iVar2 + -1);
      iVar2 = FUN_004170c0(&DAT_014776cc,local_38,1);
      if (iVar2 < 1) {
        iVar2 = FUN_004170c0(&DAT_014776bc,local_38,1);
        uVar5 = 0;
        if (local_38 != 0) {
          uVar5 = *(undefined4 *)(local_38 + -4);
        }
        FUN_00416dc0(&local_48,local_38,iVar2 + 1,uVar5);
      }
      else {
        iVar2 = FUN_004170c0(&DAT_014776bc,local_38,1);
        iVar3 = FUN_004170c0(&DAT_014776cc,local_38,1);
        iVar4 = FUN_004170c0(&DAT_014776bc,local_38,1);
        FUN_00416dc0(&local_48,local_38,iVar2 + 1,(iVar3 - iVar4) + -1);
      }
      if (local_a1 == '\0') {
        FUN_0043e130(&local_80,local_40);
        iVar2 = FUN_00416db0(local_80,L"PARAM_CHANGE");
        if (iVar2 == 0) {
          FUN_014771f0(auStack_c8,iVar6,*local_a0);
        }
        FUN_0043e130(&local_88,local_40);
        iVar2 = FUN_00416db0(local_88,L"DRAW_DIAGRAM");
        if (iVar2 == 0) {
          FUN_014771f0(auStack_c8,iVar6,*local_98);
        }
      }
      else {
        FUN_0043e130(local_70,local_40);
        iVar2 = FUN_00416db0(local_70[0],L"PARAM_CHANGE");
        if (iVar2 == 0) {
          FUN_00414ad0(local_a0,local_48);
          FUN_014771f0(auStack_c8,iVar6,&DAT_01477704);
        }
        FUN_0043e130(&local_78,local_40);
        iVar2 = FUN_00416db0(local_78,L"DRAW_DIAGRAM");
        if (iVar2 == 0) {
          FUN_00414ad0(local_98,local_48);
          FUN_014771f0(auStack_c8,iVar6,&DAT_0147773c);
        }
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_88,4);
  FUN_00414560(&local_60,6);
  return;
}

