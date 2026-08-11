/* Ghidra address: 01ced260 */
/* Ghidra symbol: FUN_01ced260 */


void FUN_01ced260(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  longlong local_40;
  ushort local_30;
  ushort local_2e;
  undefined8 local_28;
  int local_1c;
  
  local_28 = 0;
  iVar2 = FUN_01d31a40(param_2);
  if (iVar2 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20));
    FUN_01cef320(param_1);
    FUN_01d30f00(param_2,&local_1c,4);
    iVar2 = local_1c;
    if (0 < local_1c) {
      do {
        FUN_01d30e90(param_2,&local_30);
        FUN_01d30f70(param_2);
        ppuVar3 = (undefined **)FUN_01d32e10(*(undefined8 *)PTR_DAT_02002160,local_30);
        if (ppuVar3 != (undefined **)0x0) {
          if (ppuVar3 == &PTR_FUN_01cb5bc0) {
            uVar4 = FUN_01cc3bb0(&PTR_FUN_01cb5bc0,1,param_2);
            FUN_004ae7e0(*(undefined8 *)(param_1 + 0x20),uVar4);
          }
          else {
            local_40 = (*(code *)ppuVar3[2])(ppuVar3,1,param_2,param_1);
            *(longlong *)(local_40 + 0x38) = param_1;
          }
          if (ppuVar3 == &PTR_FUN_01a5c280) {
            *(undefined1 *)(local_40 + 0x80) = 0;
          }
          if (ppuVar3 == &PTR_FUN_01ac9770) {
            FUN_01cec150(param_1,local_40,*(undefined8 *)(local_40 + 0x68),
                         *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68));
            if (local_2e < 0x21) {
              uVar1 = FUN_00f06890(L"AdjustXAxes",1);
              *(undefined1 *)(local_40 + 0x10b) = uVar1;
              uVar1 = FUN_00f06890(L"AdjustYAxes",1);
              *(undefined1 *)(local_40 + 0x10c) = uVar1;
            }
            *(longlong *)(param_1 + 0x58) = local_40;
          }
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))(*(longlong **)(param_1 + 0x20));
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28));
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x18) == -1) {
    FUN_01cec9c0(param_1,0,*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x780),
                 *(longlong *)PTR_DAT_02001e00 + 0x798,*(longlong *)PTR_DAT_02001e00 + 0x788,
                 *(undefined8 *)PTR_DAT_02001e00,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xa68),0);
  }
  FUN_00414480(&local_28);
  return;
}

