/* Ghidra address: 012f2450 */
/* Ghidra symbol: FUN_012f2450 */


undefined1 * FUN_012f2450(longlong *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  longlong *local_res8 [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined **local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_20 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = (undefined **)0x0;
  local_38 = 0;
  local_res8[0] = param_1;
  FUN_0041b910(param_1);
  puVar2 = (undefined1 *)FUN_012f2410(0x20);
  (**(code **)(*local_res8[0] + 0xe8))(local_res8[0],&local_20,L"action");
  (**(code **)(*local_20 + 0x68))(local_20);
  (**(code **)(*local_20 + 0x70))(local_20,&local_40);
  FUN_0041b890(&local_28,local_40,&DAT_012f2712);
  while (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x100))(local_28,&local_30,L"mode");
    (**(code **)(*local_28 + 0x100))(local_28,&local_38,L"action");
    if (local_30 == (undefined **)&DAT_012f2748) {
      bVar3 = true;
    }
    else if (local_30 == (undefined **)0x0) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_0043e420(local_30,&DAT_012f2748);
      bVar3 = iVar1 == 0;
    }
    if (bVar3) {
      *puVar2 = 1;
    }
    if (local_30 == &PTR_DAT_012f275c) {
      bVar3 = true;
    }
    else if (local_30 == (undefined **)0x0) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_0043e420(local_30,&PTR_DAT_012f275c);
      bVar3 = iVar1 == 0;
    }
    if (bVar3) {
      puVar2[1] = 1;
    }
    if (local_30 == (undefined **)&LAB_012f2770) {
      bVar3 = true;
    }
    else if (local_30 == (undefined **)0x0) {
      bVar3 = false;
    }
    else {
      iVar1 = FUN_0043e420(local_30,&LAB_012f2770);
      bVar3 = iVar1 == 0;
    }
    if (bVar3) {
      puVar2[2] = 1;
    }
    (**(code **)(*local_20 + 0x70))(local_20,&local_48);
    FUN_0041b890(&local_28,local_48,&DAT_012f2712);
  }
  FUN_00417840(&local_48,&DAT_00b9f8e0,2);
  FUN_00414560(&local_38,2);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  FUN_0041b800(local_res8);
  return puVar2;
}

