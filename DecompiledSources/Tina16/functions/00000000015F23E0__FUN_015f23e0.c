/* Ghidra address: 015f23e0 */
/* Ghidra symbol: FUN_015f23e0 */


undefined1 FUN_015f23e0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_49;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_49 = 0;
  iVar6 = -1;
  bVar1 = false;
  do {
    iVar6 = iVar6 + 1;
    if (iVar6 < *(int *)(param_1 + 0x10)) {
      FUN_00b94e60(param_1,iVar6);
      uVar3 = FUN_00b94e60(param_1,iVar6);
      cVar2 = FUN_0198a580(uVar3);
      if (cVar2 == '\x04') {
        uVar3 = FUN_00b94e60(param_1,iVar6);
        FUN_01d03160(uVar3);
        plVar4 = (longlong *)FUN_00b94e60(param_1,iVar6);
        (**(code **)(*plVar4 + 0x288))(plVar4,&local_30);
        uVar3 = FUN_00b94e60(param_1,iVar6);
        cVar2 = FUN_01d04d40(uVar3);
        if (cVar2 != '\0') {
          lVar5 = FUN_00b94e60(param_1,iVar6);
          cVar2 = *(char *)(*(longlong *)(lVar5 + 0x1a8) + 0x70) == '\x03';
          lVar5 = FUN_00b94e60(param_1,iVar6);
          if (*(char *)(*(longlong *)(lVar5 + 0x1a8) + 0x70) == '\x01') {
            lVar5 = FUN_00b94e60(param_1,iVar6);
            if (*(longlong *)(*(longlong *)(lVar5 + 0x1a8) + 8) != 0) {
              lVar5 = FUN_00b94e60(param_1,iVar6);
              cVar2 = FUN_015f23e0(*(undefined8 *)(*(longlong *)(lVar5 + 0x1a8) + 8));
            }
          }
          if (cVar2 != '\0') {
            local_49 = 1;
            goto LAB_015f250b;
          }
        }
      }
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
LAB_015f250b:
      FUN_00414560(&local_40,3);
      return local_49;
    }
  } while( true );
}

