/* Ghidra address: 00618410 */
/* Ghidra symbol: FUN_00618410 */


undefined1 FUN_00618410(longlong *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_10;
  
  local_20 = 0;
  FUN_005ba740(param_2);
  uVar2 = FUN_0040c840();
  if (((longlong)uVar2 < 0) || (0x7fffffff < (longlong)uVar2)) {
    FUN_005ba600(&local_20,param_2);
    local_18 = local_20;
    local_10 = 0x11;
    uVar3 = FUN_0044d8d0(&PTR_FUN_00434000,1,PTR_PTR_02003f98,&local_18,0);
    uVar2 = FUN_004134c0(uVar3);
  }
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,uVar2 & 0xffffffff);
  FUN_00414480(&local_20);
  return uVar1;
}

