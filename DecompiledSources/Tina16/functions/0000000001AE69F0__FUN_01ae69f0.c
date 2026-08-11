/* Ghidra address: 01ae69f0 */
/* Ghidra symbol: FUN_01ae69f0 */


undefined1 FUN_01ae69f0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_21;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_21 = 0;
  *param_2 = 0;
  local_10 = 0;
  cVar1 = FUN_01acff30(param_1,&local_10);
  if (cVar1 == '\x02') {
    uVar2 = FUN_004aeac0(local_10,0);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_01aae560);
    if (cVar1 != '\0') {
      uVar2 = FUN_004aeac0(local_10,0);
      cVar1 = FUN_01ab5660(uVar2,param_2);
      if (cVar1 != '\0') {
        local_21 = 1;
      }
    }
    FUN_00410f20(local_10);
  }
  else {
    FUN_0041ddd0(local_20,&PTR_PTR_01acd590);
    FUN_0072d440(local_20[0],1,4,0);
    FUN_00410f20(local_10);
  }
  FUN_00414480(local_20);
  return local_21;
}

