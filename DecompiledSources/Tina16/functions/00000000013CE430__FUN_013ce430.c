/* Ghidra address: 013ce430 */
/* Ghidra symbol: FUN_013ce430 */


void FUN_013ce430(longlong param_1,longlong param_2,undefined8 param_3,char param_4,char param_5)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  bVar2 = true;
  FUN_00414b50(&local_38,L"Copy the code to the Advanced Edit field?");
  iVar3 = FUN_0072d440(local_38,3,0xb,0);
  if (iVar3 == 2) {
    bVar2 = false;
  }
  else if (iVar3 == 6) {
    bVar2 = true;
  }
  else if (iVar3 == 7) {
    bVar2 = false;
  }
  if (bVar2) {
    FUN_00c0fae0(*(undefined8 *)(param_1 + 0x848));
    if (param_2 == 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x848) + 0x4e8);
      (**(code **)(*plVar1 + 0x88))(plVar1,param_3);
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x848) + 0x4e8);
      (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x18));
    }
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x848),0);
    FUN_013cd830(param_1);
    if (param_5 != '\0') {
      FUN_013cd5c0(param_1,0);
    }
  }
  if (param_4 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x128))(*(longlong **)(param_1 + 0x728),1);
    (**(code **)(**(longlong **)(param_1 + 0x728) + 0x268))(*(longlong **)(param_1 + 0x728),1);
    (**(code **)(**(longlong **)(param_1 + 0x848) + 0x128))(*(longlong **)(param_1 + 0x848),1);
  }
  FUN_00414560(&local_38,4);
  return;
}

