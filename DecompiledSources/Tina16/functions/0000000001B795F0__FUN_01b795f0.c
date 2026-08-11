/* Ghidra address: 01b795f0 */
/* Ghidra symbol: FUN_01b795f0 */


undefined1 FUN_01b795f0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong local_res10 [3];
  undefined1 local_41;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_41 = 1;
  if (local_res10[0] != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x28))();
    iVar3 = 0;
    if (-1 < iVar1 + -1) {
      do {
        FUN_004b5390(*(undefined8 *)(param_1 + 0x6e8),&local_20,iVar3);
        iVar2 = FUN_00416db0(local_20,local_res10[0]);
        if (iVar2 == 0) {
          local_41 = 0;
          FUN_0041ddd0(&local_30,&LAB_01b76f68);
          local_40 = local_res10[0];
          local_38 = 0x11;
          FUN_00442f70(&local_28,local_30,&local_40,0);
          FUN_0072d730(local_28,0xffffffff,0xffffffff);
          break;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return local_41;
}

