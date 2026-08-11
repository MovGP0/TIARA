/* Ghidra address: 0183c0a0 */
/* Ghidra symbol: FUN_0183c0a0 */


void FUN_0183c0a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  FUN_01836fd0(param_1,local_20,param_2);
  lVar2 = FUN_0184f010(&PTR_FUN_018419f0,1,param_3,*(undefined8 *)(param_1 + 0x50),local_20[0]);
  FUN_01847420(param_4,lVar2);
  uVar3 = FUN_0181e3c0(param_2,0);
  uVar3 = FUN_0183a030(param_1,uVar3,param_3);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  iVar1 = FUN_0181e3e0(param_2);
  if (1 < iVar1) {
    uVar3 = FUN_0181e3c0(param_2,1);
    FUN_0183d1c0(param_1,uVar3,param_3,lVar2);
  }
  FUN_01836fd0(param_1,&local_28,param_2);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_28);
  FUN_00414560(&local_28,2);
  return;
}

