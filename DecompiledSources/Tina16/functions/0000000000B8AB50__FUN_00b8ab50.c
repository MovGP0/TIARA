/* Ghidra address: 00b8ab50 */
/* Ghidra symbol: FUN_00b8ab50 */


undefined8
FUN_00b8ab50(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
            undefined8 param_5)

{
  char cVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  cVar1 = FUN_004113d0(param_3,&PTR_FUN_0063d930);
  if ((cVar1 == '\0') || (*(longlong *)(param_3 + 0xf0) == 0)) {
    cVar1 = FUN_004113d0(param_3,&PTR_FUN_007d94d0);
    if ((cVar1 == '\0') || (*(longlong *)(param_3 + 0xb0) == 0)) {
      FUN_00414ad0(param_2,param_5);
    }
    else {
      FUN_00b8a7d0(*(undefined8 *)(param_1 + 0x400),param_2,local_res20,
                   *(undefined8 *)(param_3 + 0xb0));
    }
  }
  else {
    FUN_00b8a7d0(*(undefined8 *)(param_1 + 0x400),param_2,local_res20,
                 *(undefined8 *)(param_3 + 0xf0));
  }
  FUN_00414560(&local_res20,2);
  return param_2;
}

