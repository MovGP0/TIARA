/* Ghidra address: 0149de70 */
/* Ghidra symbol: FUN_0149de70 */


undefined4 FUN_0149de70(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = FUN_01a97e00();
  FUN_01a98380(param_2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&local_30,
               &local_34);
  iVar1 = FUN_005fce00(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0x80));
  iVar2 = FUN_01d12340(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90));
  fVar5 = (float)FUN_01a9a6d0(param_2);
  uVar3 = FUN_0040c770((double)iVar1 * (double)fVar5 * *(double *)(param_2 + 0x70));
  FUN_005fce30(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0x80),uVar3);
  fVar5 = (float)FUN_01a9a6d0(param_2);
  uVar3 = FUN_0040c770((double)iVar2 * (double)fVar5 * *(double *)(param_2 + 0x70));
  FUN_01d12350(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90),uVar3);
  local_40 = FUN_00498310(local_30,local_34);
  (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),&local_40);
  local_2c = FUN_01a5eed0(*(undefined8 *)(param_1 + 0x28),uVar4);
  local_40 = FUN_00498310(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  (**(code **)(**(longlong **)(param_1 + 0x28) + 200))(*(longlong **)(param_1 + 0x28),&local_40);
  FUN_005fce30(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x90) + 0x80),iVar1);
  FUN_01d12350(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x90),iVar2);
  FUN_01a97ea0(param_2,uVar4);
  local_38 = 0;
  FUN_01a984b0(param_2,0,local_2c,&local_38,&local_2c);
  return local_2c;
}

