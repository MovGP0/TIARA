/* Ghidra address: 00a73550 */
/* Ghidra symbol: FUN_00a73550 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a73550(longlong param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_568 [40];
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined1 *local_520;
  undefined8 local_518;
  longlong local_510;
  char local_501;
  undefined8 local_500;
  int local_4f4;
  int local_4f0;
  int local_4ec;
  longlong local_4e8 [3];
  int local_4cc [303];
  
  local_520 = auStack_568;
  local_540 = 0;
  local_538 = 0;
  local_530 = 0;
  local_528 = 0;
  local_4e8[1] = 0;
  local_4e8[0] = 0;
  local_500 = 0;
  local_4e8[2] = FUN_00410e60(&DAT_00a69fb0,1);
  local_501 = '\0';
  local_4f0 = 0;
  iVar4 = *(int *)(param_2 + 0x10);
  local_4ec = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_510 = FUN_004aeac0(param_2,local_4ec);
      bVar1 = *(byte *)(local_510 + 8);
      if (bVar1 < 0x4b) {
        if (bVar1 == 0x4a) {
          FUN_0043e1a0(&local_540,*(undefined8 *)(local_510 + 0x28));
          FUN_00416dc0(&local_500,local_540,1,4);
          iVar2 = FUN_00416db0(local_500,L"circ");
          if ((iVar2 == 0) || (iVar2 = FUN_00416db0(local_500,L"circle"), iVar2 == 0)) {
            local_501 = '\x01';
          }
          else {
            iVar2 = FUN_00416db0(local_500,L"poly");
            if ((iVar2 == 0) || (iVar2 = FUN_00416db0(local_500,L"polygon"), iVar2 == 0)) {
              local_501 = '\x02';
            }
            else {
              iVar2 = FUN_00416db0(local_500,L"rect");
              if ((iVar2 == 0) || (iVar2 = FUN_00416db0(local_500,L"rectangle"), iVar2 == 0)) {
                local_501 = '\0';
              }
            }
          }
        }
        else if (bVar1 == 0x17) {
          local_4f0 = 0;
          FUN_0043ea00(local_4e8 + 1,*(undefined8 *)(local_510 + 0x28));
          FUN_00a73430(auStack_568,&local_528,local_4e8 + 1);
          FUN_00414b50(local_4e8,local_528);
          for (; (local_4e8[0] != 0 && (local_4f0 < 0x12d)); local_4f0 = local_4f0 + 1) {
            FUN_009ec440(&local_530,local_4e8[0]);
            iVar2 = FUN_0043fc50(local_530,0);
            local_4cc[local_4f0] = iVar2;
            FUN_00a73430(auStack_568,&local_538,local_4e8 + 1);
            FUN_00414b50(local_4e8,local_538);
          }
        }
        else if (bVar1 == 0x20) {
          FUN_00414ad0(local_4e8[2] + 8,*(undefined8 *)(local_510 + 0x28));
        }
        else if (bVar1 == 0x34) {
          FUN_00414480(local_4e8[2] + 8);
        }
      }
      else if (bVar1 == 0x52) {
        FUN_00414ad0(local_4e8[2] + 0x18,*(undefined8 *)(local_510 + 0x28));
      }
      else if (bVar1 == 0x54) {
        FUN_00414ad0(local_4e8[2] + 0x20,*(undefined8 *)(local_510 + 0x28));
      }
      local_4ec = local_4ec + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if (local_501 == '\0') {
    if (local_4f0 < 4) {
LAB_00a7396b:
      FUN_00a739b0(0,local_520);
      goto LAB_00a73979;
    }
    local_4cc[2] = local_4cc[2] + 1;
    local_4cc[3] = local_4cc[3] + 1;
    uVar3 = thunk_FUN_0411fefb(local_4cc);
    *(undefined8 *)(local_4e8[2] + 0x10) = uVar3;
  }
  else if (local_501 == '\x01') {
    if (local_4f0 < 3) goto LAB_00a7396b;
    local_4f4 = local_4cc[2];
    local_4cc[0] = local_4cc[0] - local_4cc[2];
    local_4cc[1] = local_4cc[1] - local_4cc[2];
    iVar4 = local_4cc[2] * 2;
    local_4cc[2] = local_4cc[0] + iVar4 + 1;
    local_4cc[3] = local_4cc[1] + iVar4 + 1;
    uVar3 = thunk_FUN_0417c499(local_4cc);
    *(undefined8 *)(local_4e8[2] + 0x10) = uVar3;
  }
  else if (local_501 == '\x02') {
    if (local_4f0 < 6) goto LAB_00a7396b;
    uVar3 = thunk_FUN_041c22cf(local_4cc,(longlong)local_4f0 / 2 & 0xffffffff,2);
    *(undefined8 *)(local_4e8[2] + 0x10) = uVar3;
  }
  if (*(longlong *)(local_4e8[2] + 0x10) != 0) {
    local_518 = *(undefined8 *)(param_1 + 8);
    FUN_004ae7e0(local_518,local_4e8[2]);
    local_4e8[2] = 0;
  }
  FUN_00410f20(local_4e8[2]);
LAB_00a73979:
  FUN_00414560(&local_540,4);
  FUN_00414480(&local_500);
  FUN_00414560(local_4e8,2);
  return;
}

