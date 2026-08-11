/* Ghidra address: 00f59330 */
/* Ghidra symbol: FUN_00f59330 */


void FUN_00f59330(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_78;
  undefined8 local_70 [10];
  
  uVar2 = FUN_016eb0a0(param_1,1);
  uVar3 = FUN_016eb0a0(param_1,2);
  uVar4 = FUN_016eb0a0(param_1,3);
  uVar5 = FUN_016eb0a0(param_1,4);
  FUN_016ee260(param_1,local_70,0x88,0);
  FUN_00f56f20(param_1,param_2,1,2,3,4,uVar2,uVar3,uVar4,uVar5,local_70[0]);
  FUN_016e9f40(param_1,FUN_00f58720);
  FUN_016e9ff0(param_1,FUN_00f56c70);
  FUN_016ea040(param_1,FUN_00f56e30);
  lVar1 = *(longlong *)(param_1 + 0x130);
  local_78 = FUN_00f58e20(&PTR_FUN_00f58ac8,1,param_1,param_2);
  FUN_00597e50(lVar1 + 8,&local_78);
  return;
}

