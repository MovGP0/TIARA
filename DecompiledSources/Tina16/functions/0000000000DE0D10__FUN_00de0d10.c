/* Ghidra address: 00de0d10 */
/* Ghidra symbol: FUN_00de0d10 */


void FUN_00de0d10(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 local_88 [24];
  undefined1 local_70 [72];
  
  if ((*(uint *)(param_1 + 0x9e) & 0x400) == 0) {
    FUN_00657db0(param_1,param_2);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 8);
    if (lVar2 == 0) {
      uVar1 = FUN_0065b870(param_1);
      lVar2 = thunk_FUN_041804fe(uVar1,local_70);
    }
    (**(code **)(*param_1 + 0xe0))(param_1,local_88);
    thunk_FUN_041fb671(param_1[0x96],1,lVar2,local_88);
    if (*(longlong *)(param_2 + 8) == 0) {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_0416269d(uVar1,local_70);
    }
  }
  return;
}

