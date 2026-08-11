/* Ghidra address: 00f5a090 */
/* Ghidra symbol: FUN_00f5a090 */


void FUN_00f5a090(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_88;
  char local_79 [81];
  
  uVar3 = CONCAT11((char)((ushort)param_3 >> 8),2);
  uVar1 = FUN_016eacf0(param_1,1,uVar3);
  uVar2 = (undefined1)((ushort)uVar3 >> 8);
  uVar5 = FUN_016eb0a0(param_1,2);
  uVar6 = FUN_016eb0a0(param_1,3);
  uVar3 = CONCAT11(uVar2,2);
  uVar2 = FUN_016eacf0(param_1,4,uVar3);
  uVar4 = (undefined1)((ushort)uVar3 >> 8);
  uVar7 = FUN_016eb0a0(param_1,5);
  uVar8 = FUN_016ea920(param_1,6,CONCAT11(uVar4,2),local_79);
  if (local_79[0] == '\x01') {
    uVar8 = 0x46293e5939a08cea;
  }
  uVar9 = FUN_016eb0a0(param_1,7);
  uVar4 = 0;
  FUN_016ee260(param_1,&local_88,0x70,0);
  FUN_00f59f00(param_1,param_2,CONCAT11(uVar4,1),2,3,uVar1,uVar5,uVar6,uVar2,uVar7,uVar8,uVar9,
               local_88);
  FUN_016e9f40(param_1,FUN_00f5a040);
  return;
}

