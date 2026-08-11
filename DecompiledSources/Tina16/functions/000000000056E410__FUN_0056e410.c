/* Ghidra address: 0056e410 */
/* Ghidra symbol: FUN_0056e410 */


char FUN_0056e410(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_38 [40];
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_00417580(local_38,&DAT_00527bf8);
  uVar2 = FUN_00417740(local_38,&DAT_00527bf8);
  cVar1 = FUN_0053c240(param_1,&DAT_004013f0,uVar2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_00460ba0(param_2);
    FUN_00573ba0(local_38,uVar2);
  }
  FUN_00417740(local_38,&DAT_00527bf8);
  return cVar1;
}

