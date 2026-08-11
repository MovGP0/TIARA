/* Ghidra address: 0080ce30 */
/* Ghidra symbol: FUN_0080ce30 */


void FUN_0080ce30(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  puVar2 = auStack_68;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    cVar3 = FUN_00411580(param_2,&PTR_FUN_007f0370);
    puVar2 = local_40;
    if (cVar3 != '\0') {
      uVar4 = 1;
      goto LAB_0080ce74;
    }
  }
  local_40 = puVar2;
  uVar4 = 0;
LAB_0080ce74:
  *(undefined1 *)(param_1 + 0x191) = uVar4;
  local_20 = (longlong *)0x0;
  local_20 = (longlong *)(**(code **)(param_2 + -0x30))(param_2);
  *param_3 = local_20;
  (**(code **)(*local_20 + 0x78))(local_20,0xff,param_1);
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    cVar3 = FUN_004113d0(local_20,&PTR_FUN_007f0370);
    plVar1 = local_20;
    if (cVar3 != '\0') {
      FUN_0065b830(local_20);
      *(longlong **)(param_1 + 0xa8) = plVar1;
      if (*(char *)(param_1 + 0x193) != '\0') {
        local_30 = *(undefined8 *)(param_1 + 0x2d0);
        local_28 = local_30;
        local_38 = thunk_FUN_04118143(local_30,0xffffffec);
        local_38 = local_38 | 0x8000000;
        thunk_FUN_03c9d277(local_30,0xffffffec,local_38);
      }
      uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),*(char *)(param_1 + 0x193) == '\0');
      FUN_007f9310(*(undefined8 *)(param_1 + 0x2d0),uVar5 & 0xffffffff,uVar5 & 0xffffffff);
    }
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    cVar3 = FUN_004113d0(local_20,&PTR_FUN_007f0370);
    if (cVar3 != '\0') {
      *(undefined1 *)(local_20 + 0xd0) = 0;
    }
  }
  return;
}

