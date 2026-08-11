/* Ghidra address: 01b4aa80 */
/* Ghidra symbol: FUN_01b4aa80 */


void FUN_01b4aa80(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong unaff_RSI;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar2 = FUN_01d34560(&LAB_0153f020,1,5,5);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_01d34560(&LAB_0153f020,1,5,5);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  FUN_01b4a790(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
    if (*(int *)(*(longlong *)(param_1 + 8) + 0x10) < 2) {
      unaff_RSI = FUN_015452e0(*(undefined8 *)(param_1 + 8));
      cVar1 = FUN_01544b30(unaff_RSI,3);
      if (cVar1 == '\0') {
        *(undefined4 *)(param_1 + 0x10) = 2;
      }
      else {
        FUN_01b4a8e0(param_1);
        FUN_01544640(unaff_RSI);
        FUN_01544ae0(unaff_RSI);
        do {
          lVar3 = FUN_015445e0(unaff_RSI,1);
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0x14) = 2;
            cVar1 = FUN_01b4a930(param_1,lVar3);
            if (cVar1 != '\0') {
              FUN_01540330(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(lVar3 + 8));
            }
          }
          cVar1 = FUN_01544510(unaff_RSI,1);
        } while (cVar1 != '\0');
        FUN_01b4a8e0(param_1);
        FUN_01544640(unaff_RSI);
        FUN_01544ae0(unaff_RSI);
        do {
          lVar3 = FUN_015445e0(unaff_RSI,2);
          if (lVar3 != 0) {
            *(undefined4 *)(lVar3 + 0x14) = 2;
            cVar1 = FUN_01b4a930(param_1,lVar3);
            if (cVar1 != '\0') {
              FUN_01540330(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(lVar3 + 8));
            }
          }
          cVar1 = FUN_01544510(unaff_RSI,2);
        } while (cVar1 != '\0');
        FUN_01540360(*(undefined8 *)(param_1 + 0x18),L"analog_to_digital_connections");
        FUN_01540360(*(undefined8 *)(param_1 + 0x20),L"digital_to_analog_connections");
        FUN_01b4a850(param_1);
        if (*(int *)(param_1 + 0x10) == 0) {
          if ((*(int *)(*(longlong *)(param_1 + 0x18) + 0x10) < 1) ||
             (*(int *)(*(longlong *)(param_1 + 0x20) + 0x10) < 1)) {
            if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x10)) {
              *(undefined4 *)(param_1 + 0x10) = 100;
            }
            if (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x10)) {
              *(undefined4 *)(param_1 + 0x10) = 0x65;
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x10) = 3;
          }
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
  }
  *(undefined8 *)(unaff_RSI + 0x38) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_RSI + 0x40) = *(undefined8 *)(param_1 + 0x20);
  return;
}

