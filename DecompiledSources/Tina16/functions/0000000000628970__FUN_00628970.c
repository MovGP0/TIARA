/* Ghidra address: 00628970 */
/* Ghidra symbol: FUN_00628970 */


undefined4 FUN_00628970(longlong param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  *(longlong *)(param_1 + 0x30) = param_2 + param_3;
  *(undefined4 *)(param_1 + 0x38) = param_4;
  lVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  if (lVar2 != *(longlong *)(param_1 + 0x18)) {
    FUN_004b6dc0(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x18));
  }
  while (*(int *)(param_1 + 0x38) != 0) {
    uVar1 = FUN_0062a930(param_1 + 0x30,0);
    FUN_00627da0(uVar1);
    if (*(int *)(param_1 + 0x48) == 0) {
      uVar3 = 0;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + -8);
      }
      FUN_004b8a80(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x88),uVar3);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x88);
      uVar1 = 0;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        uVar1 = (undefined4)*(undefined8 *)(*(longlong *)(param_1 + 0x88) + -8);
      }
      *(undefined4 *)(param_1 + 0x48) = uVar1;
      uVar3 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 0x18) = uVar3;
      pcVar4 = (code *)FUN_00411550(param_1);
      (*pcVar4)(param_1);
    }
  }
  return param_4;
}

