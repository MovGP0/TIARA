/* Ghidra address: 00decc20 */
/* Ghidra symbol: FUN_00decc20 */


void FUN_00decc20(undefined8 param_1,longlong param_2,undefined2 param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_31;
  longlong local_30 [4];
  
  uVar3 = (undefined1)((ushort)param_3 >> 8);
  if (*(char *)(param_2 + 0x339) == '\0') {
    cVar1 = '\0';
  }
  else {
    uVar2 = CONCAT11(uVar3,4);
    cVar1 = FUN_016eacf0(param_1,3,uVar2);
    uVar3 = (undefined1)((ushort)uVar2 >> 8);
  }
  if (cVar1 == '\0') {
    uVar3 = 0;
    FUN_016ee260(param_1,local_30,0x50,0);
    uVar4 = FUN_016eb0a0(param_1,1);
    uVar5 = FUN_016ea920(param_1,2,CONCAT11(uVar3,2),&local_31);
    if (local_31 == '\x01') {
      *(undefined1 *)(local_30[0] + 0x40) = 0;
    }
    else {
      *(undefined1 *)(local_30[0] + 0x40) = 1;
    }
    FUN_00dec4a0(param_1,1,2,uVar4,uVar5,0,0,local_30[0]);
    FUN_016e9f40(param_1,FUN_00dec410);
    FUN_016e9fb0(param_1,FUN_00debdf0);
    FUN_016e9fa0(param_1,FUN_00debe60);
    FUN_016ea040(param_1,FUN_00debd30);
  }
  else if (cVar1 == '\x01') {
    FUN_016e9e20(param_1,1);
    FUN_016ebe60(param_1,1,CONCAT11(uVar3,1),2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  else if (cVar1 == '\x02') {
    FUN_016e9e20(param_1,1);
    FUN_016ebdd0(param_1,1,CONCAT11(uVar3,1),2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  return;
}

