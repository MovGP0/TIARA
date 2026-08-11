/* Ghidra address: 00662550 */
/* Ghidra symbol: FUN_00662550 */


void FUN_00662550(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_34 [16];
  undefined1 local_24 [12];
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x30);
  FUN_004238d0(local_34,param_2,param_3,param_2 + iVar1 + -2,param_3 + iVar1 + -2);
  plVar3 = (longlong *)FUN_00781840();
  cVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if (cVar2 == '\0') {
    uVar4 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
    thunk_FUN_03ea73e5(uVar4,local_34,1,0);
  }
  else {
    plVar3 = (longlong *)FUN_00781840();
    (**(code **)(*plVar3 + 0x228))(plVar3,local_24,0x34);
    uVar4 = FUN_00781840();
    uVar5 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
    FUN_00778dc0(uVar4,uVar5,local_24,local_34,0,0);
  }
  return;
}

