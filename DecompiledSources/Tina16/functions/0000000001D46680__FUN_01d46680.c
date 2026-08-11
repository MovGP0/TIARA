/* Ghidra address: 01d46680 */
/* Ghidra symbol: FUN_01d46680 */


void FUN_01d46680(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_28;
  undefined8 *local_20 [2];
  
  local_20[0] = (undefined8 *)0x0;
  local_28 = 0;
  FUN_01d461d0(param_1);
  FUN_01d471a0(param_1,local_20,0);
  if (*PTR_DAT_020017e8 == '\0') {
    FUN_00416cd0(&local_28,4,local_20[0],&DAT_01d467d8,param_2,L".htm");
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x18))(*(longlong **)(param_1 + 0x68));
    uVar3 = FUN_00416740(local_28);
    lVar4 = FUN_0042a560(uVar2,uVar3,0,0);
    if (lVar4 != 0) {
      thunk_FUN_04154efc(lVar4,0xffffffff);
    }
    goto LAB_01d4678d;
  }
  if (*(longlong *)PTR_DAT_02001270 == 0) {
LAB_01d466ef:
    uVar2 = FUN_00b02f00(&DAT_00b020d8,1,local_20[0]);
    *(undefined8 *)PTR_DAT_02001270 = uVar2;
  }
  else {
    iVar1 = FUN_00416db0(*(undefined8 *)(*(longlong *)PTR_DAT_02001270 + 8),local_20[0]);
    if (iVar1 != 0) goto LAB_01d466ef;
  }
  FUN_00b04590(*(undefined8 *)PTR_DAT_02001270,param_2);
LAB_01d4678d:
  FUN_00414560(&local_28,2);
  return;
}

