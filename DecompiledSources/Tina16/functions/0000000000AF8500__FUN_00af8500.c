/* Ghidra address: 00af8500 */
/* Ghidra symbol: FUN_00af8500 */


void FUN_00af8500(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_38 [16];
  
  uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x168);
  if (((*(byte *)(*(longlong *)(param_1 + 0x100) + 0x2c8) & 2) != 0) &&
     (cVar1 = FUN_00781870(), cVar1 != '\0')) {
    uVar3 = FUN_00781840();
    uVar2 = FUN_007793c0(uVar3,uVar2);
  }
  uVar2 = FUN_005fbf20(uVar2);
  FUN_005fdab0(param_2[0x10],uVar2);
  FUN_005fdcb0(param_2[0x10],0);
  FUN_004238d0(local_38,0,param_3,*(int *)(param_1 + 0x108) + 1,param_4);
  (**(code **)(*param_2 + 0xa8))(param_2,local_38);
  return;
}

