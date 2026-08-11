/* Ghidra address: 005c3230 */
/* Ghidra symbol: FUN_005c3230 */


undefined8 FUN_005c3230(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_78 [6];
  undefined8 local_48 [6];
  
  puVar4 = local_78;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar4 = local_48;
  for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uVar1 = FUN_005c2410(param_1,param_3);
  iVar2 = FUN_005c2340(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    FUN_00417740(local_48,&DAT_005bc4e0);
    puVar4 = local_48;
    for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    FUN_005c1d70(param_2,param_3,local_48);
  }
  else {
    FUN_005c2810(param_1,local_78,param_3,uVar1,3);
    FUN_005c1d70(param_2,param_3,local_78);
  }
  FUN_00417840(local_78,&DAT_005bc4e0,2);
  return param_2;
}

