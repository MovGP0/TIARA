/* Ghidra address: 01d521c0 */
/* Ghidra symbol: FUN_01d521c0 */


void FUN_01d521c0(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 *in_stack_00000028;
  char *in_stack_00000030;
  
  uVar3 = *in_stack_00000028;
  uVar4 = in_stack_00000028[2];
  uVar5 = in_stack_00000028[3];
  uVar6 = in_stack_00000028[4];
  *(undefined8 *)(in_stack_00000030 + 0x18) = in_stack_00000028[1];
  *(undefined8 *)(in_stack_00000030 + 0x10) = uVar3;
  *(undefined8 *)(in_stack_00000030 + 0x20) = uVar4;
  *(undefined8 *)(in_stack_00000030 + 0x28) = uVar5;
  in_stack_00000030[8] = '\0';
  in_stack_00000030[9] = '\0';
  in_stack_00000030[10] = '\0';
  in_stack_00000030[0xb] = '\0';
  in_stack_00000030[0xc] = '\0';
  in_stack_00000030[0xd] = '\0';
  in_stack_00000030[0xe] = '\0';
  in_stack_00000030[0xf] = '\0';
  *(undefined8 *)(in_stack_00000030 + 0x30) = uVar6;
  cVar7 = FUN_016e9e80(param_1,3);
  *in_stack_00000030 = cVar7;
  in_stack_00000030[1] = '\x01';
  in_stack_00000030[2] = '\x02';
  cVar7 = FUN_016e9d10(param_1,1);
  dVar1 = *(double *)(in_stack_00000030 + 0x10);
  dVar2 = *(double *)(in_stack_00000030 + 0x18);
  FUN_016ebe60(param_1,*in_stack_00000030 + '\x01',1,0,1);
  FUN_016ed320(param_1,*in_stack_00000030 + '\x01',0,1.0 / dVar1,0);
  FUN_016ec420(param_1,*in_stack_00000030 + '\x02',1,0,cVar7 + '\x01',0,0);
  FUN_016ed320(param_1,*in_stack_00000030 + '\x02',0,0,0);
  FUN_016ebe60(param_1,*in_stack_00000030 + '\x03',cVar7 + '\x01',2,1);
  FUN_016ed320(param_1,*in_stack_00000030 + '\x03',0,1.0 / dVar2,0);
  return;
}

