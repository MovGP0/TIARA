/* Ghidra address: 006ea710 */
/* Ghidra symbol: FUN_006ea710 */


void FUN_006ea710(longlong *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_1a;
  byte local_19;
  
  local_30 = auStack_58;
  puVar1 = auStack_58;
  if (((*(uint *)((longlong)param_1 + 0xa4) & 0x2000) != 0) &&
     (puVar1 = auStack_58, (*(ushort *)((longlong)param_1 + 0x34) & 1) == 0)) {
    uVar2 = FUN_006805f0(param_1);
    *(undefined1 *)((longlong)param_1 + 0x531) = uVar2;
    lVar4 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    param_1[0xa3] = lVar4;
    local_19 = FUN_006eae80(param_1);
    local_1a = (*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0;
    FUN_006eae90(param_1,local_1a | local_19);
    uVar3 = (**(code **)(*param_1 + 0x270))(param_1);
    *(undefined4 *)(param_1 + 0xb0) = uVar3;
    uVar3 = (**(code **)(*param_1 + 0x278))(param_1);
    *(undefined4 *)((longlong)param_1 + 0x584) = uVar3;
    *(undefined4 *)(param_1 + 0xb1) = *(undefined4 *)((longlong)param_1 + 0x58c);
    FUN_004b89e0(param_1[0xa3],&local_1a,1);
    uVar5 = FUN_0045adf0();
    (**(code **)(*(longlong *)param_1[0xa2] + 0x118))((longlong *)param_1[0xa2],param_1[0xa3],uVar5)
    ;
    FUN_004b6dc0(param_1[0xa3],0);
    FUN_006eae90(param_1,local_19);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_006818f0(param_1);
  return;
}

