/* Ghidra address: 00836010 */
/* Ghidra symbol: FUN_00836010 */


void FUN_00836010(longlong param_1,short param_2,ushort param_3)

{
  ushort uVar1;
  longlong local_28;
  longlong local_20 [2];
  int local_10;
  int local_c;
  
  local_28 = 0;
  local_20[0] = 0;
  if ((param_3 & 4) == 0) {
    FUN_00835860(param_1,&local_c,&local_10);
    if ((param_3 & 1) == 0) {
      if (local_10 - local_c < 2) {
        if (param_2 == 0x25) {
          FUN_00836300(param_1,local_c);
        }
        else if (local_10 == local_c) {
          FUN_008358c0(param_1,local_c);
        }
        else {
          FUN_008350c0(param_1,&local_28);
          uVar1 = *(ushort *)(local_28 + -2 + (longlong)(local_c + 1) * 2);
          if ((uVar1 < 0xd800) || (0xdfff < uVar1)) {
            FUN_008362b0(param_1,local_c,1);
          }
          else {
            FUN_008362b0(param_1,local_c,2);
          }
        }
      }
      else {
        if (local_10 - local_c == 2) {
          FUN_008350c0(param_1,local_20);
          uVar1 = *(ushort *)(local_20[0] + -2 + (longlong)(local_c + 1) * 2);
          if ((0xd7ff < uVar1) && (uVar1 < 0xe000)) {
            if (param_2 == 0x25) {
              FUN_00836300(param_1,local_c);
            }
            else {
              FUN_008362b0(param_1,local_c,2);
            }
            goto LAB_0083626d;
          }
        }
        if (local_10 == *(int *)(param_1 + 0x4ec)) {
          *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + -1;
        }
        FUN_008358c0(param_1,*(undefined4 *)(param_1 + 0x4ec));
      }
    }
    else if (param_2 == 0x27) {
      *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + 1;
      if (local_10 == local_c + 1) {
        FUN_00835890(param_1,local_c,local_10);
        *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + 1;
      }
      if (*(int *)(param_1 + 0x4e4) < *(int *)(param_1 + 0x4ec)) {
        *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4e4);
      }
    }
    else {
      *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + -1;
      if ((local_10 == local_c + 2) && (local_c < *(int *)(param_1 + 0x4ec))) {
        FUN_00835890(param_1,local_c + 1,local_c + 1);
        *(int *)(param_1 + 0x4ec) = *(int *)(param_1 + 0x4ec) + -1;
      }
      if (*(int *)(param_1 + 0x4ec) < 0) {
        *(undefined4 *)(param_1 + 0x4ec) = 0;
      }
    }
  }
LAB_0083626d:
  FUN_00414560(&local_28,2);
  return;
}

