/* Ghidra address: 01167c50 */
/* Ghidra symbol: FUN_01167c50 */


void FUN_01167c50(undefined4 *param_1,longlong param_2)

{
  int iVar1;
  byte local_38 [21];
  undefined1 local_23 [11];
  
  iVar1 = FUN_01167b10(4);
  FUN_005fce30(*(undefined8 *)(param_2 + 0x70),iVar1 + 4);
  FUN_005fc860(*(undefined8 *)(param_2 + 0x70),DAT_0203aea8);
  FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0xff);
  FUN_005fdab0(*(undefined8 *)(param_2 + 0x80),param_1[4]);
  FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),0);
  FUN_005fd4e0(*(undefined8 *)(param_2 + 0x78),param_1[4]);
  FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
  FUN_00415020(local_23,param_1 + 10,10);
  FUN_004151b0(local_38,local_23,1,3);
  iVar1 = FUN_00414f50(local_38,&DAT_01167e78,(ulonglong)local_38[0] + 1);
  if (iVar1 == 0) {
    FUN_004151b0(local_38,local_23,1,3);
    FUN_00415020(local_23,local_38,10);
  }
  FUN_004151b0(local_38,local_23,1,3);
  iVar1 = FUN_00414f50(local_38,&DAT_01167e7c,(ulonglong)local_38[0] + 1);
  if (iVar1 == 0) {
    FUN_004151b0(local_38,local_23,1,4);
    FUN_00415020(local_23,local_38,10);
  }
  FUN_004151b0(local_38,local_23,1,3);
  iVar1 = FUN_00414f50(local_38,&DAT_01167e80,(ulonglong)local_38[0] + 1);
  if (iVar1 == 0) {
    FUN_004151b0(local_38,local_23,1,3);
    FUN_00415020(local_23,local_38,10);
  }
  if (param_1[9] == 0) {
    if ((*PTR_DAT_02001a98 != '\0') && (iVar1 = FUN_00416db0(DAT_0203d960,L"GENERATOR"), iVar1 == 0)
       ) {
      DAT_0203d968 = *param_1;
      DAT_0203d96c = param_1[1];
      return;
    }
    FUN_011650d0(&DAT_01167eb0,&LAB_01167ec0,*param_1,param_1[1],DAT_0203d9a0,0);
  }
  return;
}

