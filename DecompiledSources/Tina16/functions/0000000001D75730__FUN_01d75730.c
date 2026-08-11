/* Ghidra address: 01d75730 */
/* Ghidra symbol: FUN_01d75730 */


void FUN_01d75730(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  undefined1 *puVar2;
  int iVar3;
  ulonglong in_stack_ffffffffffffffa8;
  
  FUN_016ebdd0(param_2,param_1[0x89] + param_1[0x8c] * '\x02' + '\x03',param_1[0x85],param_1[0x88],
               in_stack_ffffffffffffffa8 & 0xffffffffffffff00);
  iVar3 = *(int *)(param_1 + 0x8c);
  cVar1 = '\0';
  puVar2 = param_1;
  if (iVar3 - 1U < 0x80000000) {
    do {
      FUN_016ebe60(param_2,param_1[0x89] + cVar1,*puVar2,param_1[0x88],1);
      FUN_016ed320(param_2,param_1[0x89] + cVar1,0,*(undefined8 *)(param_3 + 0x430),0);
      cVar1 = cVar1 + '\x01';
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x8c);
  cVar1 = '\0';
  puVar2 = param_1;
  if (-1 < iVar3 + -1) {
    do {
      FUN_016ec970(param_2,param_1[0x89] + param_1[0x8c] + cVar1,*puVar2,param_1[0x88],
                   param_1[0x89] + param_1[0x8c] * '\x02' + '\x03');
      cVar1 = cVar1 + '\x01';
      iVar3 = iVar3 + -1;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  FUN_016ebe60(param_2,param_1[0x89] + param_1[0x8c] * '\x02',param_1[0x86],param_1[0x88],1);
  FUN_016ec240(param_2,param_1[0x89] + param_1[0x8c] * '\x02' + '\x01',param_1[0x87],param_1[0x88]);
  FUN_016ebe60(param_2,param_1[0x89] + param_1[0x8c] * '\x02' + '\x02',param_1[0x84],param_1[0x88],1
              );
  FUN_016ed320(param_2,param_1[0x89] + param_1[0x8c] * '\x02',0,*(undefined8 *)(param_3 + 0x430),0);
  FUN_016ed320(param_2,param_1[0x89] + param_1[0x8c] * '\x02' + '\x02',0,
               *(undefined8 *)(param_3 + 0x430),0);
  return;
}

