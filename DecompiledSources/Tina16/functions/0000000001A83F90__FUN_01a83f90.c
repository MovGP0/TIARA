/* Ghidra address: 01a83f90 */
/* Ghidra symbol: FUN_01a83f90 */


void FUN_01a83f90(longlong param_1,undefined8 param_2)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_01aee720(&local_10,0x406,*(undefined4 *)(param_1 + 0x6b8),L"DFClearAllMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  if (*(char *)(*(longlong *)(param_1 + 0x7a0) + 0x40) == '\0') {
    FUN_01cec530(*(longlong *)(param_1 + 0x7a0),param_1 + 0x798,param_1,
                 *(undefined8 *)(param_1 + 0xa68));
    if (*(char *)(*(longlong *)PTR_DAT_02003f68 + 0xa9) != '\0') {
      FUN_00805990(*(undefined8 *)PTR_DAT_02003f68);
    }
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_03a2fc9d(uVar2,0,0xffffffff);
  }
  else {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_18,0x82c);
    sVar1 = FUN_0072d440(local_18,3,0xb,0);
    if (sVar1 == 6) {
      FUN_01a7e680(param_1,param_2);
      if (DAT_02110864 != '\0') {
        FUN_01cec530(*(undefined8 *)(param_1 + 0x7a0),param_1 + 0x798,param_1,
                     *(undefined8 *)(param_1 + 0xa68));
        if (*(char *)(*(longlong *)PTR_DAT_02003f68 + 0xa9) != '\0') {
          FUN_00805990(*(undefined8 *)PTR_DAT_02003f68);
        }
        uVar2 = FUN_0065b870(param_1);
        thunk_FUN_03a2fc9d(uVar2,0,0xffffffff);
      }
    }
    else if (sVar1 == 7) {
      FUN_01cec530(*(undefined8 *)(param_1 + 0x7a0),param_1 + 0x798,param_1,
                   *(undefined8 *)(param_1 + 0xa68));
      if (*(char *)(*(longlong *)PTR_DAT_02003f68 + 0xa9) != '\0') {
        FUN_00805990(*(undefined8 *)PTR_DAT_02003f68);
      }
      uVar2 = FUN_0065b870(param_1);
      thunk_FUN_03a2fc9d(uVar2,0,0xffffffff);
    }
  }
  FUN_01a7fc90(param_1);
  FUN_00414560(&local_18,2);
  return;
}

