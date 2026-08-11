/* Ghidra address: 01be4d70 */
/* Ghidra symbol: FUN_01be4d70 */


undefined1 FUN_01be4d70(longlong param_1)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_005fccd0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xb8),local_20);
  FUN_005fccd0(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110),&local_28);
  iVar4 = FUN_00416db0(local_20[0],local_28);
  if (iVar4 == 0) {
    bVar6 = *(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb8) + 0x18) +
                     0x31) ==
            *(char *)(*(longlong *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0x110) + 0x18) +
                     0x31);
  }
  else {
    bVar6 = false;
  }
  if ((bVar6) &&
     (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb8) + 0x28) ==
      *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0x110) + 0x28))) {
    cVar1 = FUN_005fced0(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xb8));
    cVar2 = FUN_005fced0(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
    if ((cVar1 != cVar2) ||
       (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb8) + 0x2c) !=
        *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0x110) + 0x2c))) goto LAB_01be4ecb;
    bVar6 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb8) + 0x18) +
                    0x28) ==
            *(int *)(*(longlong *)(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0x110) + 0x18) +
                    0x28);
  }
  else {
LAB_01be4ecb:
    bVar6 = false;
  }
  if (bVar6) {
    iVar4 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xb8));
    iVar5 = FUN_005fce00(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
    if (iVar4 == iVar5) {
      uVar3 = 1;
      goto LAB_01be4f07;
    }
  }
  uVar3 = 0;
LAB_01be4f07:
  FUN_00414560(&local_28,2);
  return uVar3;
}

