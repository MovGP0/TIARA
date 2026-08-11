/* Ghidra address: 018d6930 */
/* Ghidra symbol: FUN_018d6930 */


int FUN_018d6930(longlong param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                undefined4 param_5,int param_6,char param_7,char param_8)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  longlong local_38;
  int local_2c;
  
  local_38 = 0;
  local_4c = 0;
  local_58 = param_2;
  iVar7 = FUN_0044f060();
  if ((iVar7 == 2) &&
     ((cVar5 = FUN_005fcf90(*(undefined8 *)(param_4 + 0x70)), cVar5 == '\x01' || (param_8 != '\0')))
     ) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_44 = 0;
  bVar3 = true;
  bVar2 = false;
  if (bVar4) {
    uVar6 = FUN_005fcf90(*(undefined8 *)(param_4 + 0x70));
    FUN_01807c80(&local_38,param_3,uVar6,0);
    local_2c = FUN_00414cd0(local_38);
    iVar7 = FUN_00414cc0(param_3);
    bVar2 = iVar7 < local_2c;
  }
  else {
    local_2c = FUN_00414cc0(param_3);
  }
  FUN_018d4080(param_1,local_2c);
  local_40 = FUN_018d4260(param_1,param_5);
  lVar10 = FUN_018d3e60(local_40,0);
  if (*(char *)(lVar10 + 0x1c) == '\0') {
    FUN_005fce70(*(undefined8 *)(param_4 + 0x70),*(undefined1 *)(lVar10 + 0x14));
  }
  FUN_018d68f0(auStack_78);
  local_48 = 0;
  iVar7 = local_2c;
  if (-1 < local_2c + -1) {
    do {
      lVar10 = FUN_018d3e60(local_40,local_48 - local_44);
      if ((local_48 != 0) && (*(char *)(lVar10 + 0x1c) == '\0')) {
        FUN_005fce70(*(undefined8 *)(param_4 + 0x70),*(undefined1 *)(lVar10 + 0x14));
        FUN_018d68f0(auStack_78);
      }
      if (((bVar2) && (0x7f < *(byte *)(local_38 + -1 + (longlong)(local_48 + 1)))) && (bVar3)) {
        local_44 = local_44 + 1;
        bVar3 = false;
        iVar8 = 0;
      }
      else {
        bVar3 = true;
        iVar8 = param_6;
      }
      if (local_48 < 1) {
        *(int *)(*local_58 + (longlong)local_48 * 4) =
             *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)local_48 * 4) + iVar8;
      }
      else {
        *(int *)(*local_58 + (longlong)local_48 * 4) =
             (*(int *)(*(longlong *)(param_1 + 0x38) + (longlong)local_48 * 4) -
             *(int *)(*(longlong *)(param_1 + 0x38) + (longlong)(local_48 + -1) * 4)) + iVar8;
      }
      if (*(char *)(lVar10 + 0x1d) != '\0') {
        lVar10 = (longlong)local_48;
        uVar9 = FUN_0040c770((double)*(int *)(*local_58 + lVar10 * 4) / 1.5);
        *(undefined4 *)(*local_58 + lVar10 * 4) = uVar9;
      }
      local_4c = local_4c + *(int *)(*local_58 + (longlong)local_48 * 4);
      if ((param_7 != '\0') && (0 < local_48)) {
        piVar1 = (int *)(*local_58 + (longlong)local_48 * 4);
        *piVar1 = *piVar1 + *(int *)(*local_58 + (longlong)(local_48 + -1) * 4);
      }
      local_48 = local_48 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_004144d0(&local_38);
  return local_4c;
}

