/* Ghidra address: 0056df10 */
/* Ghidra symbol: FUN_0056df10 */


char FUN_0056df10(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_28 [32];
  
  *param_2 = 0;
  FUN_00417580(local_28,&DAT_00527bf8);
  uVar2 = FUN_00417740(local_28,&DAT_00527bf8);
  cVar1 = FUN_0053c240(param_1,&DAT_004033c8,uVar2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_0041b800(param_2);
    FUN_00573970(local_28,uVar2);
  }
  FUN_00417740(local_28,&DAT_00527bf8);
  return cVar1;
}

