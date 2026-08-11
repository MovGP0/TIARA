/* Ghidra address: 016faac0 */
/* Ghidra symbol: FUN_016faac0 */


bool FUN_016faac0(undefined8 param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_30 = 0;
  local_38 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_016fa6c0(param_1,param_2,&local_10,&local_18);
  FUN_00416880(&local_28,local_10);
  FUN_0043e130(&local_20,local_28);
  FUN_00416880(&local_38,local_18);
  FUN_0043e130(&local_30,local_38);
  iVar1 = FUN_00416db0(local_20,local_30);
  if ((param_3 == '\0') && (iVar1 != 0)) {
    FUN_00d30b80(L"Dedication error (HME)!",0x10);
  }
  FUN_00414560(&local_38,4);
  FUN_00414590(&local_18,2);
  return iVar1 == 0;
}

