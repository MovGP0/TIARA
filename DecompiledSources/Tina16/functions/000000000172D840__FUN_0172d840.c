/* Ghidra address: 0172d840 */
/* Ghidra symbol: FUN_0172d840 */


undefined8 FUN_0172d840(longlong *param_1,undefined1 param_2,undefined4 param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_R13;
  longlong lVar4;
  ulonglong in_stack_fffffffffffffea0;
  undefined2 local_132;
  longlong local_130;
  undefined1 local_128 [256];
  
  uVar3 = FUN_0172bd70(&PTR_FUN_01729478,1,param_1,param_2,*(undefined8 *)PTR_DAT_02001f18,
                       in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  cVar2 = (**(code **)(*param_1 + 0x2d0))(param_1,param_2,&local_130);
  lVar4 = local_130;
  if ((cVar2 != '\x04') && (lVar4 = unaff_R13, cVar2 == '\a')) {
    lVar4 = local_130;
  }
  puVar1 = *(undefined1 **)(lVar4 + 0x26);
  FUN_004095f0(*(undefined8 *)(puVar1 + 1),*(undefined2 *)(puVar1 + 0x21));
  FUN_004095f0(*(undefined8 *)(puVar1 + 9),*(undefined2 *)(puVar1 + 0x23));
  FUN_004095f0(*(undefined8 *)(puVar1 + 0x19),*(undefined2 *)(puVar1 + 0x21));
  FUN_0172cfa0(uVar3,param_3,puVar1 + 1,puVar1 + 9,puVar1 + 0x19,puVar1 + 0x21,puVar1 + 0x23,
               &local_132);
  *puVar1 = (char)param_3;
  FUN_0172cc40(uVar3,local_132,*(undefined2 *)(puVar1 + 0x21),*(undefined8 *)(puVar1 + 1),
               *(undefined8 *)(puVar1 + 9),local_128,0xff);
  if (param_4 != '\0') {
    FUN_00410f20(uVar3);
  }
  return uVar3;
}

