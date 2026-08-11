/* Ghidra address: 0104f2e0 */
/* Ghidra symbol: FUN_0104f2e0 */


void FUN_0104f2e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0xa8))(*(longlong **)(param_1 + 0x710));
  if (cVar1 != '\0') {
    FUN_00724270(*(undefined8 *)(param_1 + 0x710),local_20);
    FUN_00414ad0(param_1 + 0x8d8,local_20[0]);
    FUN_00441920(&local_30,*(undefined8 *)(param_1 + 0x8d8));
    FUN_00f60ce0(&local_28,local_30);
    FUN_00414ad0(param_1 + 0x8d0,local_28);
    uVar2 = FUN_004b9860(&PTR_FUN_0047c498,1,*(undefined8 *)(param_1 + 0x8d8),0xff00);
    FUN_01050620(param_1,uVar2);
    FUN_00410f20(uVar2);
    FUN_01053e80(param_1,0);
    FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),0);
    FUN_01051360(param_1);
  }
  FUN_00414560(&local_30,2);
  FUN_00414480(local_20);
  return;
}

