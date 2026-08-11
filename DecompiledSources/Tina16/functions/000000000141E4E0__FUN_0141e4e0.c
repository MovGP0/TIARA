/* Ghidra address: 0141e4e0 */
/* Ghidra symbol: FUN_0141e4e0 */


void FUN_0141e4e0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  pcVar1 = *(char **)(param_3 + 0x60);
  uVar3 = FUN_01b05600(param_3,pcVar1[1]);
  *(undefined4 *)(pcVar1 + 0x80) = uVar3;
  uVar3 = FUN_01b05600(param_3,pcVar1[2]);
  *(undefined4 *)(pcVar1 + 0x84) = uVar3;
  uVar3 = FUN_01b05600(param_3,pcVar1[3]);
  *(undefined4 *)(pcVar1 + 0x88) = uVar3;
  uVar3 = FUN_01b05600(param_3,pcVar1[4]);
  *(undefined4 *)(pcVar1 + 0x8c) = uVar3;
  uVar3 = FUN_01b05690(param_3,*pcVar1 + '\x02',1);
  *(undefined4 *)(pcVar1 + 0x90) = uVar3;
  uVar3 = FUN_01b05690(param_3,*pcVar1 + '\x04',1);
  *(undefined4 *)(pcVar1 + 0x94) = uVar3;
  uVar2 = FUN_017dcac0(param_1,*(undefined4 *)(pcVar1 + 0x90),*(undefined4 *)(pcVar1 + 0x88));
  *(undefined8 *)(pcVar1 + 0x98) = uVar2;
  uVar2 = FUN_017dcac0(param_1,*(undefined4 *)(pcVar1 + 0x90),*(undefined4 *)(pcVar1 + 0x8c));
  *(undefined8 *)(pcVar1 + 0xa0) = uVar2;
  uVar2 = FUN_017dcac0(param_1,*(undefined4 *)(pcVar1 + 0x90),*(undefined4 *)(pcVar1 + 0x94));
  *(undefined8 *)(pcVar1 + 0xa8) = uVar2;
  uVar2 = FUN_017dcac0(param_1,*(undefined4 *)(pcVar1 + 0x94),*(undefined4 *)(pcVar1 + 0x80));
  *(undefined8 *)(pcVar1 + 0xb0) = uVar2;
  uVar2 = FUN_017dcac0(param_1,*(undefined4 *)(pcVar1 + 0x94),*(undefined4 *)(pcVar1 + 0x84));
  *(undefined8 *)(pcVar1 + 0xb8) = uVar2;
  uVar2 = FUN_017dcac0(param_1,*(undefined4 *)(pcVar1 + 0x94),*(undefined4 *)(pcVar1 + 0x90));
  *(undefined8 *)(pcVar1 + 0xc0) = uVar2;
  return;
}

