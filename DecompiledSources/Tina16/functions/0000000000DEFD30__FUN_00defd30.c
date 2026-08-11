/* Ghidra address: 00defd30 */
/* Ghidra symbol: FUN_00defd30 */


void FUN_00defd30(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  double dVar6;
  char local_71;
  undefined2 local_70 [4];
  undefined8 local_68;
  double local_60;
  
  uVar4 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar3 = CONCAT11(uVar4,4);
    cVar1 = FUN_016eacf0(param_1,4,uVar3);
    uVar4 = (undefined1)((ushort)uVar3 >> 8);
  }
  uVar3 = CONCAT11(uVar4,2);
  cVar2 = FUN_016eacf0(param_1,3,uVar3);
  uVar3 = CONCAT11((char)((ushort)uVar3 >> 8),2);
  local_60 = (double)FUN_016ea920(param_1,2,uVar3,&local_71);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  if (local_71 == '\x01') {
    dVar6 = 0.0;
  }
  else if (*(double *)(param_2 + 0x430) <= local_60) {
    dVar6 = 1.0 / local_60;
  }
  else {
    dVar6 = 1.0 / *(double *)(param_2 + 0x430);
  }
  if (cVar1 == '\0') {
    FUN_016e9e20(param_1,1);
    uVar5 = FUN_016eb0a0(param_1,1);
    FUN_016ec1c0(param_1,1,CONCAT11(uVar4,1),2);
    FUN_016ed5d0(param_1,1,uVar5,(double)(cVar2 == '\0'),0,dVar6,0);
    local_68 = uVar5;
    local_70[0] = FUN_016ea1b0(param_1,2);
    FUN_016ea050(param_1,local_70,0x18);
    FUN_016e9ff0(param_1,FUN_00defac0);
    FUN_016ea040(param_1,FUN_00defca0);
  }
  else if (cVar1 == '\x01') {
    FUN_016e9e20(param_1,1);
    FUN_016ebe60(param_1,1,CONCAT11(uVar4,1),2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  else if (cVar1 == '\x02') {
    FUN_016e9e20(param_1,1);
    FUN_016ebdd0(param_1,1,CONCAT11(uVar4,1),2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  return;
}

