/* Ghidra address: 01807500 */
/* Ghidra symbol: FUN_01807500 */


void FUN_01807500(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_28 = 0;
  uVar3 = param_2;
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_004bf510(param_2);
  while( true ) {
    cVar2 = FUN_004be290(param_2);
    if (cVar2 != '\0') break;
    bVar1 = FUN_004bea50(param_2);
    if (bVar1 < 0x10) {
      bVar4 = ((int)CONCAT62((int6)((ulonglong)uVar3 >> 0x10),1) << (bVar1 & 0x1f) & 0x1040U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      FUN_004c1ed0(param_2,local_20);
      FUN_004168e0(&local_28,local_20[0]);
      uVar3 = local_28;
      (**(code **)(*param_1 + 0x70))(param_1,local_28);
    }
    else {
      FUN_004c23a0(param_2,&local_30);
      FUN_004168e0(&local_38,local_30);
      uVar3 = local_38;
      (**(code **)(*param_1 + 0x70))(param_1,local_38);
    }
  }
  FUN_004bf520(param_2);
  FUN_00414520(&local_38);
  FUN_00414480(&local_30);
  FUN_00414520(&local_28);
  FUN_00414480(local_20);
  return;
}

