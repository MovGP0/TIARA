/* Ghidra address: 00f5a3b0 */
/* Ghidra symbol: FUN_00f5a3b0 */


void FUN_00f5a3b0(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  double dVar5;
  undefined8 uVar6;
  char local_51;
  undefined8 local_50 [5];
  
  uVar2 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar3 = CONCAT11(uVar2,2);
    cVar1 = FUN_016eacf0(param_1,5,uVar3);
    uVar2 = (undefined1)((ushort)uVar3 >> 8);
  }
  uVar3 = CONCAT11(uVar2,2);
  uVar2 = FUN_016eacf0(param_1,1,uVar3);
  uVar3 = CONCAT11((char)((ushort)uVar3 >> 8),2);
  dVar5 = (double)FUN_016ea920(param_1,2,uVar3,&local_51);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  if (local_51 == '\x01') {
    dVar5 = 1e+30;
  }
  uVar6 = FUN_016eb0a0(param_1,3);
  if (cVar1 == '\0') {
    uVar4 = 0;
    FUN_016ee260(param_1,local_50,0x10,0);
    FUN_00f55420(param_1,param_2,CONCAT11(uVar4,1),2,uVar2,dVar5,uVar6,local_50[0]);
    FUN_016e9f40(param_1,FUN_00f5a200);
  }
  else if (cVar1 == '\x01') {
    FUN_016e9e20(param_1,1);
    FUN_016ebe60(param_1,1,CONCAT11(uVar4,1),2,1);
    FUN_016ed320(param_1,1,0,1.0 / dVar5,0);
  }
  return;
}

