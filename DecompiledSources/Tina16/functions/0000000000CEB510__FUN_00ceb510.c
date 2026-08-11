/* Ghidra address: 00ceb510 */
/* Ghidra symbol: FUN_00ceb510 */


void FUN_00ceb510(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_00cea968);
  if (cVar1 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_00cc5380(*(undefined8 *)(param_2 + 0x18),local_20);
    FUN_00cc4c30(*(undefined8 *)(param_1 + 0x18),local_20[0]);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
              (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
  }
  FUN_00414480(local_20);
  return;
}

