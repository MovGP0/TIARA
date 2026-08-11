/* Ghidra address: 017db9e0 */
/* Ghidra symbol: FUN_017db9e0 */


void FUN_017db9e0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int local_70;
  int local_58;
  undefined1 local_50 [16];
  double local_40;
  double local_38;
  int local_30;
  int local_2c;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(char *)(param_1 + 0x91) == '\0') {
      FUN_017d8290(param_1);
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
    iVar8 = *(int *)(param_1 + 8) + -1;
    local_70 = 1;
    if (0 < iVar8) {
      do {
        if ((*(char *)(param_1 + 0x90) == '\0') && (local_70 < *(int *)(param_1 + 8) + -1)) {
          FUN_017d9060(param_1,local_70);
        }
        FUN_017d9a10(param_1,&local_40,local_70,local_70);
        if ((local_40 == 0.0) && (local_38 == 0.0)) {
          FUN_017d9d40(param_1,2,0,0);
        }
        if (local_70 < *(int *)(param_1 + 8) + -1) {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)local_70 * 0x18);
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10 + (longlong)local_70 * 0x18);
          local_2c = 0;
          iVar7 = iVar4;
          if (-1 < iVar4 + -1) {
            do {
              if (local_70 < *(int *)(lVar5 + 0x10 + (longlong)local_2c * 0x18)) {
                FUN_00409a70(lVar5 + (longlong)local_2c * 0x18,local_50,0x10);
                FUN_00c44790(local_50,&local_40,local_50);
                FUN_00409a70(local_50,lVar5 + (longlong)local_2c * 0x18,0x10);
              }
              local_2c = local_2c + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)local_70 * 0x18);
          lVar2 = *plVar1;
          local_58 = (int)plVar1[2];
          local_2c = 0;
          if (-1 < local_58 + -1) {
            do {
              sVar3 = *(short *)(lVar2 + (longlong)local_2c * 2);
              if (local_70 < sVar3) {
                FUN_017d9a10(param_1,&local_40,(int)sVar3,local_70);
                local_30 = 0;
                iVar7 = iVar4;
                if (-1 < iVar4 + -1) {
                  do {
                    if (local_70 < *(int *)(lVar5 + 0x10 + (longlong)local_30 * 0x18)) {
                      FUN_00409a70(lVar5 + (longlong)local_30 * 0x18,local_50,0x10);
                      FUN_00c44720(local_50,&local_40,local_50);
                      FUN_017d98d0(param_1,(longlong)*(short *)(lVar2 + (longlong)local_2c * 2),
                                   *(undefined4 *)(lVar5 + 0x10 + (longlong)local_30 * 0x18),
                                   local_50);
                    }
                    local_30 = local_30 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
              }
              local_2c = local_2c + 1;
              local_58 = local_58 + -1;
            } while (local_58 != 0);
          }
        }
        local_70 = local_70 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    if (*(char *)(param_1 + 0x90) == '\0') {
      iVar8 = thunk_FUN_03e487ac(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x38),
                                 *(undefined8 *)(param_1 + 0x30),&local_2c);
      if (iVar8 != 0) {
        FUN_017d9d40(param_1,iVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0xd8),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0xdc));
      }
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    else {
      iVar8 = 0;
      if (1 < *(int *)(param_1 + 8)) {
        iVar8 = thunk_FUN_03c1173b(*(undefined8 *)(param_1 + 0x1d0),*(undefined8 *)(param_1 + 0x38))
        ;
      }
      if (iVar8 != 0) {
        FUN_017d9d40(param_1,iVar8,*(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0xd8),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + 0xdc));
      }
    }
  }
  if (*(char *)(param_1 + 0x18) == '\x02') {
    if (*(char *)(param_1 + 0x90) == '\0') {
      thunk_FUN_03dc4200(param_1 + 0xe0,param_1 + 0xe8);
      uVar6 = thunk_FUN_03e76efc(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                                 *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                                 param_1 + 0xe8);
      *(undefined8 *)(param_1 + 0xe0) = uVar6;
      iVar8 = *(int *)(param_1 + 0x158);
      if (iVar8 != 0) {
        if (0 < *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) {
          FUN_017d7470(*(longlong *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x168),&local_30);
        }
        FUN_017d9d40(param_1,iVar8,*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x168)
                    );
      }
      *(undefined1 *)(param_1 + 0x90) = 1;
    }
    else {
      thunk_FUN_03ab366e(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 200),
                         *(undefined8 *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),
                         *(undefined8 *)(param_1 + 0xe0),param_1 + 0xe8);
      iVar8 = *(int *)(param_1 + 0x158);
      if (iVar8 == 0) {
        thunk_FUN_041bb722(*(undefined8 *)(param_1 + 0xd8),*(undefined8 *)(param_1 + 0xe0),
                           param_1 + 0xe8);
        if (*(double *)(param_1 + 0x178) <= *(double *)(PTR_DAT_02004010 + 0x100) &&
            *(double *)(PTR_DAT_02004010 + 0x100) != *(double *)(param_1 + 0x178)) {
          FUN_017d9d40(param_1,4,0,0);
        }
      }
      else {
        if (0 < *(int *)(*(longlong *)(param_1 + 0x1b0) + 0x10)) {
          FUN_017d7470(*(longlong *)(param_1 + 0x1b0),*(undefined4 *)(param_1 + 0x168),&local_30);
        }
        FUN_017d9d40(param_1,iVar8,*(undefined4 *)(param_1 + 0x168),*(undefined4 *)(param_1 + 0x168)
                    );
      }
    }
  }
  return;
}

