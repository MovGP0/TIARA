/* Ghidra address: 0068fda0 */
/* Ghidra symbol: FUN_0068fda0 */


void FUN_0068fda0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 local_38;
  undefined4 local_34;
  
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
  uVar4 = thunk_FUN_03de17fb(uVar4);
  lVar5 = FUN_00652a60(&PTR_FUN_0067b560,1,uVar4);
  *(longlong *)(param_1 + 0x40) = lVar5;
  *(longlong *)(lVar5 + 0x498) = param_1;
  cVar1 = FUN_0068ff80(param_1);
  lVar5 = *(longlong *)(param_1 + 0x40);
  *(bool *)(lVar5 + 0x4a0) = cVar1 == '\0';
  *(undefined1 *)(lVar5 + 0x490) = 0;
  FUN_0068fbb0(param_1,&local_38);
  uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
  uVar2 = FUN_004230a0(&local_38);
  uVar3 = FUN_004230c0(&local_38);
  thunk_FUN_041cc6e2(uVar4,0,local_38,local_34,uVar2,uVar3,8);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0xa9) != '\0') {
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
    thunk_FUN_03ab0e43(uVar4,5);
  }
  return;
}

