/* Ghidra address: 005660f0 */
/* Ghidra symbol: FUN_005660f0 */


char FUN_005660f0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_00527bf8);
  uVar2 = FUN_00417740(local_28,&DAT_00527bf8);
  cVar1 = FUN_0053c240(param_1,&DAT_00401428,uVar2,param_3);
  if (cVar1 != '\0') {
    FUN_00572610(local_28,param_2);
  }
  FUN_00417740(local_28,&DAT_00527bf8);
  return cVar1;
}

