/* Ghidra address: 00d45a80 */
/* Ghidra symbol: FUN_00d45a80 */


void FUN_00d45a80(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  int local_58;
  undefined1 *local_40;
  undefined1 local_30 [16];
  longlong *local_20;
  
  local_40 = auStack_78;
  cVar1 = FUN_00d45640(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
    local_58 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
    FUN_004238d0(local_30,0,0,uVar2);
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    uVar2 = FUN_004230a0(local_30);
    (**(code **)(*local_20 + 0x88))(local_20,uVar2);
    uVar2 = FUN_004230c0(local_30);
    (**(code **)(*local_20 + 0x70))(local_20,uVar2);
    uVar5 = FUN_00609e10(local_20);
    uVar6 = FUN_00781840();
    uVar2 = FUN_00778bd0(uVar6,0xff000010,0);
    uVar6 = FUN_00781840();
    uVar3 = FUN_00778bd0(uVar6,0xff000014,0);
    local_58 = 1;
    FUN_00d36dc0(uVar5,local_30,uVar2,uVar3);
    uVar5 = FUN_005ffa40(param_2);
    iVar4 = FUN_00787fa0(*(undefined8 *)(param_1 + 0x18));
    local_58 = FUN_00787c80(*(undefined8 *)(param_1 + 0x18));
    local_58 = local_58 + -1;
    thunk_FUN_041a27b3(uVar5,1,1,iVar4 + -1);
    (**(code **)(*param_2 + 0x88))(param_2,0,0,local_20);
    FUN_00410f20(local_20);
  }
  return;
}

