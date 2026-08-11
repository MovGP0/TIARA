/* Ghidra address: 00785c70 */
/* Ghidra symbol: FUN_00785c70 */


void FUN_00785c70(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_34 = *param_3;
  uStack_2c = *(undefined4 *)(param_3 + 1);
  FUN_005ff880(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8));
  uVar2 = FUN_0060f580(param_6);
  uVar3 = FUN_00781840();
  cVar1 = FUN_007790b0(uVar3,&local_34,2,&local_38);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x100))(param_2);
    uVar3 = FUN_00781840();
    uVar4 = FUN_005ffa40(param_2);
    uVar2 = FUN_0060f570(uVar2);
    FUN_00778f70(uVar3,uVar4,&local_34,param_4,param_5,uVar2,0x1fffffff,0);
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0xf0))(*(longlong **)(param_1 + 0x10));
    if ((cVar1 == '\0') || ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x2c8) & 1) != 0)) {
      FUN_005fc860(param_2[0xe],local_38);
    }
    uVar3 = FUN_00781840();
    uVar4 = FUN_005ffa40(param_2);
    uVar2 = FUN_0060f570(uVar2);
    FUN_00778f70(uVar3,uVar4,&local_34,param_4,param_5,uVar2,*(undefined4 *)(param_2[0xe] + 0x28),0)
    ;
  }
  return;
}

