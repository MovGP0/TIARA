/* Ghidra address: 01d120c0 */
/* Ghidra symbol: FUN_01d120c0 */


undefined1 FUN_01d120c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_004170c0(L"@ Configuration begin",local_res10[0],1);
  if (iVar2 == 0) {
    FUN_0043e130(&local_10,L"# Hide from here");
    FUN_0043e130(&local_18,local_res10[0]);
    iVar2 = FUN_004170c0(local_10,local_18,1);
    if (iVar2 == 0) {
      FUN_0043e130(&local_20,L"{ Hide from here");
      FUN_0043e130(&local_28,local_res10[0]);
      iVar2 = FUN_004170c0(local_20,local_28,1);
      if (iVar2 == 0) {
        uVar1 = 1;
        goto LAB_01d1217e;
      }
    }
  }
  uVar1 = 0;
LAB_01d1217e:
  FUN_00414560(&local_28,4);
  FUN_00414480(local_res10);
  return uVar1;
}

