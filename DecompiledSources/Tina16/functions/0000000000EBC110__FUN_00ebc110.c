/* Ghidra address: 00ebc110 */
/* Ghidra symbol: FUN_00ebc110 */


void FUN_00ebc110(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x260))(*(longlong **)(param_1 + 0x6f8));
  if (iVar1 == 0) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    FUN_00eb9b70(*(undefined8 *)(param_1 + 0x768),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x4a0),0,uVar2,
                 *(undefined4 *)(param_1 + 0x760));
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),local_20);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728))
    ;
    FUN_00eb9b70(*(undefined8 *)(param_1 + 0x768),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x710) + 0x4a0),local_20[0],uVar2,
                 *(undefined4 *)(param_1 + 0x760));
  }
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x268))(*(longlong **)(param_1 + 0x710),0);
  FUN_00414480(local_20);
  return;
}

