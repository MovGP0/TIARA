/* Ghidra address: 014d9b90 */
/* Ghidra symbol: FUN_014d9b90 */


void FUN_014d9b90(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_f0;
  undefined1 local_e8 [88];
  undefined8 local_90;
  undefined8 local_70;
  undefined8 local_68;
  
  cVar3 = FUN_01b07dd0(param_2);
  if ((cVar3 == '\0') || (*(int *)(*(longlong *)(param_1 + 0x128) + 0x20) < 1)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  FUN_016ebb00(param_1,1,local_e8,0xc0);
  if (bVar2) {
    local_70 = 0x3f847ae147ae147b;
    local_68 = 0x4014000000000000;
    local_90 = 0x3e601b2b29a4692b;
  }
  FUN_016ee260(param_1,&local_f0,8,0);
  FUN_014d8640(param_1,param_2,1,2,3,4,local_e8,&local_f0);
  FUN_016e9f40(param_1,FUN_014d9b40);
  FUN_016e9f60(param_1,FUN_014d8520);
  FUN_016e9fa0(param_1,FUN_014d7480);
  if (bVar2) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x128) + 0x20);
    uVar4 = FUN_014cdce0(*(undefined8 *)(param_2 + 0xe8));
    _XMC_SetWorkspace(uVar4,iVar1 + -1,local_f0);
  }
  return;
}

