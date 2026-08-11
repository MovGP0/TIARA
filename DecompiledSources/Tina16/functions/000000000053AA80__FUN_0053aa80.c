/* Ghidra address: 0053aa80 */
/* Ghidra symbol: FUN_0053aa80 */


undefined4 FUN_0053aa80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  FUN_00417580(param_3,&DAT_00527bf8);
  puVar2 = (undefined8 *)FUN_00536e10(param_1);
  puVar3 = (undefined8 *)FUN_00589390(param_2);
  uVar1 = FUN_00411580(*puVar2,*puVar3);
  if ((char)uVar1 != '\0') {
    uVar4 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538170(puVar2,param_2,uVar4);
  }
  return uVar1;
}

