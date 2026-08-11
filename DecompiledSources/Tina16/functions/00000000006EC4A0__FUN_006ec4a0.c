/* Ghidra address: 006ec4a0 */
/* Ghidra symbol: FUN_006ec4a0 */


void FUN_006ec4a0(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar2 = FUN_006ec320(param_1);
  if (param_2 != iVar2) {
    if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
      cVar1 = FUN_006ebd60(param_1,param_2,param_2 - *(int *)(param_1 + 0x4b4));
      if (cVar1 == '\0') goto LAB_006ec59e;
    }
    *(int *)(param_1 + 0x4b4) = param_2;
    if (((*(ushort *)(param_1 + 0x34) & 0x10) != 0) && (*(longlong *)(param_1 + 0x498) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x498);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0066ac78);
      if (cVar1 != '\0') {
        FUN_0043f750(local_20,*(undefined4 *)(param_1 + 0x4b4));
        FUN_0064de00(uVar3,local_20[0]);
      }
    }
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      uVar3 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar3,0x471,0,(longlong)*(int *)(param_1 + 0x4b4));
    }
  }
LAB_006ec59e:
  FUN_00414480(local_20);
  return;
}

