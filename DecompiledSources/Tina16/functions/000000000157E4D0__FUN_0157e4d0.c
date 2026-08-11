/* Ghidra address: 0157e4d0 */
/* Ghidra symbol: FUN_0157e4d0 */


void FUN_0157e4d0(longlong *param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 local_res18 [2];
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 local_8c [28];
  undefined2 local_70;
  longlong local_52;
  undefined1 local_4a [66];
  
  local_e0 = auStack_108;
  local_e8 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00417580(local_8c,&DAT_015764a8);
  FUN_00417580(local_4a,&DAT_015764a8);
  if (*(byte *)(param_1 + 1) < 8) {
    bVar2 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 1) & 0x1f) &
            0xcU) != 0;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    uVar1 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02004a30);
    FUN_004134c0(uVar1);
  }
  FUN_00417740(local_4a,&DAT_015764a8);
  local_98 = param_1[6];
  if (*(uint *)(local_98 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  FUN_00417c40(local_4a,*(longlong *)(local_98 + 8) + (longlong)(int)param_2 * 0x42,&DAT_015764a8);
  FUN_00417c40(local_8c,local_4a,&DAT_015764a8);
  FUN_00417740(local_4a,&DAT_015764a8);
  FUN_0157d600(local_8c,(char)param_1[9]);
  uVar1 = (**(code **)(*param_1 + 0x28))(param_1,local_8c);
  FUN_00459ca0(uVar1,&local_e8,local_res18[0]);
  FUN_004194b0(&local_52,local_e8,&DAT_00406578);
  local_a0 = local_52;
  local_a8 = local_52;
  if (local_52 != 0) {
    local_a8 = *(longlong *)(local_52 + -8);
  }
  if (0xffff < local_a8) {
    FUN_00419260(&local_52,&DAT_00406578,1,0xffff);
  }
  local_b0 = local_52;
  local_b8 = local_52;
  if (local_52 != 0) {
    local_b8 = *(longlong *)(local_52 + -8);
  }
  local_70 = (undefined2)local_b8;
  local_c0 = param_1[6];
  local_c8 = local_8c;
  FUN_00595470(local_c0 + 8,local_c8,param_2);
  FUN_00419430(&local_e8,&DAT_00406578);
  FUN_00417840(local_8c,&DAT_015764a8,2);
  FUN_00414480(local_res18);
  return;
}

