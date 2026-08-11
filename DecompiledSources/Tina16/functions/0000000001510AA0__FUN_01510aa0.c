/* Ghidra address: 01510aa0 */
/* Ghidra symbol: FUN_01510aa0 */


undefined1 FUN_01510aa0(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined1 local_9;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_9 = 1;
  iVar1 = FUN_00416db0(local_res10[0],&DAT_01510b74);
  if (iVar1 == 0) {
    *param_3 = 0;
  }
  else {
    iVar1 = FUN_00416db0(local_res10[0],L"High");
    if (iVar1 == 0) {
      *param_3 = 1;
    }
    else {
      iVar1 = FUN_00416db0(local_res10[0],L"Dontcare");
      if (iVar1 == 0) {
        *param_3 = 2;
      }
      else {
        iVar1 = FUN_00416db0(local_res10[0],L"HighZ");
        if (iVar1 == 0) {
          *param_3 = 3;
        }
        else {
          local_9 = 0;
        }
      }
    }
  }
  FUN_00414480(local_res10);
  return local_9;
}

