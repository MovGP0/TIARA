/* Ghidra address: 01422990 */
/* Ghidra symbol: FUN_01422990 */


void FUN_01422990(undefined8 param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  char cVar1;
  char cVar2;
  char cVar3;
  
  FUN_016e9e20(param_1,0x22);
  cVar1 = FUN_016e9d10(param_1,10);
  cVar2 = cVar1 + '\x03';
  FUN_016ebdd0(param_1,1,param_2,cVar2,1);
  cVar3 = cVar1 + '\x01';
  FUN_016ebdd0(param_1,2,param_4,cVar3,1);
  FUN_016ebe60(param_1,3,cVar2,param_3,1);
  FUN_016ec850(param_1,4,param_2,param_3,3);
  FUN_016ebe60(param_1,5,cVar2,param_3,1);
  FUN_016eca70(param_1,6,2,5);
  FUN_016ebdd0(param_1,7,cVar1 + '\x04',cVar1 + '\x02',1);
  FUN_016ecbf0(param_1,8,2,7);
  FUN_016ebdd0(param_1,9,cVar1 + '\x02',param_5,1);
  FUN_016ec970(param_1,10,param_2,param_3,9);
  FUN_016ebe60(param_1,0xb,cVar3,param_5,1);
  FUN_016ec850(param_1,0xc,param_4,param_5,0xb);
  FUN_016ebe60(param_1,0xd,cVar3,param_5,1);
  FUN_016ec850(param_1,0xe,param_2,param_3,0xd);
  FUN_016ebe60(param_1,0xf,cVar2,param_3,1);
  FUN_016ec850(param_1,0x10,param_4,param_5,0xf);
  FUN_016ebe60(param_1,0x11,cVar3,cVar1 + '\x04',1);
  FUN_016ebdd0(param_1,0x12,cVar2,cVar1 + '\x05',1);
  FUN_016ebdd0(param_1,0x13,cVar1 + '\x05',cVar1 + '\x06',1);
  FUN_016ecbf0(param_1,0x14,0x12,0x13);
  FUN_016ebdd0(param_1,0x15,cVar3,cVar1 + '\a',1);
  FUN_016ebdd0(param_1,0x16,cVar1 + '\a',cVar1 + '\b',1);
  FUN_016ecbf0(param_1,0x17,0x15,0x16);
  FUN_016ebdd0(param_1,0x18,cVar1 + '\x06',param_3,1);
  FUN_016ecbf0(param_1,0x19,2,0x18);
  FUN_016ebdd0(param_1,0x1a,cVar1 + '\b',param_5,1);
  FUN_016ecbf0(param_1,0x1b,1,0x1a);
  FUN_016ebdd0(param_1,0x1c,cVar2,cVar1 + '\t',1);
  FUN_016ebdd0(param_1,0x1d,cVar1 + '\t',cVar1 + '\n',1);
  FUN_016ecbf0(param_1,0x1e,0x1c,0x1d);
  FUN_016ebe60(param_1,0x1f,cVar3,param_5,1);
  FUN_016eca70(param_1,0x20,1,0x1f);
  FUN_016ebdd0(param_1,0x21,cVar1 + '\n',param_3,1);
  FUN_016ec970(param_1,0x22,param_4,param_5,0x21);
  FUN_016e9f40(param_1,FUN_01422d90);
  return;
}

