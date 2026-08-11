/* Ghidra address: 0184aea0 */
/* Ghidra symbol: FUN_0184aea0 */


longlong FUN_0184aea0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  lVar2 = FUN_0184b380(param_1,param_2[2],1);
  local_28 = 0;
  cVar1 = FUN_004113d0(lVar2,&PTR_FUN_018453c0);
  if (cVar1 != '\0') {
    local_28 = lVar2;
  }
  if (lVar2 == 0) {
    FUN_00410ae0(*param_2,local_20);
    local_28 = FUN_01849b80(&PTR_FUN_018453c0,1,param_2[2],local_20[0]);
    FUN_01847420(*(undefined8 *)(param_1 + 0xa0),local_28);
  }
  FUN_00414480(local_20);
  return local_28;
}

