/* Ghidra address: 00df06a0 */
/* Ghidra symbol: FUN_00df06a0 */


void FUN_00df06a0(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  double dVar4;
  double dVar5;
  char local_61;
  undefined2 local_60 [4];
  undefined8 local_58;
  double local_50;
  
  uVar3 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar2 = CONCAT11(uVar3,4);
    cVar1 = FUN_016eacf0(param_1,6,uVar2);
    uVar3 = (undefined1)((ushort)uVar2 >> 8);
  }
  uVar2 = CONCAT11(uVar3,2);
  dVar4 = (double)FUN_016ea920(param_1,3,uVar2,&local_61);
  uVar3 = (undefined1)((ushort)uVar2 >> 8);
  if (local_61 == '\x01') {
    dVar5 = 0.0;
  }
  else if (*(double *)(param_2 + 0x430) <= dVar4) {
    dVar5 = 1.0 / dVar4;
  }
  else {
    dVar5 = 1.0 / *(double *)(param_2 + 0x430);
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      FUN_016e9e20(param_1,1);
      FUN_016ebe60(param_1,1,CONCAT11(uVar3,1),2,1);
      FUN_016ed320(param_1,1,0,0,0);
      return;
    }
    if (cVar1 == '\x02') {
      FUN_016e9e20(param_1,1);
      FUN_016ebdd0(param_1,1,CONCAT11(uVar3,1),2,1);
      FUN_016ed320(param_1,1,0,0,0);
      return;
    }
    if (cVar1 != '\x03') {
      return;
    }
  }
  FUN_016e9e20(param_1,1);
  FUN_016ec1c0(param_1,1,CONCAT11(uVar3,1),2);
  FUN_016ed5d0(param_1,1,0,0,0,dVar5,0);
  local_58 = 0;
  local_50 = dVar4;
  local_60[0] = FUN_016ea1b0(param_1,2);
  FUN_016ea050(param_1,local_60,0x18);
  FUN_016e9f40(param_1,FUN_00df00f0);
  FUN_016ea000(param_1,FUN_00deff70);
  FUN_016e9ff0(param_1,FUN_00defac0);
  FUN_016ea040(param_1,FUN_00defca0);
  return;
}

