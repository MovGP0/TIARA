/* Ghidra address: 01bbc460 */
/* Ghidra symbol: FUN_01bbc460 */


undefined1 FUN_01bbc460(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_00416db0(local_res10[0],L"IBIS VER");
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res10[0],L"FILE NAME");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_res10[0],L"FILE REV");
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(local_res10[0],L"DATE");
        if (iVar2 != 0) {
          iVar2 = FUN_00416db0(local_res10[0],L"SOURCE");
          if (iVar2 != 0) {
            iVar2 = FUN_00416db0(local_res10[0],L"NOTES");
            if (iVar2 != 0) {
              iVar2 = FUN_00416db0(local_res10[0],L"DISCLAIMER");
              if (iVar2 != 0) {
                iVar2 = FUN_00416db0(local_res10[0],L"COPYRIGHT");
                if (iVar2 != 0) {
                  uVar1 = 0;
                  goto LAB_01bbc520;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar1 = 1;
LAB_01bbc520:
  FUN_00414480(local_res10);
  return uVar1;
}

