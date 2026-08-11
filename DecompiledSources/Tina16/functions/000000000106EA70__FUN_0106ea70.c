/* Ghidra address: 0106ea70 */
/* Ghidra symbol: FUN_0106ea70 */


void FUN_0106ea70(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  if (*(int *)(param_1 + 0x508) == 1) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b8),local_20);
    if (local_20[0] != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4f0);
      iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_20[0]);
      if (iVar2 < 0) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4f0);
        (**(code **)(*plVar1 + 200))(plVar1,0,local_20[0]);
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4f0);
        (**(code **)(*plVar1 + 0x98))(plVar1,iVar2);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x4f0);
        (**(code **)(*plVar1 + 200))(plVar1,0,local_20[0]);
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_20[0]);
      }
    }
  }
  FUN_00414480(local_20);
  return;
}

