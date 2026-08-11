/* Ghidra address: 014ac3d0 */
/* Ghidra symbol: FUN_014ac3d0 */


void FUN_014ac3d0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_28 = 0;
  local_30 = 0;
  lVar2 = *(longlong *)(*param_1 + 0x48);
  if (*(longlong *)(*param_1 + 0x48) == 0) {
    lVar2 = DAT_0210eae0;
  }
  FUN_01d30f00(*param_1,&local_1c,4);
  uVar1 = FUN_004ba720(&PTR_FUN_0047d288,1);
  FUN_01d32710(*param_1,uVar1,local_1c);
  FUN_004b6dc0(uVar1,0);
  FUN_004ba9c0(uVar1,&local_30,local_1c);
  (**(code **)(**(longlong **)(lVar2 + 0x238) + 0x60))(*(longlong **)(lVar2 + 0x238),local_30);
  FUN_00410f20(uVar1);
  FUN_00414480(&local_30);
  FUN_00414520(&local_28);
  return;
}

