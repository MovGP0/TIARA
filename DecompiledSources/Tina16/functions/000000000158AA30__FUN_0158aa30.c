/* Ghidra address: 0158aa30 */
/* Ghidra symbol: FUN_0158aa30 */


bool FUN_0158aa30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_60 [10];
  
  puVar4 = local_60;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  FUN_00417740(local_60,&DAT_015764a8);
  puVar4 = local_60;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,local_60);
  FUN_00417740(local_60,&DAT_015764a8);
  return iVar2 == 0;
}

