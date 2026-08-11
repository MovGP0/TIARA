/* Ghidra address: 019502b0 */
/* Ghidra symbol: FUN_019502b0 */


void FUN_019502b0(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 char param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  
  local_40 = auStack_68;
  local_30 = FUN_01810fa0(&DAT_018103d8,1,param_2);
  *(undefined1 *)(local_30 + 0x78) = 1;
  *(undefined1 *)(local_30 + 0x79) = *(undefined1 *)((longlong)param_1 + 0xd2);
  uVar4 = (**(code **)(*param_1 + 0x118))(param_1);
  *(undefined8 *)(local_30 + 0x18) = uVar4;
  *(undefined1 *)(local_30 + 0x30) = param_4;
  if ((param_1[0x22] == 0) || ((*(byte *)(param_1 + 0x1a) & 0x40) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined1 *)(local_30 + 0x7a) = uVar2;
  cVar3 = FUN_004113d0(param_1,&PTR_FUN_0193aeb8);
  if ((cVar3 != '\0') || (*(char *)((longlong)param_1 + 0xd2) != '\0')) {
    if (*(char *)((longlong)param_1 + 0xd2) == '\0') {
      lVar5 = (**(code **)(*param_1 + 0x118))(param_1);
      *(undefined8 *)(local_30 + 0x68) = *(undefined8 *)(lVar5 + 0x4c8);
      *(undefined8 *)(local_30 + 0x70) = *(undefined8 *)(lVar5 + 0x4d0);
    }
    lVar5 = local_30;
    if (param_5 == '\0') {
      puVar1 = (undefined8 *)(local_30 + 0x48);
      uVar4 = (**(code **)(*param_1 + 0x118))(param_1);
      *(undefined8 *)(lVar5 + 0x50) = uVar4;
      *puVar1 = FUN_019733b0;
    }
  }
  FUN_018140f0(local_30,param_1,param_3,0);
  FUN_00410f20(local_30);
  return;
}

