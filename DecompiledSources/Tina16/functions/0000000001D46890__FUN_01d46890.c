/* Ghidra address: 01d46890 */
/* Ghidra symbol: FUN_01d46890 */


void FUN_01d46890(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*PTR_DAT_020017e8 == '\0') {
    FUN_01d461d0(param_1);
    FUN_01d471a0(param_1,local_20,param_3);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))(*(longlong **)(param_1 + 0x68));
    FUN_01d46f70(param_1,uVar2,local_20[0]);
    uVar3 = FUN_00416740(local_20[0]);
    lVar4 = FUN_0042a560(uVar2,uVar3,0xf,(longlong)param_2);
    if (lVar4 != 0) {
      thunk_FUN_04154efc(lVar4,0xffffffff);
    }
    goto LAB_01d46981;
  }
  if (*(longlong *)PTR_DAT_02001270 == 0) {
LAB_01d468e1:
    uVar2 = FUN_00b02f00(&DAT_00b020d8,1,param_3);
    *(undefined8 *)PTR_DAT_02001270 = uVar2;
  }
  else {
    iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)PTR_DAT_02001270 + 8),param_3);
    if (iVar1 != 0) goto LAB_01d468e1;
  }
  FUN_00b046f0(*(undefined8 *)PTR_DAT_02001270,param_2);
LAB_01d46981:
  FUN_00414480(local_20);
  return;
}

