/* Ghidra address: 0183bf40 */
/* Ghidra symbol: FUN_0183bf40 */


void FUN_0183bf40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_01836fd0(param_1,local_20,param_2);
  lVar1 = FUN_01850310(&PTR_FUN_01842238,1,param_3,*(undefined8 *)(param_1 + 0x50),local_20[0]);
  FUN_01847420(param_4,lVar1);
  uVar2 = FUN_0181e3c0(param_2,0);
  FUN_0183d1c0(param_1,uVar2,param_3,*(undefined8 *)(lVar1 + 0x28));
  uVar2 = FUN_0181e3c0(param_2,1);
  uVar2 = FUN_0183a030(param_1,uVar2,param_3);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  uVar2 = FUN_0181e3c0(param_2,2);
  FUN_0183d1c0(param_1,uVar2,param_3,*(undefined8 *)(lVar1 + 0x38));
  uVar2 = FUN_0181e3c0(param_2,3);
  FUN_0183d1c0(param_1,uVar2,param_3,lVar1);
  FUN_01836fd0(param_1,&local_28,param_2);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_28);
  FUN_00414560(&local_28,2);
  return;
}

