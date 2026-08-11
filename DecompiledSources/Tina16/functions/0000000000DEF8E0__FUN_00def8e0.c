/* Ghidra address: 00def8e0 */
/* Ghidra symbol: FUN_00def8e0 */


void FUN_00def8e0(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined2 local_60 [4];
  undefined8 local_58;
  undefined8 local_50;
  
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
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  uVar5 = FUN_016eb0a0(param_1,2);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      FUN_016e9e20(param_1,1);
      FUN_016ebe60(param_1,1,CONCAT11(uVar4,1),2,1);
      FUN_016ed320(param_1,1,0,0,0);
      return;
    }
    if (cVar1 == '\x02') {
      FUN_016e9e20(param_1,1);
      FUN_016ebdd0(param_1,1,CONCAT11(uVar4,1),2,1);
      FUN_016ed320(param_1,1,0,0,0);
      return;
    }
    if (cVar1 != '\x10') {
      return;
    }
  }
  FUN_016e9e20(param_1,1);
  uVar6 = FUN_016eb0a0(param_1,1);
  FUN_016ec240(param_1,1,CONCAT11(uVar4,1),2);
  FUN_016ed5d0(param_1,1,uVar6,(double)(cVar2 == '\0'),0,uVar5,0);
  local_58 = uVar6;
  local_50 = uVar5;
  local_60[0] = FUN_016ea1b0(param_1,2);
  FUN_016ea050(param_1,local_60,0x18);
  FUN_016e9ff0(param_1,FUN_00def650);
  FUN_016ea040(param_1,FUN_00def830);
  return;
}

