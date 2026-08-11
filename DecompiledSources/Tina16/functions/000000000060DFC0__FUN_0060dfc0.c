/* Ghidra address: 0060dfc0 */
/* Ghidra symbol: FUN_0060dfc0 */


void FUN_0060dfc0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_58;
  longlong *local_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_50 = (longlong *)0x0;
  local_58 = 0;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    FUN_004b9ec0(*(undefined8 *)(param_1 + 0x58));
    lVar2 = FUN_004d4fa0(&PTR_FUN_0047dd60,1,*(undefined8 *)(param_1 + 0x58),0);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x28;
    }
    FUN_0041b840(&local_38,lVar2);
    uVar3 = FUN_0041b800(&local_50);
    (**(code **)(*DAT_02011f90 + 0x70))(DAT_02011f90,uVar3);
    (**(code **)(*local_50 + 0x70))(local_50,local_38);
    uVar3 = FUN_0041b800(local_20);
    (**(code **)(*DAT_02011f90 + 0x40))(DAT_02011f90,param_1 + 0x6c,PTR_DAT_02003140,uVar3);
    (**(code **)(*local_20[0] + 0x18))(local_20[0],local_50,2);
    uVar3 = FUN_0041b800(&local_28);
    (**(code **)(*local_20[0] + 0x50))(local_20[0],uVar3,&local_30);
    (**(code **)(*local_28 + 0x18))(local_28,local_30);
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))(*(longlong **)(param_1 + 0x60),local_48);
    (**(code **)(*local_28 + 0x30))(local_28,local_48);
    (**(code **)(*local_28 + 0x20))
              (local_28,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
    uVar3 = FUN_0041b800(&local_58);
    (**(code **)(*DAT_02011f90 + 0x48))(DAT_02011f90,uVar3);
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x30))(*(longlong **)(param_1 + 0x60),local_58);
    (**(code **)(*local_28 + 0x40))(local_28,local_58);
    (**(code **)(*local_28 + 0x58))(local_28,*(undefined8 *)(param_1 + 0x60),0);
    (**(code **)(*local_28 + 0x60))(local_28);
    (**(code **)(*local_20[0] + 0x58))(local_20[0]);
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x58),0);
  puVar1 = *(undefined8 **)(param_1 + 0x58);
  uVar3 = (**(code **)*puVar1)(puVar1);
  FUN_004b8ba0(param_2,puVar1,uVar3);
  FUN_0041b800(&local_58);
  FUN_0041b800(&local_50);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  return;
}

