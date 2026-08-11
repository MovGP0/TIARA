/* Ghidra address: 010bbee0 */
/* Ghidra symbol: FUN_010bbee0 */


bool FUN_010bbee0(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  FUN_00414ad0(param_4,L"Arial");
  *(undefined4 *)(param_4 + 8) = 8;
  *(undefined1 *)(param_4 + 0xc) = 0;
  *(undefined1 *)(param_4 + 0xd) = 0;
  *(undefined4 *)(param_4 + 0x10) = 0;
  FUN_0043f750(&local_28,param_3);
  FUN_00416ba0(local_20,L"Font",local_28);
  FUN_004b4060(param_2,&local_10,local_20[0]);
  bVar5 = local_10 != 0;
  if (bVar5) {
    FUN_010ba530(&local_30,&local_10);
    FUN_00414ad0(param_4,local_30);
    FUN_010ba530(&local_38,&local_10);
    uVar2 = FUN_0043fc00(local_38);
    *(undefined4 *)(param_4 + 8) = uVar2;
    FUN_004b4060(param_2,&local_40,&DAT_010bc18c);
    iVar3 = FUN_00416db0(local_40,&DAT_010bc1a0);
    if (iVar3 == 0) {
      *(undefined4 *)(param_4 + 8) = 8;
    }
    FUN_004b4060(param_2,&local_48,&DAT_010bc18c);
    iVar3 = FUN_0043e420(local_48,&LAB_010bc1b4);
    if (0 < iVar3) {
      FUN_010ba530(&local_50,&local_10);
      uVar2 = FUN_005fbf60(local_50);
      *(undefined4 *)(param_4 + 0x10) = uVar2;
    }
    FUN_0043ea00(&local_58,local_10);
    FUN_00414b50(&local_10,local_58);
    iVar3 = 0;
    if (local_10 != 0) {
      iVar3 = *(int *)(local_10 + -4);
    }
    iVar4 = 1;
    if (0 < iVar3) {
      do {
        sVar1 = *(short *)(local_10 + -2 + (longlong)iVar4 * 2);
        if (sVar1 == 0x42) {
          *(undefined1 *)(param_4 + 0xc) = 1;
        }
        else if (sVar1 == 0x49) {
          *(undefined1 *)(param_4 + 0xd) = 1;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_58,8);
  FUN_00414480(&local_10);
  return bVar5;
}

