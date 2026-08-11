/* Ghidra address: 007001d0 */
/* Ghidra symbol: FUN_007001d0 */


undefined8 FUN_007001d0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int local_38;
  int local_34;
  short *local_30;
  
  lVar2 = thunk_FUN_041d93e9();
  lVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa0));
  if (lVar2 == lVar3) {
    uVar4 = FUN_00648930();
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    if ((*(longlong *)(param_1 + 0x78) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x78) != *(longlong *)(param_1 + 0xa0))) {
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  local_30 = (short *)(param_2 + 0x10);
  local_38 = (int)*local_30;
  local_34 = (int)*(short *)(param_2 + 0x12);
  uVar4 = FUN_00656230(*(undefined8 *)(param_1 + 0xa0),&local_38,0,0,0);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  if (((*(longlong *)(param_1 + 0x70) != 0) &&
      (cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0x70),&PTR_FUN_006cb0d0), cVar1 != '\0')) &&
     (cVar1 = FUN_0064eb50(*(undefined8 *)(param_1 + 0x70)), cVar1 == '\0')) {
    return 1;
  }
  return 0;
}

