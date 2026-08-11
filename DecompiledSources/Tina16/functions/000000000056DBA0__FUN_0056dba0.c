/* Ghidra address: 0056dba0 */
/* Ghidra symbol: FUN_0056dba0 */


char FUN_0056dba0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_00527bf8);
  uVar2 = FUN_00417740(local_28,&DAT_00527bf8);
  cVar1 = FUN_0053c240(param_1,&DAT_004010c0,uVar2,param_3);
  if (cVar1 != '\0') {
    FUN_005737e0(local_28,param_2);
  }
  FUN_00417740(local_28,&DAT_00527bf8);
  return cVar1;
}

