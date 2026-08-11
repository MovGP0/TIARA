/* Ghidra address: 00849980 */
/* Ghidra symbol: FUN_00849980 */


void FUN_00849980(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 in_RAX;
  ulonglong uVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined4 uStack_a4;
  undefined1 local_a0 [4];
  int local_9c;
  int local_8c;
  undefined1 local_68 [4];
  int local_64;
  int local_54;
  undefined8 local_30;
  
  if (*(byte *)(param_1 + 0x550) < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (*(byte *)(param_1 + 0x550) & 0x1f)
            & 0x32U) != 0;
  }
  else {
    bVar7 = false;
  }
  if (bVar7) {
    thunk_FUN_03cc0d62(&local_30);
    local_30 = FUN_0064d3a0(param_1,&local_30);
    FUN_00841d10(param_1,local_a0);
    bVar6 = 0;
    uVar4 = FUN_008417f0(param_1,local_30 & 0xffffffff,local_30._4_4_,local_a0);
    cVar1 = *(char *)(param_1 + 0x550);
    if (cVar1 == '\x01') {
      pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
      cVar1 = (*pcVar5)(param_1);
      if (cVar1 == '\0') {
        if ((int)local_30 < local_9c) {
          bVar6 = 1;
        }
        else if (local_8c < (int)local_30) {
          bVar6 = 2;
        }
      }
      else {
        iVar2 = FUN_0064d0b0(param_1);
        iVar3 = FUN_0064d0b0(param_1);
        if ((int)local_30 < iVar2 - local_8c) {
          bVar6 = 2;
        }
        else if (iVar3 - local_9c < (int)local_30) {
          bVar6 = 1;
        }
      }
      if (local_30._4_4_ < local_64) {
        bVar6 = bVar6 | 4;
      }
      else if (local_54 < local_30._4_4_) {
        bVar6 = bVar6 | 8;
      }
      if (bVar6 != 0) {
        pcVar5 = (code *)FUN_00411550(param_1,0xff9e);
        (*pcVar5)(param_1,bVar6);
      }
    }
    else if (cVar1 == '\x04') {
      uStack_a4 = (undefined4)(uVar4 >> 0x20);
      FUN_00848040(param_1,local_30._4_4_,uStack_a4,local_a0,local_68,1,&local_30);
    }
    else if (cVar1 == '\x05') {
      FUN_00848040(param_1,local_30 & 0xffffffff,uVar4 & 0xffffffff,local_a0,local_a0,0,&local_30);
    }
  }
  return;
}

