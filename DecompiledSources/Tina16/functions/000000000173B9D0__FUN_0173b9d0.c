/* Ghidra address: 0173b9d0 */
/* Ghidra symbol: FUN_0173b9d0 */


undefined8
FUN_0173b9d0(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4,
            undefined4 param_5,undefined4 param_6,longlong *param_7,int param_8,undefined8 param_9,
            undefined4 param_10,undefined1 param_11,char param_12,undefined1 param_13,
            undefined8 param_14)

{
  undefined4 uVar1;
  longlong local_res18;
  ulonglong local_res20;
  undefined4 in_stack_ffffffffffffff50;
  uint uVar2;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar4;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar5;
  undefined8 in_stack_ffffffffffffff70;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c [3];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_3);
  FUN_0041b910(local_res20);
  FUN_00414610(param_9);
  FUN_00414610(param_14);
  FUN_0041b800(param_1);
  if (param_7 != (longlong *)0x0) {
    if (param_8 == 0) {
      local_2c = (**(code **)(*param_7 + 0xd0))(param_7,0);
    }
    else {
      if ((*(ushort *)(param_7 + 0x2c) & 1) == 0) {
        local_2c = (**(code **)(*param_7 + 0xd8))(param_7,param_10);
      }
      else {
        local_2c = (**(code **)(*param_7 + 0xd0))(param_7,0xf);
      }
      if ((*(ushort *)(param_7 + 0x2c) & 4) != 0) {
        local_2c = (**(code **)(*param_7 + 0xd0))(param_7,0);
      }
    }
  }
  if (param_12 == '\0') {
    uVar1 = 300;
  }
  else {
    uVar1 = 700;
  }
  uVar2 = CONCAT31((int3)((uint)in_stack_ffffffffffffff50 >> 8),local_res18 == 0);
  FUN_01d048c0(param_2,param_5,param_6,&local_20,local_1c,uVar2,1);
  if (param_7 != (longlong *)0x0) {
    uVar4 = 0x3ff91eb8;
    FUN_01a98770(param_7,local_20,local_1c[0],param_11,1,uVar2 & 0xffffff00,0x3ff91eb851eb851f,
                 0x3ff91eb851eb851f,CONCAT44(uVar5,local_2c),
                 CONCAT44(uVar7,*(undefined4 *)((longlong)param_7 + 0xfc)),uVar1,param_13,0,param_14
                 ,param_9,0,1);
  }
  if (local_res18 != 0) {
    uVar5 = 0x3ff91eb8;
    uVar3 = CONCAT44(uVar4,param_10);
    uVar6 = local_res20;
    FUN_01244970(&param_9,&local_20,local_1c,0,param_11,1,0x3ff91eb851eb851f,uVar3,local_res18,
                 local_res20);
    FUN_012444f0(param_1,local_res18,local_res20,param_9,param_14,local_20,
                 CONCAT44(uVar5,local_1c[0]),uVar3 & 0xffffffff00000000,0x11,
                 uVar6 & 0xffffffffffffff00,param_13,param_10);
  }
  FUN_0041b800(&local_res18);
  FUN_0041b800(&local_res20);
  FUN_00414480(&param_9);
  FUN_00414480(&param_14);
  return param_1;
}

