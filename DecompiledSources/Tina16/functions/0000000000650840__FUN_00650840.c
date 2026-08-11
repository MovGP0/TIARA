/* Ghidra address: 00650840 */
/* Ghidra symbol: FUN_00650840 */


void FUN_00650840(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (param_1[0x3f] != 0) {
    lVar1 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar1 != 0) {
      lVar1 = param_1[0x3f];
      lVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
      bVar3 = lVar1 != *(longlong *)(lVar2 + 0x98);
      goto LAB_00650888;
    }
  }
  bVar3 = false;
LAB_00650888:
  if (bVar3) {
    (*(code *)param_1[0x3f])(param_1[0x40],param_1);
  }
  else if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) && (param_1[0x18] != 0)) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x30))((longlong *)param_1[0x18],param_1);
  }
  else if (param_1[0x3f] != 0) {
    (*(code *)param_1[0x3f])(param_1[0x40],param_1);
  }
  return;
}

