/* Ghidra address: 00648cd0 */
/* Ghidra symbol: FUN_00648cd0 */


void FUN_00648cd0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [44];
  int local_2c;
  
  puVar3 = (undefined8 *)FUN_004095c0(0x10);
  *puVar3 = param_2;
  uVar4 = FUN_00648c90(auStack_58);
  puVar3[1] = uVar4;
  cVar1 = FUN_00648c40(param_1,puVar3[1],&local_2c);
  if (cVar1 == '\0') {
    FUN_004ae7e0(param_1,puVar3);
  }
  else {
    puVar5 = (undefined8 *)FUN_004aeac0(param_1,local_2c);
    uVar4 = FUN_0065b870(*puVar3);
    uVar6 = FUN_0065b870(*puVar5);
    iVar2 = thunk_FUN_03ec68d2(uVar4,uVar6);
    if (iVar2 != 0) {
      local_2c = local_2c + 1;
    }
    FUN_004aec30(param_1,local_2c,puVar3);
  }
  return;
}

