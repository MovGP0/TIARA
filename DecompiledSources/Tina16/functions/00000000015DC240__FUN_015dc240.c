/* Ghidra address: 015dc240 */
/* Ghidra symbol: FUN_015dc240 */


void FUN_015dc240(longlong param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 *local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_a8;
  local_48 = 0;
  local_50 = 0;
  *param_4 = 0;
  if (*(longlong *)(param_1 + 0x1f0) == 0) {
    if (*(char *)(param_1 + 0x103) == '\x01') {
      local_40 = auStack_a8;
      local_20 = FUN_015c1c10(&DAT_015b87c8,1);
      FUN_015c1bf0(local_20,param_2);
      local_28 = FUN_015c1f20(*(undefined8 *)(param_1 + 0x108),local_20);
      FUN_00410f20(local_20);
      local_30 = FUN_015d9770(param_1,param_3);
      FUN_0041ddd0(&local_50,PTR_PTR_02002a10);
      local_70 = &local_28;
      local_68 = 0x10;
      local_60 = &local_30;
      local_58 = 0x10;
      FUN_00442f70(&local_48,local_50,&local_70,1);
      iVar1 = FUN_0072d440(local_48,3,0xc,0);
      *param_4 = iVar1 != 1;
    }
    else {
      uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x41,0);
      FUN_004134c0(uVar2);
    }
  }
  else {
    local_88 = param_4;
    local_40 = auStack_a8;
    (**(code **)(param_1 + 0x1f0))(*(undefined8 *)(param_1 + 0x1f8),param_1,param_2 + 1,param_3);
  }
  FUN_00414560(&local_50,2);
  return;
}

