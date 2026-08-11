/* Ghidra address: 01c71fe0 */
/* Ghidra symbol: FUN_01c71fe0 */


void FUN_01c71fe0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1740) + 0x18);
  plVar2 = *(longlong **)(param_1 + 0x1748);
  FUN_013a9e80(&local_20);
  FUN_00724420(plVar2,local_20);
  cVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2);
  if (cVar3 != '\0') {
    cVar3 = FUN_01d3f210(lVar1);
    if (cVar3 != '\0') {
      uVar4 = FUN_004113f0(*(undefined8 *)(lVar1 + 0x1a8),&PTR_FUN_01763148);
      FUN_00724270(plVar2,&local_28);
      FUN_017741e0(uVar4,local_28);
      FUN_0072d440(L"SystemC DLL assigned",2,4,0);
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_20);
  return;
}

