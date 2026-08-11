/* Ghidra address: 006830d0 */
/* Ghidra symbol: FUN_006830d0 */


longlong FUN_006830d0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar2 = FUN_0065b870(param_1[7]);
  lVar3 = thunk_FUN_041b2403(uVar2,0x150,(longlong)param_2,0);
  if (lVar3 == -1) {
    iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((iVar1 != 0) && (-1 < param_2)) {
      iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
      if (param_2 <= iVar1) goto LAB_00683166;
    }
    FUN_0041ddd0(local_20,PTR_PTR_02004940);
    FUN_004b34c0(param_1,local_20[0],param_2);
  }
LAB_00683166:
  FUN_00414480(local_20);
  return lVar3;
}

