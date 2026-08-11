/* Ghidra address: 00849570 */
/* Ghidra symbol: FUN_00849570 */


void FUN_00849570(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 local_38 [24];
  
  iVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,2);
  iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,3);
  pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
  cVar1 = (*pcVar4)(param_1);
  if (cVar1 == '\0') {
    FUN_00423b80(local_38,(int)param_1[0x13] - iVar2,*(int *)((longlong)param_1 + 0x9c) - iVar3,
                 iVar2,iVar3);
  }
  else {
    FUN_00423b80(local_38,0,*(int *)((longlong)param_1 + 0x9c) - iVar3,iVar2,iVar3);
  }
  uVar5 = FUN_005fdb10(param_1[0x66]);
  thunk_FUN_03984819(*(undefined8 *)(param_2 + 8),local_38,uVar5);
  *(undefined8 *)(param_2 + 0x18) = 1;
  return;
}

