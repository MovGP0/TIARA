/* Ghidra address: 0186fa10 */
/* Ghidra symbol: FUN_0186fa10 */


undefined4 FUN_0186fa10(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ushort in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *puVar4;
  undefined1 local_38 [16];
  
  puVar4 = in_stack_00000030;
  uVar2 = FUN_0197c040(param_1);
  param_1[4] = *(longlong *)((longlong)in_stack_00000030 + 0xc);
  param_1[5] = *(longlong *)((longlong)in_stack_00000030 + 0x14);
  (**(code **)(*param_1 + 0x38))(param_1);
  if ((*(char *)((longlong)in_stack_00000030 + 0x1c) == '\x03') ||
     (((*(char *)((longlong)in_stack_00000030 + 0xb) == '\x01' && ((in_stack_00000028 & 2) != 0)) &&
      ((*(byte *)(param_1[1] + 0xc4) & 1) != 0)))) {
    uVar3 = FUN_004113f0(*in_stack_00000030,&PTR_FUN_00486f38);
    lVar1 = param_1[1];
    FUN_00498350(local_38,*(undefined4 *)(lVar1 + 0x248),*(undefined4 *)(lVar1 + 0x24c),
                 *(undefined4 *)(lVar1 + 0x250),*(undefined4 *)(lVar1 + 0x254),puVar4);
    (**(code **)(*param_1 + 0x30))(param_1,uVar3,local_38);
  }
  return uVar2;
}

