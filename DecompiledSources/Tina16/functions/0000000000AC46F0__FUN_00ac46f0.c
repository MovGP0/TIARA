/* Ghidra address: 00ac46f0 */
/* Ghidra symbol: FUN_00ac46f0 */


void FUN_00ac46f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_40;
  undefined1 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = auStack_68;
  lVar1 = param_1[0x34];
  cVar2 = FUN_004113d0(lVar1,&DAT_00aea600);
  if (cVar2 == '\0') {
    local_48 = param_5;
    local_40 = (longlong *)param_6;
    FUN_00ac3af0(param_1,param_2,param_3,param_4);
  }
  else {
    local_28 = lVar1;
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_20 + 0xf8))(local_20,0);
    FUN_0060bbf0(local_20,6);
    uVar3 = (**(code **)(*param_1 + 200))(param_1);
    (**(code **)(*local_20 + 0x88))(local_20,uVar3);
    uVar3 = (**(code **)(*param_1 + 0xc0))(param_1);
    (**(code **)(*local_20 + 0x70))(local_20,uVar3);
    uVar5 = FUN_00609e10(local_20);
    uVar3 = (**(code **)(*param_1 + 200))(param_1);
    uVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
    local_40 = (longlong *)CONCAT44(local_40._4_4_,uVar4);
    local_48 = uVar3;
    FUN_00af79f0(local_28,uVar5,*(undefined4 *)(*(longlong *)(local_28 + 0x758) + 0x494),
                 *(undefined4 *)(local_28 + 0x98));
    uVar3 = (**(code **)(*param_1 + 200))(param_1);
    local_48 = (**(code **)(*param_1 + 0xc0))(param_1);
    local_40 = local_20;
    FUN_00a46490(param_2,param_3,param_4,uVar3);
    FUN_00410f20(local_20);
  }
  return;
}

