/* Ghidra address: 0053ab00 */
/* Ghidra symbol: FUN_0053ab00 */


undefined4 FUN_0053ab00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 unaff_RDI;
  longlong local_30 [2];
  
  FUN_00417580(param_3,&DAT_00527bf8);
  FUN_005382b0(param_1,local_30);
  puVar2 = (undefined8 *)FUN_00589390(param_2);
  puVar2 = (undefined8 *)FUN_00589390(*(undefined8 *)*puVar2);
  if (local_30[0] != 0) {
    cVar1 = FUN_00411580(local_30[0],*puVar2);
    if (cVar1 == '\0') {
      uVar4 = 0;
      goto LAB_0053ab66;
    }
  }
  uVar4 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
LAB_0053ab66:
  if ((char)uVar4 != '\0') {
    uVar3 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538170(local_30[0],param_2,uVar3);
  }
  return uVar4;
}

