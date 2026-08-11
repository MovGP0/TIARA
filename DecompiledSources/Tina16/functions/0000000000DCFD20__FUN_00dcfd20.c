/* Ghidra address: 00dcfd20 */
/* Ghidra symbol: FUN_00dcfd20 */


void FUN_00dcfd20(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong in_stack_ffffffffffffffa8;
  
  *param_5 = *param_4;
  uVar2 = FUN_016e9e80(param_1,2);
  *(uint *)(param_5 + 1) = uVar2 & 0xff;
  cVar1 = FUN_016e9d10(param_1,1);
  *(char *)((longlong)param_5 + 0xe) = cVar1 + '\x01';
  *(char *)((longlong)param_5 + 0xc) = (char)param_2;
  *(char *)((longlong)param_5 + 0xd) = (char)param_3;
  FUN_016ec240(param_1,*(char *)(param_5 + 1) + '\x01',*(undefined1 *)((longlong)param_5 + 0xe),
               param_3);
  FUN_016ebe60(param_1,*(char *)(param_5 + 1) + '\x02',param_2,
               *(undefined1 *)((longlong)param_5 + 0xe),
               in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  FUN_016ed5d0(param_1,*(char *)(param_5 + 1) + '\x01',*param_5,0,0,0,0);
  FUN_016ed320(param_1,*(char *)(param_5 + 1) + '\x02',0,0x40d3880000000000,0);
  return;
}

