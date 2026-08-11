/* Ghidra address: 015811e0 */
/* Ghidra symbol: FUN_015811e0 */


void FUN_015811e0(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_158 [40];
  undefined1 *local_130;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  char local_101;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined1 local_da [4];
  ushort local_d6;
  undefined4 local_c6;
  longlong *local_98;
  undefined1 local_8c [20];
  int local_78;
  undefined1 local_4a [20];
  undefined4 local_36;
  
  local_130 = auStack_158;
  *param_3 = 0;
  FUN_00417580(local_da,&DAT_015764a8);
  FUN_00417580(local_4a,&DAT_015764a8);
  FUN_00417580(local_8c,&DAT_015764a8);
  uVar3 = FUN_00417740(local_da,&DAT_015764a8);
  FUN_01581660(param_1,param_2,&local_98,uVar3);
  if ((local_d6 & 8) == 0) {
    FUN_00417740(local_4a,&DAT_015764a8);
    local_f8 = *(longlong *)(param_1 + 0x30);
    if (*(uint *)(local_f8 + 0x10) <= param_2) {
      FUN_00594f90();
    }
    FUN_00417c40(local_4a,*(longlong *)(local_f8 + 8) + (longlong)(int)param_2 * 0x42,&DAT_015764a8)
    ;
    FUN_00419260(param_3,&DAT_00406578,1,local_36);
    FUN_00417740(local_4a,&DAT_015764a8);
    FUN_00417740(local_8c,&DAT_015764a8);
    local_100 = *(longlong *)(param_1 + 0x30);
    if (*(uint *)(local_100 + 0x10) <= param_2) {
      FUN_00594f90();
    }
    FUN_00417c40(local_8c,*(longlong *)(local_100 + 8) + (longlong)(int)param_2 * 0x42,&DAT_015764a8
                );
    local_101 = local_78 != 0;
    FUN_00417740(local_8c,&DAT_015764a8);
    if (local_101 != '\0') {
      FUN_0157c8d0(local_98,*param_3,local_c6);
    }
  }
  else {
    FUN_00419260(param_3,&DAT_00406578,1,0x1000);
    local_e8 = 0;
    while( true ) {
      local_110 = *param_3;
      if (local_110 != 0) {
        local_110 = *(longlong *)(local_110 + -8);
      }
      iVar2 = (**(code **)(*local_98 + 0x18))
                        (local_98,*param_3 + local_e8,(int)local_110 - (int)local_e8);
      local_f0 = (longlong)iVar2;
      lVar1 = *param_3;
      local_118 = lVar1;
      if (lVar1 != 0) {
        local_118 = *(longlong *)(lVar1 + -8);
      }
      if (local_f0 < local_118 - local_e8) break;
      local_e8 = local_e8 + local_f0;
      local_120 = lVar1;
      if (lVar1 != 0) {
        local_120 = *(longlong *)(lVar1 + -8);
      }
      FUN_00419260(param_3,&DAT_00406578,1,local_120 * 2);
    }
    FUN_00419260(param_3,&DAT_00406578,1,local_e8 + local_f0);
  }
  FUN_00410f20(local_98);
  FUN_00417740(local_da,&DAT_015764a8);
  FUN_00417840(local_8c,&DAT_015764a8,2);
  return;
}

