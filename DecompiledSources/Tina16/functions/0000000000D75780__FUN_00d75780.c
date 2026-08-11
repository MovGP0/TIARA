/* Ghidra address: 00d75780 */
/* Ghidra symbol: FUN_00d75780 */


longlong * FUN_00d75780(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *local_30;
  undefined4 local_24;
  longlong local_20;
  
  local_20 = 0;
  local_30 = (longlong *)0x0;
  FUN_00d57480(&local_20,param_1);
  lVar1 = FUN_00d753e0();
  if (lVar1 == 0) {
    iVar3 = 0;
    if (local_20 != 0) {
      iVar3 = *(int *)(local_20 + -4);
    }
    if (3 < iVar3) {
      lVar1 = FUN_00414de0(&local_20);
      *(undefined2 *)(lVar1 + 2) = 0x53;
      lVar1 = FUN_00414de0(&local_20);
      *(undefined2 *)(lVar1 + 4) = 0x65;
      lVar1 = FUN_00d753e0();
    }
  }
  if (lVar1 == 0) {
    iVar3 = 0;
    if (local_20 != 0) {
      iVar3 = *(int *)(local_20 + -4);
    }
    if (3 < iVar3) {
      lVar1 = FUN_00414de0(&local_20);
      *(undefined2 *)(lVar1 + 2) = 0x54;
      lVar1 = FUN_00414de0(&local_20);
      *(undefined2 *)(lVar1 + 4) = 0x77;
      lVar1 = FUN_00d753e0(local_20);
    }
  }
  if (lVar1 != 0) {
    local_30 = (longlong *)(**(code **)(lVar1 + 0x78))(lVar1,1,param_2);
  }
  if (local_30 != (longlong *)0x0) {
    FUN_004b84c0(param_1,&local_24,4);
    plVar2 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*plVar2 + 0x10))(plVar2,local_24);
    FUN_004b84c0(param_1,plVar2[1],local_24);
    FUN_004b8d00(plVar2,local_30);
    FUN_00410f20(plVar2);
    (**(code **)(*local_30 + 0xf0))(local_30,1);
  }
  FUN_00414480(&local_20);
  return local_30;
}

