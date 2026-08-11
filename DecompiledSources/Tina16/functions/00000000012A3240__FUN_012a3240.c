/* Ghidra address: 012a3240 */
/* Ghidra symbol: FUN_012a3240 */


void FUN_012a3240(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  byte local_19;
  
  local_38 = 0;
  local_30 = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  FUN_00e16d60(param_2,param_1 + 0x23);
  FUN_00e171a0(&local_19,&local_28);
  uVar2 = (uint)local_19;
  iVar1 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    do {
      FUN_004169a0(&local_30,local_28 + (longlong)iVar1 * 0x29);
      (**(code **)(**(longlong **)(param_1 + 0x88) + 0x78))(*(longlong **)(param_1 + 0x88),local_30)
      ;
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_004095f0(local_28,(uint)local_19 * 0x29);
  FUN_00e175f0(&local_19,&local_28);
  uVar2 = (uint)local_19;
  iVar1 = 0;
  if (-1 < (int)(uVar2 - 1)) {
    do {
      FUN_004169a0(&local_38,local_28 + (longlong)iVar1 * 0x29);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))(*(longlong **)(param_1 + 0x80),local_38)
      ;
      iVar1 = iVar1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_004095f0(local_28,(uint)local_19 * 0x29);
  FUN_00414560(&local_38,2);
  return;
}

