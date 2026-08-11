/* Ghidra address: 01d5ddc0 */
/* Ghidra symbol: FUN_01d5ddc0 */


void FUN_01d5ddc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 uint *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_2c;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  uVar5 = FUN_016e9e80(param_1,1);
  *param_5 = uVar5 & 0xff;
  *(char *)(param_5 + 1) = (char)param_2;
  *(char *)((longlong)param_5 + 5) = (char)param_3;
  FUN_016ebe60(param_1,(char)*param_5 + '\x01',param_2,param_3,1);
  FUN_016ed320(param_1,(char)*param_5 + '\x01',0,0,0);
  local_2c = (undefined1)(uVar4 >> 0x20);
  FUN_016ef200(param_1,uVar1,uVar2,uVar3,uVar4 & 0xff,local_2c,*param_5 + 1,(char)param_2,
               (char)param_3,1,1);
  return;
}

