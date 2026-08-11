/* Ghidra address: 00619790 */
/* Ghidra symbol: FUN_00619790 */


undefined1 FUN_00619790(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  uint local_res10;
  undefined1 auStack_a8 [40];
  undefined1 *local_80;
  int *local_78;
  int *local_70;
  int *local_68;
  undefined8 local_60;
  longlong local_50;
  undefined1 local_44 [4];
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined1 local_21;
  int *local_20;
  
  local_80 = auStack_a8;
  cVar1 = FUN_00619630(param_1);
  if (cVar1 == '\0') {
    if (param_2 == 0) {
      local_21 = 1;
    }
    else {
      FUN_00619290(local_44);
      iVar2 = FUN_00619650(param_1);
      if (0 < iVar2) {
        if (param_2 != 0xffffffff) {
          FUN_00616f70(local_40);
        }
        iVar2 = FUN_00619650();
        local_28 = 0;
        if (-1 < iVar2 + -1) {
          do {
            FUN_006192a0(local_44);
            cVar1 = FUN_00619630(param_1);
            if (cVar1 != '\0') {
              return 0;
            }
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      local_res10 = param_2;
      if (param_2 != 0xffffffff) {
        local_50 = FUN_00616e10(local_40);
        if ((0x7fffffff < local_50) || ((longlong)(ulonglong)param_2 <= local_50)) {
          return 1;
        }
        local_res10 = param_2 - (int)local_50;
      }
      local_60 = *(undefined8 *)(param_1 + 8);
      if (*(longlong *)PTR_PTR_02002ff8 == 0) {
        FUN_004098e0(0x1a);
      }
      uVar3 = FUN_004121f0(local_60);
      FUN_00411f00(uVar3,0xffffffff);
      local_68 = (int *)(param_1 + 0x14);
      LOCK();
      *local_68 = *local_68 + 1;
      UNLOCK();
      cVar1 = FUN_00619630();
      if (cVar1 == '\0') {
        local_78 = (int *)(param_1 + 0x18);
        LOCK();
        *local_78 = *local_78 + 1;
        UNLOCK();
        cVar1 = FUN_00412690(*(undefined8 *)(param_1 + 8),local_res10);
        local_21 = cVar1 == '\0';
        local_20 = (int *)(param_1 + 0x14);
        LOCK();
        *local_20 = *local_20 + -1;
        UNLOCK();
        FUN_00412130(*(undefined8 *)(param_1 + 8));
      }
      else {
        local_70 = (int *)(param_1 + 0x14);
        LOCK();
        *local_70 = *local_70 + -1;
        UNLOCK();
        local_21 = 0;
        FUN_006199f0(0,local_80);
      }
    }
  }
  else {
    local_21 = 0;
  }
  return local_21;
}

