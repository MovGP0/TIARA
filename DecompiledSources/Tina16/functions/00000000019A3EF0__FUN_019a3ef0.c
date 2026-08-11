/* Ghidra address: 019a3ef0 */
/* Ghidra symbol: FUN_019a3ef0 */


undefined1 FUN_019a3ef0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_79;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined1 local_60 [48];
  undefined8 local_30 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_30[0] = 0;
  local_68 = 0;
  local_79 = 0;
  if (((param_2 != (longlong *)0x0) && (cVar2 = FUN_0198a580(param_2), cVar2 == '\x04')) &&
     ((sVar3 = (**(code **)(*param_2 + 0xf8))(param_2), sVar3 == 0x3a ||
      (sVar3 = (**(code **)(*param_2 + 0xf8))(param_2), sVar3 == 0x96)))) {
    local_79 = 1;
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x30) + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        if (*(char *)(param_1 + 0x78) == '\0') {
          (**(code **)(*param_2 + 0x288))(param_2,&local_70);
          lVar1 = local_70;
          FUN_00c3d330(*(undefined8 *)(param_1 + 0x28),local_60,iVar5);
          FUN_004169a0(&local_78,local_60);
          if (lVar1 == local_78) {
            bVar7 = true;
          }
          else if ((lVar1 == 0) || (local_78 == 0)) {
            bVar7 = false;
          }
          else {
            iVar4 = FUN_0043e420(lVar1,local_78);
            bVar7 = iVar4 == 0;
          }
          if (bVar7) {
            local_79 = 0;
          }
        }
        else {
          (**(code **)(*param_2 + 0x288))(param_2,local_30);
          FUN_00c3d330(*(undefined8 *)(param_1 + 0x28),local_60,iVar5);
          FUN_004169a0(&local_68,local_60);
          iVar4 = FUN_00416db0(local_30[0],local_68);
          if (iVar4 == 0) {
            local_79 = 0;
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  FUN_00414560(&local_78,3);
  FUN_00414480(local_30);
  return local_79;
}

