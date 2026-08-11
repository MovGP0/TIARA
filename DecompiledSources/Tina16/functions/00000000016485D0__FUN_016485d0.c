/* Ghidra address: 016485d0 */
/* Ghidra symbol: FUN_016485d0 */


void FUN_016485d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res18 [2];
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  lVar3 = FUN_01647de0();
  iVar7 = *(int *)(lVar3 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      uVar4 = FUN_01647de0(param_1);
      lVar3 = FUN_004aeac0(uVar4,iVar6);
      cVar1 = FUN_01645040(*(undefined1 *)(lVar3 + 0x90));
      if (cVar1 == '\0') {
        if (*(char *)(*(longlong *)(lVar3 + 0x10) + 8) == '\x15') {
          iVar2 = FUN_00416db0(local_res18[0],*(undefined8 *)(param_1 + 0x18));
          if (iVar2 == 0) {
            FUN_004ae7e0(param_2,lVar3);
          }
        }
        else {
          lVar5 = FUN_01612bc0(*(longlong *)(lVar3 + 0x10),1);
          FUN_016477f0(param_1,local_30,*(undefined4 *)(lVar5 + 0xc));
          iVar2 = FUN_00416db0(local_res18[0],local_30[0]);
          if (iVar2 == 0) {
            FUN_004ae7e0(param_2,lVar3);
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_res18);
  return;
}

