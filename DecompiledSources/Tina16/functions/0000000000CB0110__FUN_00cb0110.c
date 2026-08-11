/* Ghidra address: 00cb0110 */
/* Ghidra symbol: FUN_00cb0110 */


undefined8
FUN_00cb0110(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4,byte param_5,
            undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_0041b910(param_6);
  FUN_00414480(param_2);
  FUN_00875240(local_30,param_6,*(undefined8 *)(param_1 + 0x150),3);
  FUN_0041b840(&param_6,local_30[0]);
  FUN_00877e10(local_20,param_3,param_6);
  uVar3 = 0;
  while( true ) {
    iVar1 = FUN_00c8b6a0(*(undefined8 *)(param_1 + 0x108),local_20[0],uVar3);
    if (iVar1 != -1) break;
    lVar5 = 0;
    if (local_20[0] != 0) {
      lVar5 = *(longlong *)(local_20[0] + -8);
    }
    uVar3 = FUN_008764b0(0,((longlong)*(int *)(*(longlong *)(param_1 + 0x108) + 0x30) + 1) - lVar5);
    FUN_00cae370(param_1,1,param_7,1);
  }
  if ((param_5 & param_4) == 0) {
    FUN_00c8aff0(*(undefined8 *)(param_1 + 0x108),param_2,iVar1,param_6);
    if (param_4 != 0) {
      uVar4 = 0;
      if (local_20[0] != 0) {
        uVar4 = *(ulonglong *)(local_20[0] + -8);
      }
      FUN_00c8b3f0(*(undefined8 *)(param_1 + 0x108),uVar4 & 0xffffffff);
    }
    if (param_5 != 0) {
      FUN_00416ad0(param_2,param_3);
    }
  }
  else {
    iVar2 = 0;
    if (local_20[0] != 0) {
      iVar2 = (int)*(undefined8 *)(local_20[0] + -8);
    }
    FUN_00c8aff0(*(undefined8 *)(param_1 + 0x108),param_2,iVar1 + iVar2,param_6);
  }
  FUN_0041b800(local_30);
  FUN_00419430(local_20,&DAT_0086e978);
  FUN_0041b800(&param_6);
  return param_2;
}

