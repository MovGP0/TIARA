/* Ghidra address: 018036e0 */
/* Ghidra symbol: FUN_018036e0 */


undefined8 FUN_018036e0(undefined8 param_1,ushort *param_2)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  local_20[0] = 0;
  uVar2 = (ulonglong)*param_2;
  if (uVar2 < 0xc) {
    if (uVar2 == 0xb) {
      FUN_00468820(&local_38,1);
      cVar1 = FUN_0046f320(param_2,&local_38);
      if (cVar1 == '\0') {
        FUN_00414ad0(param_1,&LAB_01803894);
      }
      else {
        FUN_00414ad0(param_1,&DAT_01803884);
      }
      goto code_r0x01803827;
    }
    if (uVar2 - 2 < 2) {
LAB_01803777:
      uVar3 = FUN_004634b0(param_2);
      FUN_0043f780(param_1,uVar3);
      goto code_r0x01803827;
    }
    if (uVar2 - 4 < 3) {
      uVar3 = FUN_00464c60(param_2);
      FUN_00448430(param_1,uVar3);
      goto code_r0x01803827;
    }
    if (uVar2 == 7) {
      uVar3 = FUN_00464c60(param_2);
      FUN_0044a290(param_1,uVar3);
      goto code_r0x01803827;
    }
    if (uVar2 != 8) goto LAB_0180381d;
  }
  else if (uVar2 != 0xc) {
    if (uVar2 == 0x11) goto LAB_01803777;
    if ((uVar2 != 0x100) && (uVar2 != 0x102)) {
LAB_0180381d:
      FUN_00414480(param_1);
      goto code_r0x01803827;
    }
  }
  FUN_00467e90(local_20,param_2);
  FUN_01802f80(param_1,local_20[0]);
code_r0x01803827:
  FUN_00460ba0(&local_38);
  FUN_00414480(local_20);
  return param_1;
}

