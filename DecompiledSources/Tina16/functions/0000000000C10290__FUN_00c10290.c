/* Ghidra address: 00c10290 */
/* Ghidra symbol: FUN_00c10290 */


void FUN_00c10290(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = (longlong *)FUN_00bd73a0(&PTR_FUN_00bd5550,1,0);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    FUN_00bd77a0(local_20);
  }
  else {
    (**(code **)(*local_20 + 0x10))(local_20,*(undefined8 *)(*(longlong *)(param_2 + 0x40) + 0x5d8))
    ;
  }
  local_24 = 0;
LAB_00c10364:
  do {
    if (*(int *)(local_20[2] + 0x10) <= local_24) {
      FUN_004c48b0(param_2,local_20);
      FUN_00410f20(local_20);
      return;
    }
    local_30 = FUN_00bd7720(local_20,local_24);
    uVar1 = FUN_00bd6e90(local_30);
    uVar2 = FUN_00bd7120(local_30);
    local_34 = FUN_00bd7690(*(undefined8 *)(param_1 + 0x5d8),uVar1,uVar2);
    if (-1 < local_34) {
      lVar3 = FUN_00bd7720(*(undefined8 *)(param_1 + 0x5d8),local_34);
      if (*(short *)(lVar3 + 0x20) == *(short *)(local_30 + 0x20)) {
        FUN_00410f20(local_30);
        goto LAB_00c10364;
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}

