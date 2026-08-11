/* Ghidra address: 0064d9c0 */
/* Ghidra symbol: FUN_0064d9c0 */


void FUN_0064d9c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (((*(uint *)(param_1 + 0xa0) & 0x20) != 0) && ((*(ushort *)(param_1 + 0x34) & 1) == 0)) {
    FUN_0064dd90(param_1,local_20);
    iVar4 = FUN_00416db0(*(undefined8 *)(param_1 + 0x10),local_20[0]);
    if (iVar4 == 0) {
      lVar1 = *(longlong *)(param_1 + 8);
      if (lVar1 != 0) {
        cVar3 = FUN_004113d0(lVar1,&PTR_FUN_0063d930);
        if ((cVar3 != '\0') && ((*(ushort *)(lVar1 + 0x34) & 1) != 0)) goto LAB_0064da4a;
      }
      bVar2 = true;
      goto LAB_0064da50;
    }
  }
LAB_0064da4a:
  bVar2 = false;
LAB_0064da50:
  FUN_004d3c50(param_1,param_2);
  if (bVar2) {
    FUN_0064de00(param_1,param_2);
  }
  FUN_00414480(local_20);
  return;
}

