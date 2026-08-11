/* Ghidra address: 00c64a80 */
/* Ghidra symbol: FUN_00c64a80 */


void FUN_00c64a80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_58 [8];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  DAT_02019cf0 = param_2;
  *(undefined8 *)(param_1 + 0x68) = param_2;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_00c64740(param_1,param_1 + 0x10,*(undefined8 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_007ff680(*(longlong *)(param_1 + 0x10),0);
  }
  FUN_00c64740(param_1,param_1 + 0x20,*(undefined8 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_007ff680(*(longlong *)(param_1 + 0x20),0);
  }
  FUN_00c64740(param_1,param_1 + 8,*(undefined8 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_007ff680(*(longlong *)(param_1 + 8),0);
  }
  FUN_00c64740(param_1,param_1 + 0x18,*(undefined8 *)(param_1 + 0x28));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_007ff680(*(longlong *)(param_1 + 0x18),0);
  }
  FUN_00c64740(param_1,param_1 + 0x60,*(undefined8 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_007ff680(*(longlong *)(param_1 + 0x60),0);
  }
  FUN_00c64740(param_1,*(longlong *)(param_1 + 0x58) + 0x10,
               *(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x18));
  thunk_FUN_03e49910(param_2,&local_48);
  thunk_FUN_03abe598(param_2,local_58);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x98);
    thunk_FUN_0414fb0c(param_2,FUN_00c63fe0,(longlong)iVar2);
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x130))(*(longlong **)(param_1 + 0x10),0);
    FUN_00655f80(*(undefined8 *)(param_1 + 0x10),param_2);
    FUN_007fdf50(*(undefined8 *)(param_1 + 0x10),1);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(longlong *)(param_1 + 8) + 0x9c);
    thunk_FUN_0414fb0c(param_2,FUN_00c64080,(longlong)iVar3);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x130))(*(longlong **)(param_1 + 8),0);
    FUN_00655f80(*(undefined8 *)(param_1 + 8),param_2);
    FUN_007fdf50(*(undefined8 *)(param_1 + 8),1);
  }
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    iVar5 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x130))(plVar1,0);
    FUN_00655f80(*(undefined8 *)(param_1 + 0x20),param_2);
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x98);
    FUN_007fdf50(*(longlong *)(param_1 + 0x20),1);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 == (longlong *)0x0) {
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x130))(plVar1,0);
    FUN_00655f80(*(undefined8 *)(param_1 + 0x18),param_2);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9c);
    FUN_007fdf50(*(longlong *)(param_1 + 0x18),1);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00806b40(*(longlong *)(param_1 + 0x10),0);
    FUN_00806af0(*(undefined8 *)(param_1 + 0x10),0);
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x10),iVar3 + local_4c);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00806b40(*(longlong *)(param_1 + 8),0);
    FUN_00806af0(*(undefined8 *)(param_1 + 8),iVar2);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 8),local_50);
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_00806b40(*(longlong *)(param_1 + 0x20),0);
    FUN_00806af0(*(undefined8 *)(param_1 + 0x20),iVar2 + local_50);
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x20),iVar3 + local_4c);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_00806b40(*(longlong *)(param_1 + 0x18),iVar3 + local_4c);
    FUN_00806af0(*(undefined8 *)(param_1 + 0x18),0);
    FUN_0064cbf0(*(undefined8 *)(param_1 + 0x18),iVar2 + iVar5 + local_50);
  }
  FUN_00c63fb0(param_2,((iVar2 + local_40) - local_48) + iVar5,
               ((iVar3 + local_3c) - local_44) + iVar4);
  *(int *)(param_1 + 0xac) = iVar2 + iVar5;
  *(int *)(param_1 + 0xb0) = iVar3 + iVar4;
  FUN_00c65a80(param_1,param_2);
  return;
}

