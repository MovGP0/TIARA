/* Ghidra address: 019a1aa0 */
/* Ghidra symbol: FUN_019a1aa0 */


undefined1 FUN_019a1aa0(longlong param_1,undefined1 *param_2,byte *param_3,byte *param_4)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  byte *local_50;
  byte *local_48;
  undefined1 local_39;
  longlong *local_38;
  undefined1 *local_30;
  
  local_39 = 0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  *param_4 = 1;
  iVar8 = *(int *)(param_1 + 0x10);
  iVar7 = 0;
  local_58 = param_1;
  local_50 = param_3;
  local_48 = param_4;
  local_30 = param_2;
  if (-1 < iVar8 + -1) {
    do {
      local_38 = (longlong *)FUN_00b94e60(local_58,iVar7);
      cVar2 = FUN_0198a580(local_38);
      plVar1 = local_38;
      if (cVar2 == '\x04') {
        uVar6 = (**(code **)(*local_38 + 0xf8))(local_38);
        cVar2 = FUN_01d05080(plVar1);
        cVar3 = FUN_019a18e0(auStack_78,local_38);
        if (((cVar3 == '\0') || (cVar2 != '\0')) && (cVar2 = FUN_01d3fc30(uVar6), cVar2 == '\0')) {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
        *local_48 = *local_48 & bVar4;
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if (*local_48 == 0) {
    iVar8 = *(int *)(local_58 + 0x10);
    iVar7 = 0;
    if (-1 < iVar8 + -1) {
      do {
        local_38 = (longlong *)FUN_00b94e60(local_58,iVar7);
        cVar2 = FUN_0198a580(local_38);
        if (cVar2 == '\x04') {
          uVar6 = (**(code **)(*local_38 + 0xf8))(local_38);
          cVar2 = FUN_01d3f4b0(local_38,0);
          if (((cVar2 == '\0') && (cVar2 = FUN_019a1a10(auStack_78,local_38), cVar2 == '\0')) &&
             (cVar2 = FUN_01d3fc30(uVar6), cVar2 == '\0')) {
            bVar4 = 0;
          }
          else {
            bVar4 = 1;
          }
          cVar2 = FUN_019a18e0(auStack_78,local_38);
          if ((cVar2 == '\0') && (cVar2 = FUN_01d3fc30(uVar6), cVar2 == '\0')) {
            bVar5 = 0;
          }
          else {
            bVar5 = 1;
          }
          *local_50 = *local_50 | bVar4;
          *local_48 = *local_48 | bVar5;
          if ((*local_50 != 0) && (*local_48 != 0)) {
            return 1;
          }
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else {
    *local_30 = 1;
    local_39 = 0;
  }
  return local_39;
}

