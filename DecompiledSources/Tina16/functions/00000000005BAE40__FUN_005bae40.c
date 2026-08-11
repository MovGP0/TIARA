/* Ghidra address: 005bae40 */
/* Ghidra symbol: FUN_005bae40 */


bool FUN_005bae40(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  bool local_31;
  undefined8 local_30 [2];
  undefined1 local_20 [16];
  undefined8 local_10;
  
  FUN_00417580(local_20,&DAT_005b95f0);
  cVar1 = FUN_005b9f70(local_20,param_1,&local_10);
  if (cVar1 != '\0') {
    *param_2 = DAT_02011f20;
  }
  else {
    FUN_005ba1c0(local_30,local_10);
    *param_2 = local_30[0];
  }
  local_31 = cVar1 == '\0';
  FUN_00417740(local_20,&DAT_005b95f0);
  return local_31;
}

