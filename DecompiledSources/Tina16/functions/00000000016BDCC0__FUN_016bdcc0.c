/* Ghidra address: 016bdcc0 */
/* Ghidra symbol: FUN_016bdcc0 */


void FUN_016bdcc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  cVar1 = FUN_016ba100(param_1,0x7b);
  if (cVar1 == '\0') {
    uVar2 = FUN_016baff0(param_1,param_2,param_3);
    *param_5 = uVar2;
    FUN_004144d0(param_4);
  }
  else {
    FUN_016bc400(param_1,&local_10);
    FUN_00414bf0(param_4,local_10);
    *param_5 = 0;
    FUN_016b9f90(param_1,0x7d);
  }
  FUN_004144d0(&local_10);
  return;
}

