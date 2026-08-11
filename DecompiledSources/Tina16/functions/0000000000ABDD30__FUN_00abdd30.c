/* Ghidra address: 00abdd30 */
/* Ghidra symbol: FUN_00abdd30 */


void FUN_00abdd30(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  longlong *local_50;
  undefined1 *local_40;
  longlong *local_30;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = auStack_78;
  local_58 = param_5;
  local_50 = (longlong *)param_6;
  FUN_00ac3af0(param_1,param_2,param_3,param_4);
  cVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar3 == '\0') {
    lVar2 = param_1[0x34];
    if (*(char *)(lVar2 + 0x4b0) == '\0') {
      FUN_0064e6f0(lVar2);
    }
    else {
      FUN_0064e700(lVar2);
    }
  }
  else if ((*(char *)(param_1[0x34] + 0x4b0) != '\0') && (param_1[0x37] != 0)) {
    local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_28 = *(undefined4 *)(param_1[0x35] + 0x9c);
    local_24 = *(undefined4 *)(param_1[0x35] + 0x98);
    uVar4 = (**(code **)(*param_1 + 0xc0))(param_1);
    (**(code **)(*local_30 + 0x70))(local_30,uVar4);
    uVar4 = (**(code **)(*param_1 + 200))(param_1);
    (**(code **)(*local_30 + 0x88))(local_30,uVar4);
    plVar1 = (longlong *)param_1[0x35];
    uVar4 = (**(code **)(*param_1 + 200))(param_1);
    local_58 = (**(code **)(*param_1 + 0xc0))(param_1);
    (**(code **)(*plVar1 + 400))
              (plVar1,(int)plVar1[0x12],*(undefined4 *)((longlong)plVar1 + 0x94),uVar4);
    (*(code *)param_1[0x37])(param_1[0x38],param_1[0x36],param_1[0x35],local_30);
    uVar4 = (**(code **)(*param_1 + 200))(param_1);
    local_58 = (**(code **)(*param_1 + 0xc0))(param_1);
    local_50 = local_30;
    FUN_00a46490(param_2,param_3,param_4,uVar4);
    plVar1 = (longlong *)param_1[0x35];
    local_58 = local_28;
    (**(code **)(*plVar1 + 400))
              (plVar1,(int)plVar1[0x12],*(undefined4 *)((longlong)plVar1 + 0x94),local_24);
  }
  return;
}

