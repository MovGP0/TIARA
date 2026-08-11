/* Ghidra address: 005c8720 */
/* Ghidra symbol: FUN_005c8720 */


bool FUN_005c8720(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_48 [7];
  
  puVar4 = local_48;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  FUN_00417740(local_48,&DAT_005bc4e0);
  puVar4 = local_48;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x38);
  iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,local_48);
  FUN_00417740(local_48,&DAT_005bc4e0);
  return iVar2 == 0;
}

