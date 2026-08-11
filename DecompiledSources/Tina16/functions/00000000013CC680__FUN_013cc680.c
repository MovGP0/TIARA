/* Ghidra address: 013cc680 */
/* Ghidra symbol: FUN_013cc680 */


void FUN_013cc680(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_20;
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x28))(*(longlong **)(param_1 + 0x8c0));
  if ((iVar2 == 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7e0) + 0x4a0),
     iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1), iVar2 == 0)) {
    return;
  }
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0x90))(local_20);
  FUN_013ca8c0(param_1,*(undefined8 *)PTR_DAT_02001288,&local_20);
  FUN_013e2500(*(undefined8 *)PTR_DAT_02001288,local_20,0,1);
  (**(code **)(*local_20 + 0x90))(local_20);
  FUN_013ca8c0(param_1,*(undefined8 *)PTR_DAT_02005188,&local_20);
  FUN_013e2500(*(undefined8 *)PTR_DAT_02005188,local_20,0,1);
  if (*(longlong *)PTR_DAT_02001288 == 0) {
    (**(code **)(*local_20 + 0x90))(local_20);
    FUN_013ca8c0(param_1,*(undefined8 *)PTR_DAT_020059d8,&local_20);
    FUN_013e2500(*(undefined8 *)PTR_DAT_020059d8,local_20,0,1);
    (**(code **)(*local_20 + 0x90))(local_20);
    FUN_013ca8c0(param_1,*(undefined8 *)PTR_DAT_02001d00,&local_20);
    FUN_013e2500(*(undefined8 *)PTR_DAT_02001d00,local_20,0,1);
    (**(code **)(*local_20 + 0x90))(local_20);
    FUN_013ca8c0(param_1,*(undefined8 *)PTR_DAT_02001dd8,&local_20);
    FUN_013e2500(*(undefined8 *)PTR_DAT_02001dd8,local_20,0,1);
    (**(code **)(*local_20 + 0x90))(local_20);
    FUN_013ca8c0(param_1,*(undefined8 *)PTR_DAT_02004fb8,&local_20);
    FUN_013e2500(*(undefined8 *)PTR_DAT_02004fb8,local_20,0,1);
    (**(code **)(*local_20 + 0x90))(local_20);
    FUN_013ca8c0(param_1,*(undefined8 *)PTR_DAT_02005118,&local_20);
    FUN_013e2500(*(undefined8 *)PTR_DAT_02005118,local_20,0,1);
    (**(code **)(*local_20 + 0x90))(local_20);
    FUN_013ca8c0(param_1,*(undefined8 *)PTR_DAT_02001630,&local_20);
    FUN_013e2500(*(undefined8 *)PTR_DAT_02001630,local_20,0,1);
    (**(code **)(*local_20 + 0x90))(local_20);
    FUN_013ca8c0(param_1,*(undefined8 *)PTR_DAT_02003118,&local_20);
    FUN_013e2500(*(undefined8 *)PTR_DAT_02003118,local_20,0,1);
  }
  FUN_00410f20(local_20);
  (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x90))(*(longlong **)(param_1 + 0x8c0));
  if (*(char *)(param_1 + 0xa9) != '\0') {
    FUN_00805990(param_1);
  }
  FUN_01aceb90(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),1);
  FUN_01ae4310(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798));
  FUN_01add6f0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0x798),0);
  return;
}

