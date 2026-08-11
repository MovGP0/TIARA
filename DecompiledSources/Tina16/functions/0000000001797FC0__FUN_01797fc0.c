/* Ghidra address: 01797fc0 */
/* Ghidra symbol: FUN_01797fc0 */


void FUN_01797fc0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  ushort local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_30 = param_2;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_008228b0);
  if (cVar1 != '\0') {
    FUN_017956f0(param_1);
    (**(code **)(**(longlong **)(param_1 + 0xd28) + 0x10))(*(longlong **)(param_1 + 0xd28));
    FUN_01797e80(auStack_a8,local_20);
    local_28 = FUN_00498310(0,0);
    local_88 = 0;
    local_80 = 4;
    local_78 = *(undefined1 *)(local_30 + 0x18);
    local_70 = 0;
    local_68 = 0xffffff9c;
    local_60 = 0xffffff9c;
    local_58 = 0;
    local_50 = &local_28;
    local_48 = 0x4020000000000000;
    local_40 = *(undefined4 *)(param_1 + 0xd40);
    uVar2 = FUN_017b02a0(&PTR_FUN_017a79c0,1,local_20[0],1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0xd28),uVar2);
    uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd28),0);
    FUN_017afd00(uVar2,1);
    *(undefined4 *)(param_1 + 0xd30) = 0xffffffff;
    local_88 = local_88 & 0xff00;
    local_80 = 0;
    FUN_01795890(param_1,0xffffffff,0xffffffff,0);
  }
  FUN_00414480(local_20);
  return;
}

