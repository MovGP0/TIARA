/* Ghidra address: 018b0440 */
/* Ghidra symbol: FUN_018b0440 */


void FUN_018b0440(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_38;
  int local_2c;
  longlong local_28;
  char local_19;
  
  local_50 = auStack_78;
  local_19 = '\0';
  (**(code **)(**(longlong **)(param_1 + 0x848) + 0x298))(*(longlong **)(param_1 + 0x848));
  uVar2 = FUN_018af290(param_1);
  local_28 = FUN_01951400(uVar2);
  iVar4 = *(int *)(local_28 + 0x10);
  local_2c = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_38 = FUN_004aeac0(local_28,local_2c);
      cVar1 = FUN_004113d0(local_38,&PTR_FUN_019317f0);
      if ((cVar1 != '\0') && (*(char *)(local_38 + 0x250) != '\0')) {
        *(undefined1 *)(local_38 + 0x251) = 0;
        local_19 = '\x01';
      }
      local_2c = local_2c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_19 != '\0') {
    lVar3 = FUN_018af290(param_1);
    (**(code **)(**(longlong **)(lVar3 + 400) + 0x90))(*(longlong **)(lVar3 + 400));
    (**(code **)(**(longlong **)(param_1 + 0x848) + 0x2a8))(*(longlong **)(param_1 + 0x848));
    FUN_018ab560(*(undefined8 *)(param_1 + 0x848),0,0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x848) + 0x2a0))(*(longlong **)(param_1 + 0x848),local_19);
  return;
}

