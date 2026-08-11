/* Ghidra address: 0060dda0 */
/* Ghidra symbol: FUN_0060dda0 */


void FUN_0060dda0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 local_40 [16];
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_48 = (undefined8 *)(param_1 + 0x50);
  uVar4 = *local_48;
  *local_48 = 0;
  local_58 = param_1;
  local_50 = param_2;
  FUN_00410f20(uVar4);
  FUN_004b9ec0(*(undefined8 *)(local_58 + 0x58));
  lVar2 = (**(code **)*local_50)(local_50);
  lVar3 = FUN_004b6da0(local_50);
  FUN_004b8ba0(*(undefined8 *)(local_58 + 0x58),local_50,lVar2 - lVar3);
  FUN_004b6dc0(*(undefined8 *)(local_58 + 0x58),0);
  lVar2 = FUN_004d4fa0(&PTR_FUN_0047dd60,1,*(undefined8 *)(local_58 + 0x58),0);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x28;
  }
  FUN_0041b840(local_20,lVar2);
  local_68 = FUN_0041b800(&local_28);
  uVar1 = (**(code **)(*DAT_02011f90 + 0x20))(DAT_02011f90,local_20[0],PTR_DAT_02003140,0);
  FUN_0060dd20(auStack_88,uVar1);
  uVar1 = (**(code **)(*local_28 + 0x28))(local_28,local_40);
  FUN_0060dd20(auStack_88,uVar1);
  FUN_0060e390(local_58,local_40);
  uVar4 = FUN_0041b800(&local_30);
  uVar1 = (**(code **)(*local_28 + 0x68))(local_28,0,uVar4);
  FUN_0060dd20(auStack_88,uVar1);
  uVar4 = FUN_0041b800(local_58 + 0x60);
  uVar1 = (**(code **)(*DAT_02011f90 + 0x90))(DAT_02011f90,local_30,2,uVar4);
  FUN_0060dd20(auStack_88,uVar1);
  uVar1 = (**(code **)(**(longlong **)(local_58 + 0x60) + 0x18))
                    (*(longlong **)(local_58 + 0x60),local_58 + 0x48,local_58 + 0x4c);
  FUN_0060dd20(auStack_88,uVar1);
  *(undefined1 *)(local_58 + 0x7c) = 0;
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  return;
}

