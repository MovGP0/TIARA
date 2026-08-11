/* Ghidra address: 005c31b0 */
/* Ghidra symbol: FUN_005c31b0 */


void FUN_005c31b0(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_48 [7];
  
  puVar3 = local_48;
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uVar1 = FUN_005c2410(param_1,param_2);
  FUN_005c2810(param_1,local_48,param_2,uVar1,5);
  FUN_00417740(local_48,&DAT_005bc4e0);
  return;
}

