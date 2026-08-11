/* Ghidra address: 00a71dd0 */
/* Ghidra symbol: FUN_00a71dd0 */


void FUN_00a71dd0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,byte param_7)

{
  undefined1 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [16];
  
  uVar1 = *(undefined1 *)(*(longlong *)(param_1[0x10] + 0x18) + 0x38);
  uVar2 = *(undefined4 *)(*(longlong *)(param_1[0x10] + 0x18) + 0x28);
  if (((param_7 & 2) != 0) && (cVar3 = FUN_00781870(), cVar3 != '\0')) {
    uVar5 = FUN_00781840();
    param_6 = FUN_007793c0(uVar5,param_6);
  }
  uVar4 = FUN_005fbf20(param_6);
  FUN_005fdab0(param_1[0x10],uVar4);
  FUN_005fdcb0(param_1[0x10],0);
  FUN_004238d0(local_38,param_2,param_3,param_4,param_5);
  (**(code **)(*param_1 + 0xa8))(param_1,local_38);
  FUN_005fdab0(param_1[0x10],uVar2);
  FUN_005fdcb0(param_1[0x10],uVar1);
  return;
}

