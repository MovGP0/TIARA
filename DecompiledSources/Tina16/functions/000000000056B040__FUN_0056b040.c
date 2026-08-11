/* Ghidra address: 0056b040 */
/* Ghidra symbol: FUN_0056b040 */


char FUN_0056b040(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_00527bf8);
  uVar2 = FUN_00417740(local_28,&DAT_00527bf8);
  cVar1 = FUN_0053c240(param_1,&DAT_004017c8,uVar2,param_3);
  if (cVar1 != '\0') {
    FUN_00572fa0(local_28,param_2);
  }
  FUN_00417740(local_28,&DAT_00527bf8);
  return cVar1;
}

