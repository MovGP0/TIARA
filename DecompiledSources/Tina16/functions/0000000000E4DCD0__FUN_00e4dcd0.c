/* Ghidra address: 00e4dcd0 */
/* Ghidra symbol: FUN_00e4dcd0 */


void FUN_00e4dcd0(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 local_40 [2];
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0xb));
  *(undefined4 *)(lVar1 + 0x14) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0xc));
  *(undefined4 *)(lVar1 + 0x18) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0xd));
  *(undefined4 *)(lVar1 + 0x1c) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0xe));
  *(undefined4 *)(lVar1 + 0x20) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0xf));
  *(undefined4 *)(lVar1 + 0x24) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0x10));
  *(undefined4 *)(lVar1 + 0x28) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0x11));
  *(undefined4 *)(lVar1 + 0x2c) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0x12));
  *(undefined4 *)(lVar1 + 0x30) = uVar2;
  uVar2 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0x168));
  uVar3 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0x169));
  uVar4 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0x16a));
  uVar5 = FUN_01b05600(param_2,*(undefined1 *)(lVar1 + 0x16b));
  local_40[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x11f0) = uVar6;
  local_40[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x11f8) = uVar6;
  local_40[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x1c),*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x1200) = uVar6;
  local_40[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x24),*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x1208) = uVar6;
  local_40[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x28),*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x1210) = uVar6;
  local_40[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x2c),*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x1218) = uVar6;
  local_40[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x30),*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x1220) = uVar6;
  local_40[0] = FUN_00498310(uVar2,*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x1228) = uVar6;
  local_40[0] = FUN_00498310(uVar4,*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x1230) = uVar6;
  local_40[0] = FUN_00498310(uVar3,*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x1238) = uVar6;
  local_40[0] = FUN_00498310(uVar5,*(undefined4 *)(param_1 + 8));
  uVar6 = FUN_017dcdb0(param_1,local_40,param_3,0);
  *(undefined8 *)(lVar1 + 0x1240) = uVar6;
  return;
}

