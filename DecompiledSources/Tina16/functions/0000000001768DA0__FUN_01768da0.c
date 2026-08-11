/* Ghidra address: 01768da0 */
/* Ghidra symbol: FUN_01768da0 */


void FUN_01768da0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_1c;
  
  if (param_2 == 0) {
    FUN_00414480(param_1 + 0x40);
    FUN_00410f20(*(undefined8 *)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_01d01990(*(longlong *)(param_1 + 0x10),0);
    }
  }
  else {
    FUN_00414ad0(param_1 + 0x40,*(undefined8 *)(param_2 + 0x10));
    lVar1 = *(longlong *)(param_1 + 0x68);
    if (lVar1 != param_2) {
      if (lVar1 != 0) {
        FUN_00410f20(lVar1);
      }
      uVar3 = FUN_00c3f320(param_2);
      *(undefined8 *)(param_1 + 0x68) = uVar3;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
      uVar2 = FUN_00c41060(*(undefined8 *)(param_1 + 0x68),&local_1c);
      FUN_01d01990(lVar1,uVar2);
      FUN_01d01aa0(*(undefined8 *)(param_1 + 0x10),local_1c);
    }
  }
  return;
}

