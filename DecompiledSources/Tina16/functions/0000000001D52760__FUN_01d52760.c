/* Ghidra address: 01d52760 */
/* Ghidra symbol: FUN_01d52760 */


void FUN_01d52760(undefined8 param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *in_stack_00000028;
  char *in_stack_00000030;
  undefined8 local_98 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  puVar5 = local_98;
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *in_stack_00000028;
    in_stack_00000028 = in_stack_00000028 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined8 *)(in_stack_00000030 + 0x18) = local_98[1];
  *(undefined8 *)(in_stack_00000030 + 0x10) = local_98[0];
  *(undefined8 *)(in_stack_00000030 + 0x20) = local_98[2];
  *(undefined8 *)(in_stack_00000030 + 0x28) = local_98[3];
  in_stack_00000030[8] = '\0';
  in_stack_00000030[9] = '\0';
  in_stack_00000030[10] = '\0';
  in_stack_00000030[0xb] = '\0';
  in_stack_00000030[0xc] = '\0';
  in_stack_00000030[0xd] = '\0';
  in_stack_00000030[0xe] = '\0';
  in_stack_00000030[0xf] = '\0';
  *(undefined8 *)(in_stack_00000030 + 0x30) = local_78;
  *(undefined8 *)(in_stack_00000030 + 0x38) = local_70;
  *(undefined8 *)(in_stack_00000030 + 0x40) = local_68;
  *(undefined8 *)(in_stack_00000030 + 0x48) = local_60;
  cVar3 = FUN_016e9e80(param_1,3);
  *in_stack_00000030 = cVar3;
  in_stack_00000030[1] = '\x01';
  in_stack_00000030[2] = '\x02';
  cVar3 = FUN_016e9d10(param_1,1);
  dVar1 = *(double *)(in_stack_00000030 + 0x10);
  dVar2 = *(double *)(in_stack_00000030 + 0x18);
  FUN_016ebe60(param_1,*in_stack_00000030 + '\x01',1,0,1);
  FUN_016ed320(param_1,*in_stack_00000030 + '\x01',0,1.0 / dVar1,0);
  FUN_016ec420(param_1,*in_stack_00000030 + '\x02',1,0,cVar3 + '\x01',0,0);
  FUN_016ed320(param_1,*in_stack_00000030 + '\x02',0,0,0);
  FUN_016ebe60(param_1,*in_stack_00000030 + '\x03',cVar3 + '\x01',2,1);
  FUN_016ed320(param_1,*in_stack_00000030 + '\x03',0,1.0 / dVar2,0);
  return;
}

