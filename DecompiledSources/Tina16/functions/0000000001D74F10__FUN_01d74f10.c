/* Ghidra address: 01d74f10 */
/* Ghidra symbol: FUN_01d74f10 */


void FUN_01d74f10(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 *puVar2;
  ulonglong in_stack_ffffffffffffffb8;
  
  FUN_016ebdd0(param_2,param_1[0xd] + '\x13',param_1[9],param_1[0xc],
               in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
  cVar1 = '\0';
  puVar2 = param_1;
  do {
    FUN_016ebe60(param_2,param_1[0xd] + cVar1,*puVar2,param_1[0xc],1);
    FUN_016ed320(param_2,param_1[0xd] + cVar1,0,*(undefined8 *)(param_3 + 0x430),0);
    cVar1 = cVar1 + '\x01';
    puVar2 = puVar2 + 1;
  } while (cVar1 != '\b');
  cVar1 = '\0';
  puVar2 = param_1;
  do {
    FUN_016ec970(param_2,param_1[0xd] + cVar1 + '\b',*puVar2,param_1[0xc],param_1[0xd] + '\x13');
    cVar1 = cVar1 + '\x01';
    puVar2 = puVar2 + 1;
  } while (cVar1 != '\b');
  FUN_016ebe60(param_2,param_1[0xd] + '\x10',param_1[10],param_1[0xc],1);
  FUN_016ec240(param_2,param_1[0xd] + '\x11',param_1[0xb],param_1[0xc]);
  FUN_016ebe60(param_2,param_1[0xd] + '\x12',param_1[8],param_1[0xc],1);
  FUN_016ed320(param_2,param_1[0xd] + '\x10',0,*(undefined8 *)(param_3 + 0x430),0);
  FUN_016ed320(param_2,param_1[0xd] + '\x12',0,*(undefined8 *)(param_3 + 0x430),0);
  return;
}

