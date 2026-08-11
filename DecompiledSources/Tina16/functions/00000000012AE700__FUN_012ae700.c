/* Ghidra address: 012ae700 */
/* Ghidra symbol: FUN_012ae700 */


void FUN_012ae700(longlong param_1,byte param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_40;
  double local_30 [2];
  
  local_40 = param_1;
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0xf8))
            (*(longlong **)(param_1 + 0xdb8),param_1 + 0xd93,local_30,1);
  uVar1 = FUN_00b90090(*(undefined8 *)(local_40 + 0xd10));
  *(undefined8 *)(local_40 + 0xdb0) = uVar1;
  if (param_2 < 5) {
    if (param_2 == 4) {
      uVar1 = FUN_012ae690(auStack_78,
                           *(double *)(local_40 + 0xdb0) -
                           local_30[0] * (double)*(byte *)(local_40 + 0xd91),local_30[0]);
      *(undefined8 *)(local_40 + 0xdb0) = uVar1;
    }
    else if (param_2 == 0) {
      uVar1 = FUN_012ae690(auStack_78,*(double *)(local_40 + 0xdb0) - local_30[0],local_30[0]);
      *(undefined8 *)(local_40 + 0xdb0) = uVar1;
    }
    else if (param_2 == 1) {
      uVar1 = FUN_012ae690(auStack_78,*(double *)(local_40 + 0xdb0) + local_30[0],local_30[0]);
      *(undefined8 *)(local_40 + 0xdb0) = uVar1;
    }
  }
  else if (param_2 == 5) {
    uVar1 = FUN_012ae690(auStack_78,
                         *(double *)(local_40 + 0xdb0) +
                         local_30[0] * (double)*(byte *)(local_40 + 0xd91),local_30[0]);
    *(undefined8 *)(local_40 + 0xdb0) = uVar1;
  }
  else if (param_2 == 6) {
    uVar1 = FUN_012ae690(auStack_78,*(undefined8 *)(local_40 + 0xdb0),local_30[0]);
    *(undefined8 *)(local_40 + 0xdb0) = uVar1;
  }
  FUN_00b90440(*(undefined8 *)(local_40 + 0xd10),*(undefined8 *)(local_40 + 0xdb0));
  uVar1 = FUN_004113f0(*(undefined8 *)(local_40 + 0x9b0),&PTR_FUN_010e62f0);
  local_58 = 1;
  FUN_010ecb30(uVar1,*(undefined8 *)(local_40 + 0xdb0),param_3,1);
  return;
}

