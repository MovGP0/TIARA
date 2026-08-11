/* Ghidra address: 00a378d0 */
/* Ghidra symbol: FUN_00a378d0 */


undefined8 FUN_00a378d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_80 [104];
  
  uVar2 = FUN_00a33e20(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x160),0);
  lVar3 = FUN_004113f0(uVar2,&PTR_FUN_00a30a98);
  *(longlong *)(param_1 + 0x28) = lVar3;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar3 + 0x488);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x48c);
  FUN_00a399f0(*(undefined8 *)(param_1 + 0x18),param_1 + 0x38,param_1 + 0x3c);
  uVar2 = FUN_004095c0(*(undefined4 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  FUN_0040d200(uVar2,*(undefined4 *)(param_1 + 0x38),0);
  uVar2 = FUN_004095c0(*(undefined4 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  FUN_0040d200(uVar2,*(undefined4 *)(param_1 + 0x38),0);
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 2) != 0) {
    uVar2 = FUN_004095c0(*(undefined4 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x48) = uVar2;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 4) != 0) {
    uVar2 = FUN_004095c0(*(undefined4 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x50) = uVar2;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 8) != 0) {
    uVar2 = FUN_004095c0(*(undefined4 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x58) = uVar2;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 0x10) != 0) {
    uVar2 = FUN_004095c0(*(undefined4 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  FUN_00a332e0(local_80,param_2,*(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x151),
               *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x154));
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x18) + 0x158);
  if (cVar1 == '\0') {
    FUN_00a37f30(param_1,param_2,local_80);
  }
  else if (cVar1 == '\x01') {
    FUN_00a38600(param_1,param_2,local_80);
  }
  FUN_00a33350(local_80);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x38));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x38));
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 2) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x38));
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 4) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x38));
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 8) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x38));
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x150) & 0x10) != 0) {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x38));
  }
  return 1;
}

