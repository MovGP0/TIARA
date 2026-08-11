/* Ghidra address: 00976720 */
/* Ghidra symbol: FUN_00976720 */


void FUN_00976720(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 char param_5)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x80) + 0x138))(*(longlong **)(param_1 + 0x80));
  if ((local_28 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*local_28 + 0x168))(local_28), cVar1 == '\x03')) {
    plVar2 = (longlong *)FUN_004113f0(local_28,&PTR_FUN_0090b468);
    (**(code **)(*plVar2 + 0x2e0))(plVar2,param_4);
    if (param_5 == '\0') {
      return;
    }
    lVar3 = FUN_004113f0(local_28,&PTR_FUN_0090b468);
    *(undefined1 *)(lVar3 + 0x80) = 1;
    return;
  }
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x188))(*(longlong **)(param_1 + 0x80));
  local_20 = (longlong *)FUN_009530f0(&PTR_FUN_0090b468,1,uVar4);
  (**(code **)(*local_20 + 0x2c0))(local_20,param_4);
  *(char *)(local_20 + 0x10) = param_5;
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x1b0))(*(longlong **)(param_1 + 0x80),local_20);
  return;
}

