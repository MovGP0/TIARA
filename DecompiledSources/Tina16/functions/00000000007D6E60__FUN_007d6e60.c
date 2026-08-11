/* Ghidra address: 007d6e60 */
/* Ghidra symbol: FUN_007d6e60 */


void FUN_007d6e60(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 *local_60;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3c [16];
  int local_2c;
  longlong *local_28;
  longlong *local_20;
  
  local_60 = auStack_98;
  local_78 = *(undefined4 *)(param_1 + 0x90);
  FUN_004238d0(local_3c,0,0,*(undefined4 *)(param_1 + 0x94));
  FUN_00614880(param_1);
  local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(local_28,(&DAT_01e12594)[*(byte *)(param_1 + 0xe0)]);
  (**(code **)(*local_28 + 0xe0))
            (local_28,*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x90));
  cVar1 = FUN_00609f90(local_28);
  if (cVar1 == '\a') {
    FUN_007d4f30(local_28);
  }
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060b9b0(local_20,1);
  (**(code **)(*local_20 + 0x70))(local_20,*(undefined4 *)(param_1 + 0x90));
  (**(code **)(*local_20 + 0x88))(local_20,*(undefined4 *)(param_1 + 0x94));
  iVar2 = thunk_FUN_041da135();
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      if ((param_3 == -1) || (param_3 == local_2c)) {
        local_48 = (longlong *)FUN_00609e10(local_28);
        (**(code **)(*local_48 + 0xa8))(local_48,local_3c);
        cVar1 = FUN_00609f90(local_28);
        if (cVar1 == '\a') {
          FUN_0060a2b0(local_28,2);
        }
        uVar3 = FUN_005ffa40(local_48);
        local_78 = 0;
        local_70 = 0;
        thunk_FUN_04153868(param_2,local_2c,uVar3,0);
        cVar1 = FUN_00609f90(local_28);
        if ((cVar1 == '\a') && (cVar1 = FUN_007d4fa0(local_28), cVar1 != '\0')) {
          FUN_0060a2b0(local_28,0);
        }
        local_50 = (longlong *)FUN_00609e10(local_20);
        (**(code **)(*local_50 + 0xa8))(local_50,local_3c);
        uVar3 = FUN_005ffa40(local_50);
        local_78 = 0;
        local_70 = 0x10;
        thunk_FUN_04153868(param_2,local_2c,uVar3,0);
        FUN_007d59d0(param_1,local_28,local_20);
      }
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_006148c0(param_1);
  return;
}

