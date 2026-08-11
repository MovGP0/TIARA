/* Ghidra address: 0146fb90 */
/* Ghidra symbol: FUN_0146fb90 */


void FUN_0146fb90(longlong param_1,undefined8 param_2,short *param_3,ushort param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  if ((*param_3 == 0xd) && ((param_4 & 1) == 0)) {
    iVar2 = FUN_0146efa0(param_1);
    if (-1 < iVar2) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4e8);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar2);
      FUN_013bc900(*(undefined8 *)(param_1 + 0x800),local_40,local_30);
      FUN_00414b50(&local_30,local_40[0]);
      FUN_013bc030(*(undefined8 *)(param_1 + 0x800),local_20,local_30,0,0);
      FUN_01470c80(param_1,local_20[0]);
    }
  }
  FUN_00414480(local_40);
  FUN_00414560(&local_30,3);
  return;
}

