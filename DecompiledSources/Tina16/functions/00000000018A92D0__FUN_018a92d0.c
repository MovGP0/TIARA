/* Ghidra address: 018a92d0 */
/* Ghidra symbol: FUN_018a92d0 */


int FUN_018a92d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res10 [3];
  int local_1c;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_1c = 0;
  iVar1 = FUN_004b2060();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_018b0ad0(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x90) + 0x578),iVar4);
      iVar2 = FUN_00416db0(*(undefined8 *)(lVar3 + 0x18),local_res10[0]);
      if (iVar2 == 0) {
        local_1c = 1;
        iVar1 = 0;
        if (-1 < iVar4 + -1) {
          do {
            lVar3 = FUN_018b0ad0(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x90) + 0x578),
                                 iVar1);
            iVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x38))(*(undefined8 **)(lVar3 + 0x38));
            local_1c = local_1c + iVar2;
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        break;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414480(local_res10);
  return local_1c;
}

